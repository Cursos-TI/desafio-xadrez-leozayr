#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() 
{
    int torre = 0, rainha = 0;
    //variáveis com os nomes das peças para facilitar o entendimento da movimentação.

    while (torre < 5)
    {
        printf ("Torre: cima.\n");
        torre++;
    }
    //Torre por ser a mais simples foi feita em While.

    printf ("\n");
    printf ("-----------------------\n");
    printf ("\n");
    //criação de espaços entre as movimentações das peças para melhor vizualização do desafio.

    do
    {
        printf ("Rainha: esquerda.\n");
        rainha++;
    } while (rainha < 8);
    //rainha por ter o número mais elevado de casas andadas foi feita em Do-While
    
    printf ("\n");
    printf ("-----------------------\n");
    printf ("\n");

    for (int bispo = 0; bispo < 5; bispo++) 
    {
        printf ("Bispo: direita cima.\n");
    }
    //Bispo por ser um pouco mais detalhado foi feito em "For".

    printf ("\n");
    printf ("-----------------------\n");
    printf ("\n");

    for (int cavalo1; cavalo1 < 1; cavalo1++)
    {
        for (int cavalo2; cavalo2 < 2; cavalo2++)
        {
            printf ("Cavalo: Esquerda\n");
        }        
        printf ("Cavalo: Baixo\n");
    }
        //Cavalo fazedno movimentação em "L" através do "for" para facilitar a regibilidade do código.

    printf ("\n");
    printf ("-----------------------\n");
    printf ("\n");


    return 0;
}