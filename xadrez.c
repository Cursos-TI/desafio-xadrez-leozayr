#include <stdio.h>

void movimentoTorre() 
{
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
}
 
void movimentoRainha() 
{
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
}

    //Utilização de 'void' para que o código seja mais legivel e simples.

int main() {

    movimentoTorre();

    printf ("\n");
    printf ("------------------\n");
    printf ("\n");

    movimentoRainha();

    printf ("------------------\n");

    for (int bispo1 = 0; bispo1 < 5; bispo1++)
    {
        for (int bispo2 = 0; bispo2 < 1; bispo2++)
        {
            printf ("direita, ");
        }
        printf ("cima\n");
    }

    printf ("------------------\n");

    for (int cavalo1 = 0, cavalo2 = 0 ; cavalo1 < 2, cavalo2 < 2; cavalo1++, cavalo2++)
    {
        if (cavalo1 == 2) continue;
    
            printf ("Cavalo: Cima.\n");

    }
        printf ("Cavalo: Direita.\n");

        printf ("------------------\n");

    return 0;
    
    //Código feito através de 'for' para prática pois é o recomendado.

}