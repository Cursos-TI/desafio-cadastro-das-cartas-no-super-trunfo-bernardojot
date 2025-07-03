#include <stdio.h>
#include <string.h>

int main()
{
    // Declaração das variáveis de cada carta
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2;
    float densidade_populacional1, densidade_populacional2;

    int opcao;

    // Menu principal do jogo
    printf("*** Super Trunfo ***\n");
    printf("1. Iniciar jogo\n2. Regras\n3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // Entrada de dados para a carta 1
        printf("\n--- Carta 1 ---\n");
        printf("Nome da cidade: ");
        getchar(); // Limpa o buffer antes do fgets
        fgets(nome1, 50, stdin);
        nome1[strcspn(nome1, "\n")] = '\0'; // Remove o '\n' final do fgets

        printf("População: ");
        scanf("%lu", &populacao1);

        printf("Área (em km²): ");
        scanf("%f", &area1);

        printf("PIB (em bilhões): ");
        scanf("%f", &pib1);

        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &pontos_turisticos1);

        // Cálculo de atributos
        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = pib1 / populacao1;

        // Entrada de dados para a carta 2
        printf("\n--- Carta 2 ---\n");
        printf("Nome da cidade: ");
        getchar(); // Limpa o buffer
        fgets(nome2, 50, stdin);
        nome2[strcspn(nome2, "\n")] = '\0';

        printf("População: ");
        scanf("%lu", &populacao2);

        printf("Área (em km²): ");
        scanf("%f", &area2);

        printf("PIB (em bilhões): ");
        scanf("%f", &pib2);

        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);

        // Cálculo de atributos
        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;

        // Escolha dos dois atributos para comparação
        int atributo1, atributo2;

        printf("\nEscolha o primeiro atributo a ser comparado:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. PIB per capita\n6. Densidade populacional\n");
        printf("Opção: ");
        scanf("%d", &atributo1);

        printf("\nEscolha o segundo atributo a ser comparado:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. PIB per capita\n6. Densidade populacional\n");
        printf("Opção: ");
        scanf("%d", &atributo2);

        // Verificação se o jogador escolheu o mesmo atributo duas vezes
        if (atributo1 == atributo2)
        {
            printf("\nERRO: Você escolheu o mesmo atributo duas vezes.\n");
            return 1;
        }

        // Variáveis para armazenar os valores dos atributos escolhidos
        float valor1_atributo1, valor2_atributo1;
        float valor1_atributo2, valor2_atributo2;
        char nome_atributo1[30], nome_atributo2[30];

        // Switch para identificar o primeiro atributo escolhido e atribuir os valores das duas cartas
        switch (atributo1)
        {
        case 1:
            valor1_atributo1 = populacao1;
            valor2_atributo1 = populacao2;
            strcpy(nome_atributo1, "População");
            break;
        case 2:
            valor1_atributo1 = area1;
            valor2_atributo1 = area2;
            strcpy(nome_atributo1, "Área");
            break;
        case 3:
            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;
            strcpy(nome_atributo1, "PIB");
            break;
        case 4:
            valor1_atributo1 = pontos_turisticos1;
            valor2_atributo1 = pontos_turisticos2;
            strcpy(nome_atributo1, "Pontos turísticos");
            break;
        case 5:
            valor1_atributo1 = pib_per_capita1;
            valor2_atributo1 = pib_per_capita2;
            strcpy(nome_atributo1, "PIB per capita");
            break;
        case 6:
            valor1_atributo1 = densidade_populacional1;
            valor2_atributo1 = densidade_populacional2;
            strcpy(nome_atributo1, "Densidade populacional");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
        }

        switch (atributo2)
        {
        case 1:
            valor1_atributo2 = populacao1;
            valor2_atributo2 = populacao2;
            strcpy(nome_atributo2, "População");
            break;
        case 2:
            valor1_atributo2 = area1;
            valor2_atributo2 = area2;
            strcpy(nome_atributo2, "Área");
            break;
        case 3:
            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;
            strcpy(nome_atributo2, "PIB");
            break;
        case 4:
            valor1_atributo2 = pontos_turisticos1;
            valor2_atributo2 = pontos_turisticos2;
            strcpy(nome_atributo2, "Pontos turísticos");
            break;
        case 5:
            valor1_atributo2 = pib_per_capita1;
            valor2_atributo2 = pib_per_capita2;
            strcpy(nome_atributo2, "PIB per capita");
            break;
        case 6:
            valor1_atributo2 = densidade_populacional1;
            valor2_atributo2 = densidade_populacional2;
            strcpy(nome_atributo2, "Densidade populacional");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
        }

        // Cálculo da soma dos dois atributos
        float soma1 = 0;
        float soma2 = 0;

        // Primeiro atributo
        if (atributo1 == 6)
        {
           //para verificar se o atributo é densidade populacional
            soma1 = soma1 + (0 - valor1_atributo1);
            soma2 = soma2 + (0 - valor2_atributo1);
        }
        else
        {
            soma1 = soma1 + valor1_atributo1;
            soma2 = soma2 + valor2_atributo1;
        }

        // Segundo atributo
        if (atributo2 == 6)
        {
            soma1 = soma1 + (0 - valor1_atributo2);
            soma2 = soma2 + (0 - valor2_atributo2);
        }
        else
        {
            soma1 = soma1 + valor1_atributo2;
            soma2 = soma2 + valor2_atributo2;
        }

        // Exibição organizada dos resultados
        printf("\n===== Resultado =====\n");
        printf("Carta 1 - %s\n", nome1);
        printf("%s: %.2f\n", nome_atributo1, valor1_atributo1);
        printf("%s: %.2f\n", nome_atributo2, valor1_atributo2);
        printf("Soma final: %.2f\n\n", soma1);

        printf("Carta 2 - %s\n", nome2);
        printf("%s: %.2f\n", nome_atributo1, valor2_atributo1);
        printf("%s: %.2f\n", nome_atributo2, valor2_atributo2);
        printf("Soma final: %.2f\n\n", soma2);

        // Resultado da partida
        if (soma1 > soma2)
        {
            printf("Vencedora: %s\n", nome1);
        }
        else if (soma2 > soma1)
        {
            printf("Vencedora: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }

        break;

    case 2:
        // Explicação das regras do jogo
        printf("\n--- Regras do Jogo ---\n");
        printf("Você irá digitar os atributos de duas cidades.\n");
        printf("Depois escolherá dois atributos para comparar.\n");
        printf("A carta com a maior soma dos dois atributos vence.\n");
        printf("Obs: Na Densidade Populacional, o menor valor é melhor.\n");
        break;

    case 3:
        // Finaliza o programa
        printf("Saindo...\n");
        return 0;

    default:
        // Caso a opção do menu seja inválida
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}