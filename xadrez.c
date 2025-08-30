#include <stdio.h>

int main(){

    
    int torre = 1, bispo = 1, rainha, cavalo = 1, contagem;
    

    // verifica se o número é menor ou igual a cinco até parar de rodar o código. haverá um incremento para o valor da variável torre.

    printf("\nTorre se move para: \n");

    contagem = 1;
    
    do {

        printf("%d Direita\n", contagem);
        torre++;
        contagem++;

    } while (torre <= 5);


    contagem = 1;
    // Movimento do Bispo

    printf("\n\nO bispo se move: \n");

    while (bispo <= 5){

        printf("%d Direita, Cima\n", contagem);
        bispo++;
        contagem++;
    }

    contagem = 1;
    // Rainha. função for repete 8 vezes enquanto variável rainha não for maior que 8

    printf("\n\nA rainha se move para: \n");

    for (rainha = 1; rainha <= 8; rainha++){

        printf("%d Esquerda\n", contagem);
        contagem++;
    }


    // Cavalo. loops aninhados

    /*
    Abaixo o looping externo só precisa fazer uma repetição, enquanto o interno precisa de duas.
    */
    
    contagem = 1;

    printf("\n\nO cavalo se move\n");
    
    while (contagem <= 1){

        for (cavalo = 1; cavalo <= 2; cavalo++){

            printf("\n%d Baixo", contagem);
            contagem++;
        }
        

        printf("\n%d esquerda\n", contagem);



    }

    return 0;
}
