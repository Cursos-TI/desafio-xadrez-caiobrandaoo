#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// implementar recursividade torre,bispo e rainha
void movertorre(int n)
{
    if (n > 0)
    {
        printf("cima\n");
        movertorre(n - 1);
    }
}
void moverrainha(int n)
{
    if (n > 0)
    {
        printf("esquerda\n");
        moverrainha(n - 1);
    }
}
void moverbispo(int n)
{
    if (n > 0)
    {
        printf("cima\ndireita\n");
        moverbispo(n - 1);
    }
}


int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    int torre, bispo, rainha, cavalo, escolha;
    printf("escolha a peça que quer movimentar\n");
    printf("1:torre\n");
    printf("2:bispo\n");
    printf("3:rainha\n");
    printf("4: cavalo\n");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        movertorre(5);
        break;
    case 2:
        moverbispo(5);
        break;
    case 3:
        moverrainha(8);
        break;
    case 4:
        for(int i=0;i<1;i++){for(int j=0;j<2;j++){printf("cima\n");}
        printf("direita\n");}
        break;
        
    }return 0;
}