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
    int torre, bispo, rainha, cavalo, escolha;
    char direcao, direcao2;
    printf("escolha a peça que quer movimentar\n");
    printf("1:torre\n");
    printf("2:bispo\n");
    printf("3:rainha\n");
    printf("4: cavalo\n");
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
    case 4:
        // Movimentação do Cavalo
        printf("Escolha a direção do cavalo:\n");
        printf("1: Cima\n");
        printf("2: Baixo\n");
        printf("3: Direita\n");
        printf("4: Esquerda\n");
        getchar();             // Para limpar o buffer do Enter anterior
        scanf("%c", &direcao); // Direção principal do cavalo

        printf("Escolha a segunda direção do cavalo:\n");
        printf("1: Direita\n");
        printf("2: Esquerda\n");
        getchar();              // Para limpar o buffer do Enter anterior
        scanf("%c", &direcao2); // Segunda direção do cavalo

        printf("Movimentos do cavalo:\n");

        // Movimentação do cavalo com base nas direções
        if (direcao == '1' && direcao2 == '1')
        {
            // 2 casas para cima e 1 para a direita
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para cima\n");
            }
            printf("Cavalos se movem: 1 casa para a direita\n");
        }
        else if (direcao == '1' && direcao2 == '2')
        {
            // 2 casas para cima e 1 para a esquerda
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para cima\n");
            }
            printf("Cavalos se movem: 1 casa para a esquerda\n");
        }
        else if (direcao == '2' && direcao2 == '1')
        {
            // 2 casas para baixo e 1 para a direita
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para baixo\n");
            }
            printf("Cavalos se movem: 1 casa para a direita\n");
        }
        else if (direcao == '2' && direcao2 == '2')
        {
            // 2 casas para baixo e 1 para a esquerda
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para baixo\n");
            }
            printf("Cavalos se movem: 1 casa para a esquerda\n");
        }
        else if (direcao == '3' && direcao2 == '1')
        {
            // 2 casas para a direita e 1 para cima
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para a direita\n");
            }
            printf("Cavalos se movem: 1 casa para cima\n");
        }
        else if (direcao == '3' && direcao2 == '2')
        {
            // 2 casas para a direita e 1 para baixo
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para a direita\n");
            }
            printf("Cavalos se movem: 1 casa para baixo\n");
        }
        else if (direcao == '4' && direcao2 == '1')
        {
            // 2 casas para a esquerda e 1 para cima
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para a esquerda\n");
            }
            printf("Cavalos se movem: 1 casa para cima\n");
        }
        else if (direcao == '4' && direcao2 == '2')
        {
            // 2 casas para a esquerda e 1 para baixo
            for (int i = 1; i <= 2; i++)
            {
                printf("Cavalos se movem: 1 casa para a esquerda\n");
            }
            printf("Cavalos se movem: 1 casa para baixo\n");
        }
        else
        {
            printf("Direção inválida.\n");
        }
        break;
    default:
        printf("Peça inexistente.\n");
        break;

   
    }
    if (escolha == torre)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf("direita\n");
        };
    }
    else if (escolha == bispo)
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 != 0)
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
        for (int i = 1; i <= 8; i++)
        {
            printf("esquerda\n");
        }
    }

    return 0;
}
