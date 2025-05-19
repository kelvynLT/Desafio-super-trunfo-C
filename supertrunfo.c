#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    // Carta 1
    Carta carta1 = {"ES", "A1", "Vitória", 322869, 96.536, 37, 23};
    
    // Carta 2
    Carta carta2 = {"ES", "A2", "Vila Velha", 467722, 209.965, 16, 15};

    // Exibindo carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.3f km²\n", carta1.area);
    printf("PIB: %.0f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    // Exibindo carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.3f km²\n", carta2.area);
    printf("PIB: %.0f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
