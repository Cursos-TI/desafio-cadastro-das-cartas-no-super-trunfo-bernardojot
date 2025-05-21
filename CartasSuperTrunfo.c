#include <stdio.h>

int main(){
    //declarando as variáveis da primeira e segunda carta
    char estado1[2];
    char codigo1[3];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float pib_per_capita1;
    float densidade_populacional1;

    char estado2[2];
    char codigo2[3];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float pib_per_capita2;
    float densidade_populacional2;

    //entrada dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado da carta (de 'A' a 'H'): ");
    scanf("%s", &estado1);
    printf("Código da carta (de 1 a 4): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    getchar(); //para limpar o \n deixado no buffer pelo scanf para o fgets não o ler como uma linha vazia
    fgets(nome1, 50, stdin);
    printf("População: ");
    scanf("%i", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1; //calculo da densidade populacional
    pib_per_capita1 = pib1 / populacao1; //calculo do pib per capita


    //entrada dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado da carta (de 'A' a 'H'): ");
    scanf("%s", &estado2);
    printf("Código da carta (de 1 a 4): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    getchar(); //para limpar o \n deixado no buffer pelo scanf para o fgets não o ler como uma linha vazia
    fgets(nome2, 50, stdin);
    printf("População: ");
    scanf("%i", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2; //calculo da densidade populacional
    pib_per_capita2 = pib2 / populacao2; //calculo do pib per capita



    //saída dos dados das cartas

    printf("\nCarta 1: \n");
    printf("Estado da carta: %s0%s\n", estado1, codigo1); 
    printf("Nome da cidade: %s", nome1);
    printf("População: %i\n", populacao1);
    printf("Área: %.fkm²\n", area1);
    printf("PIB: %.f\n", pib1);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Pib per capita: R$%.2f\n", pib_per_capita1);


    printf("\nCarta 2: \n");
    printf("Estado da carta: %s0%s\n", estado2, codigo2); 
    printf("Nome da cidade: %s", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %.fkm²\n", area2);
    printf("PIB: %.f\n", pib2);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Pib per capita: R$%.2f\n", pib_per_capita2);

    
}
