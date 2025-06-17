#include <stdio.h>

int main(){
    printf("Desafio super trunfo - Países!\n");

    int populacao, turisticos;
    float area;
    float pib;
    char estado[10];
    char codigo[3];
    char nome[10];

    printf("Carta 1: Brasil \n");

    printf("Digite o Nome do Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código da carta: ");
    scanf("%s", &codigo);

    printf("Digite o Nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &turisticos);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Números de pontos turísticos: %d\n", turisticos);

    return 0;
}