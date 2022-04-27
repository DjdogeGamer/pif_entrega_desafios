// DONE
#include <stdio.h>

int main() 
{
    int idade, opc1, opc2, qtd;
    float total;
    char fim;

    printf("\nDigite sua idade: ");
    scanf("%i", &idade);
    if (idade < 18 ) { printf("Voce e menor de idade, portanto nao pode comprar bebidas\n");  fim = 'S'; }

    while(fim != 'S')
    {
    printf("\n\t ------ Bem vindo ------ \n");
    printf("\t\t1. Whisky\n\t\t2. Vodka\n\t\t3. Cerveja\n\t\t4. Cachaca\n");
    printf("\t -----------------------\n");
    printf("Escolha sua bebida:\n");
    scanf("%i", &opc1);
    getchar();

    switch (opc1)
    {
        case 1:
            printf("\t\t-Whisky-\n");
            printf("\t-----------------------\n");
            printf("\t|Codigo| Bebida |Preco|\n");
            printf("\t-----------------------\n");
            printf("\t| 101 | Whisky1 | 200 |\n");
            printf("\t| 102 | Whisky2 | 150 |\n");
            printf("\t| 103 | Whisky3 | 140 |\n");
            printf("\t-----------------------\n");
            printf("\nDigite o codigo da sua bebida: ");
            scanf("%i", &opc2);
            
            switch (opc2)
            {
            case 101:
                printf("101: Whisky1\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 200;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    } else if (qtd >= 100)
                    {
                        total = (float)total-((float)total*0.35);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    }
                    else 
                    {
                        printf("--------------------------------------");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("--------------------------------------\n");
                    }

                }
                break;
            case 102:
                printf("102: Whisky2\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 200;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    } else if (qtd >= 100)
                    {
                        total = (float)total-((float)total*0.35);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    }
                    else 
                    {
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("--------------------------------------\n");
                    }
                    
                }
                break;
            case 103:
                printf("103: Whisky1\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 200;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    } else if (qtd >= 100)
                    {
                        total = (float)total-((float)total*0.35);
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    }
                    else 
                    {
                        printf("--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("--------------------------------------\n");
                    }
                }
                break;
            default:
                printf("Codigo invalido\n");
                break;
            }
            break;

        case 2:

            printf("\t\t-Vodka-\n");
            printf("\t-----------------------\n");
            printf("\t|Codigo| Bebida |Preco|\n");
            printf("\t-----------------------\n");
            printf("\t| 201 | Vodka1 |  60  |\n");
            printf("\t| 202 | Vodka2 |  40  |\n");
            printf("\t| 203 | Vodka3 |  30  |\n");
            printf("\t-----------------------\n");
            printf("\nDigite o codigo da sua bebida: ");
            scanf("%i", &opc2);

            switch (opc2)
            {
            case 201:
                printf("201: Vodka1\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 200;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100 )
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Whisky1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            case 202:
                printf("202: Vodka1\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 200;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100)
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            case 203:
                printf("203: Vodka3\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 200;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100 )
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Vodka3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Whisky3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            default:
                printf("Codigo Invalido\n");
                break;
            }
            break;

        case 3:
            printf("\t\t-Cerveja-\n");
            printf("\t-----------------------\n");
            printf("\t|Codigo| Bebida |Preco|\n");
            printf("\t-----------------------\n");
            printf("\t| 301 | Cerveja1| 1.50|\n");
            printf("\t| 302 | Cerveja2| 2.0 |\n");
            printf("\t| 303 | Cerveja3| 3.0 |\n");
            printf("\t-----------------------\n");
            printf("\nDigite o codigo da sua bebida: ");
            scanf("%i", &opc2);

            switch (opc2)
            {
            case 301:
                printf("301: Cerveja1\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = (float)qtd * 1.50;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100)
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja1\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;

            case 302:
                printf("302 Cerveja2\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 2;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100 )
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja2\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;

            case 303:
                printf("203: Cerveja 3\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 3;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100)
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            default:
                printf("Codigo Invalido\n");
                break;
            }
            break;
        
        case 4:

            printf("\t\t-Cachaca-\n");
            printf("\t-----------------------\n");
            printf("\t|Codigo| Bebida |Preco|\n");
            printf("\t-----------------------\n");
            printf("\t| 401 | Cachaca1| 8.0 |\n");
            printf("\t| 402 | Cachaca2| 20.0|\n");
            printf("\t| 403 | Cachaca3| 22.0| \n");
            printf("\t-----------------------\n");
            printf("\nDigite o codigo da sua bebida: ");
            scanf("%i", &opc2);

            switch (opc2)
            {
            case 401:
                printf("401: Cachaca\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 8;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100 )
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            case 402:
                printf("402: Cerveja 3\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 20;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100 )
                    {
                        total = (float)total-((float)total*0.35);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cachaca\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            case 403:
                printf("403: Cerveja 3\nDigite a quantidade:\n");
                scanf("%i", &qtd);
                total = qtd * 22;
                if(qtd < 1) { printf("Quantidade Invalida!\n"); } else 
                {
                    if(qtd >= 5 && qtd < 50) 
                    {
                        total = (float)total-((float)total*0.1);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 10 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 50 && qtd < 100)
                    {
                        total = (float)total-((float)total*0.3);
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 30 Porcento Aplicado\n", total);
                        printf("\n--------------------------------------\n");
                    } else if (qtd >= 100 )
                    {
                        total = (float)total-((float)total*0.35);
                        printf("--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\nDesconto de 35 Porcento Aplicado\n", total);
                        printf("--------------------------------------\n");
                    }
                    else 
                    {
                        printf("\n--------------------------------------\n");
                        printf("Bebida: Cerveja 3\nQuantidade: %i\n", qtd);
                        printf("O total da compra foi de R$ %.2f\n", total);
                        printf("\n--------------------------------------\n");
                    }
                }
                break;
            default:
                printf("Codigo Invalido\n");
                break;
            }
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }
    }

    return 0;
}