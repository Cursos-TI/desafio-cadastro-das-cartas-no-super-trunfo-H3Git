#include <stdio.h>

int main(){
    printf("Desafio super trunfo - Países!");

    int populacao, turisticos;
    float area, pib;
    char estado[10], codigo[3], nome[10];

    printf("Carta 1");
    printf("Estado: ");
    scanf("%s", &estado);
    printf("Código: ");
    scanf("%s", &codigo);
    printf("Nome da Cidade: ");
    scandf("%s", &nome);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%.2f", &area);
    printf("PIB: ");
    scanf("%.2f", &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos);

    return 0;
}