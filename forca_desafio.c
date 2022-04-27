#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavra[] = "forca";
    int tam = strlen(palavra);
    char tentativas[tam + 1];
    int chances = tam;

    for (int i = 0; i < tam; i++)
    {
        tentativas[i] = '_';
    }

    do
    {
        printf("Status: ");

        for (int i = 0; i < tam; i++)
            {
                printf("%c ", tentativas[i]);
            }
        tentativas[tam] = '\0';

        char letra;

        printf("\nDigite uma letra: ");
        scanf("%c", &letra);
        getchar();

        int acerto = 0;
        for (int i = 0; i < tam; i++)
        {
            if (palavra[i] == letra)
            {
                tentativas[i] = letra;
                acerto = 1;
            }
        }

        if (acerto != 1)
        {
            chances--;
        }

        printf("\n");

    } while (strcmp(tentativas, palavra) != 0 && chances > 0);

    if (chances > 0)
    {
        printf("Voce venceu!");
        printf("\nPalavra: %s", palavra);
    }
    else
    {
        printf("Perdeu");
        printf("\nPalavra: %s", palavra);
    }

    return 0;
}