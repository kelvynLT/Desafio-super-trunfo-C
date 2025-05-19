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

void compararCartas(Carta c1, Carta c2) {
    // Definindo o atributo para comparação diretamente no código
    int atributo = 1; // 1-População, 2-Área, 3-PIB, 4-Pontos Turísticos
    
    printf("\n%s e %s\n", c1.cidade, c2.cidade);
    
    switch(atributo) {
        case 1:
            printf("Critério: População\n");
            printf("%s: %d hab.\n%s: %d hab.\n", c1.cidade, c1.populacao, c2.cidade, c2.populacao);
            if(c1.populacao > c2.populacao) printf("Resultado: %s tem maior população\n", c1.cidade);
            else if(c1.populacao < c2.populacao) printf("Resultado: %s tem maior população\n", c2.cidade);
            else printf("Resultado: Populações iguais\n");
            break;
            
        case 2:
            printf("Critério: Área\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", c1.cidade, c1.area, c2.cidade, c2.area);
            if(c1.area > c2.area) printf("Resultado: %s tem maior área\n", c1.cidade);
            else if(c1.area < c2.area) printf("Resultado: %s tem maior área\n", c2.cidade);
            else printf("Resultado: Áreas iguais\n");
            break;
            
        case 3:
            printf("Critério: PIB\n");
            printf("%s: R$ %.2f bi\n%s: R$ %.2f bi\n", c1.cidade, c1.pib, c2.cidade, c2.pib);
            if(c1.pib > c2.pib) printf("Resultado: %s tem maior PIB\n", c1.cidade);
            else if(c1.pib < c2.pib) printf("Resultado: %s tem maior PIB\n", c2.cidade);
            else printf("Resultado: PIBs iguais\n");
            break;
            
        case 4:
            printf("Critério: Pontos Turísticos\n");
            printf("%s: %d\n%s: %d\n", c1.cidade, c1.pontos_turisticos, c2.cidade, c2.pontos_turisticos);
            if(c1.pontos_turisticos > c2.pontos_turisticos) printf("Resultado: %s tem mais pontos\n", c1.cidade);
            else if(c1.pontos_turisticos < c2.pontos_turisticos) printf("Resultado: %s tem mais pontos\n", c2.cidade);
            else printf("Resultado: Pontos iguais\n");
            break;
    }
}

int main() {
    Carta carta1 = {"ES", "A1", "Vitória", 322869, 96.536, 372, 23};
    Carta carta2 = {"ES", "A2", "Vila Velha", 467722, 209.965, 16, 15};
    
    compararCartas(carta1, carta2);
    
    return 0;
}
