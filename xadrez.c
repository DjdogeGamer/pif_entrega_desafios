#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int mesa[8][8];

    // iniciar tabuleiro zerado
    for(int i = 0; i < 8; i++) 
    {
        for(int j = 0; j < 8; j++) 
        {
            mesa[i][j] = 0;
            printf("%i ", mesa[i][j]);
        }
        printf("\n");
    }

    // inserir 10 pecas do jogador 1
    for(int p = 1; p <=10;) // ate 10
    {
        int i = rand()%8; // limite de 8
        int j = rand()%8; 

        if(mesa[i][j] == 0) // vazio
        {
            mesa[i][j] = 1;
            p++;
        }
        
    }

    // posicionar torre do jogador 2
    int i, j; // novas posicoes para acessar linha e coluna

    for(int p = 1; p <= 1;)
    {
        i = rand()%8;
        j = rand()%8;

        if(mesa[i][j] == 0)
        {
            mesa[i][j] = 2;
            p++;
        }
    }

    int torre_linha = i; // posicao da torre em linha 
    int torre_coluna = j; // posicao da torre em coluna
    
    printf("\n");

    //mostrar jogo
    for(int i = 0; i < 8; i++) 
    {
        for(int j = 0; j < 8; j++) 
        {
           printf("%i ", mesa[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // verificar se elimina na vertical

    for(int l = 0; l < 8; l++)
    {
        if(mesa[l][torre_coluna] == 1)
        {
            printf("Elimina na vertical");
            break;
        }
    }

    // verficiar se elemina na horizontal

    for(int c = 0; c < 8; c++) {
        if(mesa[torre_linha][c] == 1)
        {
            printf("Elimina na horizontal");
            break;
        }
    }

    return 0;
}