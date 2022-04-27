// caixa de supermercado
#include<stdio.h>

/*
Questão: Crie um algoritmo que simule o funcionamento de um caixa de supermercado.
O caixa fica aberto até o fim do expediente e pode processar a compra de vários clientes.
Cada cliente pode comprar vários itens. Ao ler cada item deve ser exibida uma mensagem para
o operador do caixa perguntando se há mais itens a serem processados. 
Ao final, exiba quantoa compra custou ao cliente. 
E então solicite do operador do caixa a informação se deseja fechar o caixa.
Quando o caixa for fechado, imprima quanto de dinheiro aquele caixa apurou no dia.
*/


int main(void) {
    float preco = 0.0;
    int codigos[30];
    char fim;
    float total_cliente = 0.0;
    float total_dia = 0.0;
    char opc;

    printf("\t --- Bem vindo! ---\n");
    
    do {
        int qtd_cadastros;
        do 
        {
            int i = 0;
            printf("\nDigite o codigo do item: ");
            scanf("%i", &codigos[i]);
            getchar();

            printf("Digite o o preco do item: ");
            scanf("%f", &preco);
            getchar();

            total_cliente+=preco;

            printf("Deseja registrar mais compras? (S/N): ");
            scanf("%c", &opc);
            getchar();
            qtd_cadastros = i+1;
            i++;
        } while(opc != 'N');

        total_dia+=total_cliente;
        printf("Produtos Cadastrados:\n");
        for (int j = 0; j < qtd_cadastros; j++)
        {
            printf("%i - %i\n", j+1, codigos[j]);
        }
        printf("Total da Operacao: R$ %.2f\n", total_cliente);
        total_cliente = 0;
        printf("Proximo...\n");

        printf("Deseja fechar o caixa? (S/N): ");
        scanf("%c", &fim);
        getchar();
      
    } while(fim != 'S');

    printf("\t --- FIM DO EXPEDIENTE ---\n");
    printf("\t Total do dia R$ %.2f\n", total_dia);

    return 0;
}