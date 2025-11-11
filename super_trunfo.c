#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1 - %s (%s)\n", carta1.nomeCidade, carta1.codigo);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos);

    printf("\nCarta 2 - %s (%s)\n", carta2.nomeCidade, carta2.codigo);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos);

    return 0;
}

