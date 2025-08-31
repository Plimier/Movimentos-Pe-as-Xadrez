#include <stdio.h>

/*
Bispo, torre e rainha ultilizam a recursividade para seus movimento. 

Nas funções recursivas há uma condição que se Verdadeira imprime o movimento e chama a sí mesma criando um looping.

*/

void tower(int t){

    if (t <= 5) {
        printf("Direita\n");

        tower(t + 1);
    }

}

void bishop(int b){

    if (b <= 5) {
        printf("Direita/Cima\n");

        bishop(b + 1);
    }


}

void queen(int q){

    if (q <= 8) {
        printf("Esquerda\n");

        queen(q + 1);
    }

}


int main(){

    
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1, contagem;
    

    // chama a função recursiva da torre.

    printf("\nTorre se move para: \n");

    tower(torre);
    
    // Movimento do Bispo. função recursiva.

    printf("\n\nO bispo se move com a Recursividade: \n");

    bishop(bispo);

    // Movimento Bispo. Loops aninhados.

    printf("\n\nBispo aninhado com loops. Quem é loops? \n");
    

    while (bispo <= 5) {

        while (bispo){

            printf("Direita/");

            break; // com break o código não fica em looping infinito.
            
        }
        printf("Cima\n");
        bispo++;
        

        
    }


    // Rainha. Recurcividade em looping por 8 vezes.

    printf("\n\nA rainha se move para: \n");

    queen(rainha);


    // Cavalo. loops aninhados e avançados. tenho que mostar que sei estrutura-los.

    /*
    Abaixo o looping externo só precisa fazer uma repetição, enquanto o interno precisa de duas.

    a maior parte do código a baixo não tem ultilidade prática e nem razão para estar lá.
    */
    


    printf("\n\nO cavalo se move\n");

    while (cavalo <= 1){

        for (cavalo = 1, contagem = 1; contagem <= 2 && cavalo != 3; contagem++, cavalo++){

            printf("%d Cima\n", contagem);

        }

        printf("%d Direita\n", contagem);


    }
    


    return 0;
}
