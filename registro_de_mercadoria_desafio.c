#include <stdio.h>
#include <string.h>

/*
Crie um sistema de gestao de mercadinho:

-Crie um tipo produto
-Crie uma função que cadastra produto
*/

typedef struct
{
  char nome[30];
  int codigo;
  float preco;
}Produto;

int main() {
    Produto brinquedos[10];
    int qtd_brinquedos_cadastrados = 0;

    menu(brinquedos, &qtd_brinquedos_cadastrados);

    return 0;
}

void menu(Produto* produtos, int* produtos_cadastrados)
{
float sum_mercadorias = 0.0;
int opcao;
char nome_buscado[30];

do
{
    printf("1. Castrar Mercadoria \n2. Consultar Mercadoria \n3. Consultar Valor Total \n4. Sair\n");
    printf("Opcao: ");
    scanf("%i", &opcao);
    getchar();

    switch(opcao)
    {
        case 1:
        cadastrar(produtos, produtos_cadastrados); 
        break;

        case 2:
        printf("\nDigite o nome do produto: ");
        scanf("%s", nome_buscado);
        getchar();
        
        int status_busca = buscar(produtos, *produtos_cadastrados, nome_buscado);

        if(status_busca != -1)
            {
                printf("\n---------- Resultado da Busca ---------");
                printf("\nNome: %s\nPreco: R$%.2f\nCodigo: %i\n", produtos[status_busca].nome, produtos[status_busca].preco, produtos[status_busca].codigo);
                printf("----------------------------------------\n");
            }
        else
            {
                printf("Produto nao encontrado!\n");
            }
        break;
        
        case 3:
        for(int i_prod = 0; i_prod < *produtos_cadastrados; i_prod++)
            {
                sum_mercadorias+=produtos[i_prod].preco;
            }
            printf("\nValor total das mercadorias: %.2f R$", sum_mercadorias);
        break;

        //sair
        case 4: printf("\nSaindo..."); 
        break;
    }
}while(opcao != 4);

}

// buscar
int buscar(Produto* produtos, int qtd_produtos, char* nome_produto)
{
  for(int i_produto = 0; i_produto < qtd_produtos; i_produto++)
    {
      if(strcmp(produtos[i_produto].nome, nome_produto) == 0)
      {
        return i_produto;
      }
    }
 
  return -1; // status do produto
}

//cadastrar

void cadastrar(Produto* produtos, int* i)
{
  char cont;
 
  do
  {
    printf("Digite o nome do produto: ");
    scanf("%s", produtos[*i].nome);
    getchar();

    printf("\nDigite codigo do produto: ");
    scanf("%i", &produtos[*i].codigo);
    getchar();

    printf("\nDigite o preco: ");
    scanf("%f", &produtos[*i].preco);
    getchar();
   
    *i += 1; // 

    printf("\nDeseja cadastrar mais produtos? (S/N) ");
    scanf("%c", &cont);
    getchar();

    printf("\n");
   
  }while(cont != 'N');
}


