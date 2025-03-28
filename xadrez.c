#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    int torre = 1, bispo = 3, rainha = 2, escolha;
    printf("escolha a peça que quer movimentar\n");
    printf("1:torre\n");
    printf("2:bispo\n");
    printf("3:rainha\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        escolha = torre;
        break;
    case 2:
        escolha = bispo;
        break;
    case 3:
        escolha = rainha;
        break;
    default:
        printf("peça inexistente");
        break;
    };
    if (escolha == torre)
    {
        for (escolha; escolha <= 5; escolha++)
        {
            printf("direita\n");
        };
    }
    else if (escolha == bispo)
    {
        for (escolha; escolha <= 12; escolha++)
        {
            if (escolha % 2 != 0)
            {
                printf("cima\n");
            }
            else
            {
                printf("direita\n");
            }
        }
    }
    else if (escolha == rainha)
    {
        for (escolha; escolha <= 9; escolha++)
        {
            printf("esquerda\n");
        }
    }

    return 0;
}
