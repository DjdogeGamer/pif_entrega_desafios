#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAB 4

int main()
{
    srand(time(NULL));
    int tab[TAB][TAB];
    int tab_tam = TAB * TAB;
    int tam_num = tab_tam/ 2;
    int nums[tam_num], num_achados[tam_num];
    int i, j, colocado = 0, p1 = 0, p2 = 0;
    int linha_aux, coluna_aux;
    int rodadas = 0;

    // iniciar tabu
    for (i = 0; i < TAB; i++)
    {
        for (j = 0; j < TAB; j++)
        {
            tab[i][j] = 0;
        }
    }

    for (i = 0; i < tam_num; i++)
    {
        nums[i] = i + 1;
        num_achados[i] = 0;
    }

    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < tam_num; i++)
        {
            colocado = 0;
            do
            {
                linha_aux = rand() % TAB;
                coluna_aux = rand() % TAB;

                if (tab[linha_aux][coluna_aux] == 0)
                {
                    tab[linha_aux][coluna_aux] = nums[i]; 
                    colocado = 1;
                }

            } while (colocado == 0);
        }
    }

    do
    {
      // placar
      printf("P1: %d\nVS\nP2: %d\n\n", p1, p2);
        for (i = 0; i < TAB; i++)
        {
            for (j = 0; j < TAB; j++)
            {
                int achados = 0;

                for (int k = 0; k < tam_num; k++)
                {
                    if (tab[i][j] == nums[k] && num_achados[k] == 1)
                    {
                        printf("%d ", nums[k]); 
                        achados = 1;               
                    }
                }
                if (achados == 0)
                {
                    printf("@ ");
                }
            }
            printf("\n");
        }
        printf("\n");

        int pos_l1 = 0, pos_l2 = 0, pos_col1 = 0, pos_col2 = 0;

        printf("Jogador %d, insira a L e C a ser revelado: ", 1 + rodadas % 2);
        scanf("%d%d", &pos_l1, &pos_col1);

        printf("Jogador %d, insira a L e C a ser revelado: ", 1 + rodadas % 2);
        scanf("%d%d", &pos_l2, &pos_col2);

        if (tab[pos_l1][pos_col1] == tab[pos_l2][pos_col2] && (pos_l1 != pos_l2 || pos_col1 != pos_col2)) 
        {
            for (i = 0; i < tam_num; i++)
            {
                if (tab[pos_l1][pos_col1] == nums[i])
                {
                    if (num_achados[i] == 0 && rodadas % 2 == 0)
                    {
                        num_achados[i] = 1;
                        p1++;
                    }
                    else if (num_achados[i] == 0)
                    {
                        num_achados[i] = 1;
                        p2++;
                    }
                }
            }
        }
        for (i = 0; i < TAB; i++)
        {
            for (j = 0; j < TAB; j++)
            {
                int achados = 0;

                if (i == pos_l1 && j == pos_col1)
                {
                    printf("%d ", tab[i][j]);
                }
                else if (i == pos_l2 && j == pos_col2)
                {
                    printf("%d ", tab[i][j]);
                } else
                {
                    for (int k = 0; k < tam_num; k++)
                    {
                        if (tab[i][j] == nums[k] && num_achados[k] == 1)
                        {
                            printf("%d ", nums[k]); 
                            achados = 1;               
                        }
                    }
                    if (achados == 0)
                    {
                        printf("# ");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
        rodadas++; // conta rodadas

    } while(p1 + p2 < tam_num);

    if (p1 > p2)
    {
        printf("Jogador 1 ganhou de %d vs %d depois de %d rodadas\n", p1, p2, rodadas);
    }
    else if (p1 == p2)
    {
        printf("Empate de %d vs %d depois de %d rodadas\n", p1, p2, rodadas);
    } else
    {
        printf("Jogador 2 ganhou de %d vs %d depois de %d rodadas\n", p2, p1, rodadas);
    }
    return 0;
}