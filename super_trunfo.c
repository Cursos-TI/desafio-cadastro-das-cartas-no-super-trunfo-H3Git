#include <stdio.h>

int main(){
    printf("Desafio super trunfo - Países!\n");

    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, pib1, pib2;
    char estado1[10], estado2[10], codigo1[10], codigo2[10], cidade1[20], cidade2[20];

    //inserção de dados para carta 1
    printf("Carta 1: Brasil \n");

    printf("Digite uma letra de A à H para o Estado: ");
    scanf("%s", &estado1);

    printf("Digite o Código da carta, a letra do estado seguido de 01: ");
    scanf("%s", &codigo1);

    printf("Digite o Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &turisticos1);

    //inserção de dados para carta 2

    printf("Digite a letra de A à H para o Estado 2: ");
    scanf("%s", &estado2);

    printf("Digite o código da carta, a letra do Estado seguido de 02: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);
    
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d Bilhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d\n", turisticos1);

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d Bilhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0;
}