#include <stdio.h>

int main() {
    // variáveis usadas no programa
    char estado[20];
    char cidade[20];
    int populacao; 
    float area;
    double pib; 
    int Turistico;

    // Imprime cabeçalho, para fazer uma graça
    printf("-------------------------------------\n");
    printf("          Cartas S. Trunfo\n");
    printf("-------------------------------------\n");

    // Solicita o estado e troquei o scanf pois apresentava erro quando colocava Sao Paulo.
    printf("Escreva um Estado:\n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;  // Remove a quebra de linha do final

    // Solicita a cidade usando fgets para ler até o final
    printf("Escreva a Cidade:\n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;  // Remove a quebra de linha do final

    // Solicita a população
    printf("Escreva a Populacao:\n");
    scanf("%d", &populacao);  // População registrada como int

    // Limpeza pois quando criei ia lixo para a área
    getchar();

    // Solicita a área
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area);  // A área registrada como ponto flutuante

    // Limpeza pois quando criei ia lixo para o PIB
    getchar();

    // Solicita o PIB
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%lf", &pib);  // PIB é um número de ponto flutuante double

    // Limpeza pois quando criei ia lixo para o p turisticos
    getchar();

    // Solicita a quantidade de pontos turísticos
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &Turistico);  // Quantidade de pontos turísticos registrada como inteiro

    // Imprime os dados para cabeçalho
    printf("-------------------------------------\n");
    printf("          Carta Cadastrada\n");
    printf("-------------------------------------\n");

    // Exibe as informações preenchidas anteriormente
    printf("Estado: %s\n", estado); // Mostra o estado cadastrado
    printf("Cidade: %s\n", cidade); // Mostra a cidade cadastrada
    printf("População: %d\n", populacao); // Mostra a população cadastrada
    printf("Área: %.2f Km²\n", area);  // Mostra área cadastrada com 2 casas decimais 
    printf("PIB em Bilhões: %.2f\n", pib);  // Mostra o PIB cadastrado com 2 casas decimais
    printf("Pontos Turísticos: %d\n", Turistico);  // Mostra a Quantidade de pontos turísticos cadastrado

    return 0;
}
