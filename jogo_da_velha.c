#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
  int fim = 0;
  int draw = 0;
  int jogo[3][3];
  
    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          jogo[i][j] = 0;
        }
    }

    void mostrarJogo(int jogo[3][3])
    {
        for(int i = 0; i < 3; i++) 
        {
            for(int j = 0; j < 3; j++)
             {
                printf(" %i ",jogo[i][j]);
             }
        printf("\n");
      } 
    }

    void verificaEmpate(int jogo[3][3])
    {
      int draw_count = 0;
      for(int i = 0; i < 3; i++)
      {
        for(int j = 0; j < 3; j++)
         {
            if(jogo[i][j] != 0)
            {
              draw_count+=1;
            }
          }
      } 
      if(draw_count == 9)
      {
        draw = 1;
        printf("Empate!\n");
      }
    }

  mostrarJogo(jogo);

  while(fim !=1 & draw !=1)
  {
    int l, c;

    if(fim !=1 & draw !=1)
    {
      printf("> Jogador 1 Linha e Coluna:\n");
      scanf("%i %i",&l, &c);
      l-=1;
      c-=1;
      if(jogo[l][c] == 0 && jogo[l][c] != 2)
      {
        jogo[l][c]= 1;
      }

      // verifica j1
      for(int i = 0; i < 3; i++)
      {
        if(jogo[i][0] == 1 && jogo[i][1] == 1 && jogo[i][2] == 1)
        {
          printf("> jogador 1 venceu! na vertical\n");
          fim = 1;
        }
      } 

      for(int i = 0; i < 3; i++){
        if(jogo[0][i] == 1 && jogo[1][i] == 1 && jogo[2][i] == 1)
        {
          printf("> jogador 1 venceu! na horizontal\n");
          fim = 1;
        }
      }

      if(jogo[0][0] == 1 && jogo[1][1] == 1 && jogo [2][2] == 1)
      {
        printf("> Jogador 1 venceu na diagonal\n");
        fim = 1;
      } else if(jogo[2][0] == 1 && jogo[1][1] == 1 && jogo [0][2] == 1)
      {
        printf("> Jogador 1 venceu na diagonal\n");
        fim = 1;
      }

      mostrarJogo(jogo);
      if(draw != 1){
        verificaEmpate(jogo);
      }
    }

    // verifica jh2
    if(fim !=1 & draw !=1){
      printf("> Jogador 2 Linha e Coluna:\n");
      scanf("%i %i",&l, &c);
      l-=1;
      c-=1;
      if(jogo[l][c] == 0 && jogo[l][c] !=1)
      {
          jogo[l][c] = 2;
      }

      for(int i = 0; i < 3; i++){
        if(jogo[i][0] == 2 && jogo[i][1] == 2 && jogo[i][2] == 2)
        {
          printf("> jogador 2 venceu! na horizontal!\n");
          fim = 1;
        }
      }

      for(int i = 0; i < 3; i++)
      {
        if(jogo[0][i] == 2 && jogo[1][i] == 2 && jogo[2][i] == 2)
        {
          printf("> jogador 2 venceu na vertical!\n");
          fim = 1;
        }
      }

      if(jogo[0][0] == 2 && jogo[1][1] == 2 && jogo[2][2] == 2)
      {
        printf("> Jogador 2 venceu na diagonal!\n");
        fim = 1;
      } else if(jogo[2][0] == 2 && jogo[1][1] == 2 && jogo [0][2] == 2)
      {
        printf("> Jogador 2 venceu na diagonal!\n");
        fim = 1;
      }
      mostrarJogo(jogo);
      if(draw !=1) {
        verificaEmpate(jogo);
      }
    }
  }
return 0; 
}