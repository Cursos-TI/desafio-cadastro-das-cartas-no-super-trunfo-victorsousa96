#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidade;

    // Entrada de dados
    printf("Digite o código da cidade: ");
    scanf("%d", &cidade.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade.nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &cidade.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade.pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %d\n", cidade.codigo);
    printf("Nome: %s\n", cidade.nome);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    
    return 0;
}
