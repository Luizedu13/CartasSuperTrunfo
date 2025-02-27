#include <stdio.h>

int main() {
    // Variáveis usadas no programa
    char cidade1[30], cidade2[30];
    int turistico1, turistico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, dens1, dens2, ppc1, ppc2, sp1, sp2;

    // Cabeçalho para o Jogo Super Trunfo (Fazendo uma graça)
    printf("-------------------------------------\n");
    printf("          Cartas S. Trunfo\n");
    printf("-------------------------------------\n");

    // Cadastro das informações da Carta 01
    printf("\nCarta 1:\n");
    printf("Estado: A\n");
    printf("Código: A01\n");

    /* 
      Solicita a cidade usando fgets para ler até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final, 
      tive que procurar outra saida na internet para conseguir ler toda a linha e não levar lixo para a próxima.
    */
    printf("Escreva a Cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    
    // Solicita a população e armazena na variavel população
    printf("Escreva a Populacao:\n");
    scanf(" %lu", &populacao1);

    // Solicita a área e armazena na variavel area
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area1);

    // Solicita o PIB e armazena na variavel pib
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%f", &pib1);

    // Solicita a quantidade de pontos turísticos e armazena na variavel Turistico
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico1);

    // Variaveis para o Nivel Aventureiro
    dens1 = (float) populacao1 / area1;
    ppc1 = (float) pib1 / populacao1;

    // Variaveis para o Nivel Mestre
    sp1 = populacao1 + area1 + pib1 + turistico1 + ppc1 + (1 / dens1);

    // Limpeza
    getchar();

    // Cadastro das informações da Carta 02
    printf("\n\nCarta 2:\n");
    printf("Estado: B\n");
    printf("Código: B02\n");

    // Solicita a cidade usando fgets para le	qr até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final.
    printf("Escreva a Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    // Solicita a população e armazena na variavel população
    printf("Escreva a Populacao:\n");
    scanf("%lu", &populacao2);

    // Solicita a área e armazena na variavel area
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area2);

    // Solicita o PIB e armazena na variavel pib
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%f", &pib2);

    // Solicita a quantidade de pontos turísticos e armazena na variavel Turistico
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico2);

    // Variavies para o Nivel Aventureiro
    dens2 = (float) populacao2 / area2;
    ppc2 = (float) pib2 / populacao2;

    // Variavies para o Nivel Mestre
    sp2 = populacao2 + area2 + pib2 + turistico2 + ppc2 + (1 / dens2);
   
    // Limpeza
    getchar();

    // Imprime os dados para cabeçalho
    printf("\n\n-------------------------------------\n");
    printf("          Cartas Cadastradas\n");
    printf("-------------------------------------\n");

    // Exibe as informações preenchidas anteriormente na Carta 01
    printf("\nCarta 1:\n"); // Mostra a Carta 1
    printf("Estado: A\n"); // Mostra o Estado A
    printf("Código: A01\n"); // Mostra o Código
    printf("Nome da Cidade: %s\n", cidade1); // Mostra a cidade cadastrada
    printf("População: %.2ld\n", populacao1); // Mostra a população cadastrada
    printf("Área: %.2f Km²\n", area1);  // Mostra área cadastrada com 2 casas decimais 
    printf("PIB: %.2f bilhões de Reais\n", pib1);  // Mostra o PIB cadastrado com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", turistico1);  // Mostra a Quantidade de pontos turísticos cadastrado


    // Exibe as informações preenchidas anteriormente na Carta 02
    printf("\nCarta 2:\n"); // Mostra a Carta 2
    printf("Estado: B\n"); // Mostra Estado B
    printf("Código: A02\n"); // Mostra o Código 
    printf("Nome da Cidade: %s\n", cidade2); // Mostra a cidade cadastrada
    printf("População: %.2ld\n", populacao2); // Mostra a população cadastrada
    printf("Área: %.2f Km²\n", area2);  // Mostra área cadastrada com 2 casas decimais 
    printf("PIB: %.2f bilhões de Reais\n", pib2);  // Mostra o PIB cadastrado com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", turistico2);  // Mostra a Quantidade de pontos turísticos cadastrado


    // Limpeza
    getchar();

    // Imprime os dados para cabeçalho para Comparações das cartas
    printf("\n\n-------------------------------------\n");
    printf("          Comparação de Cartas\n");
    printf("-------------------------------------\n\n");

    // Imprimi os dados para comparação das cartas e mostra as informações de qual venceu
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", turistico1 > turistico2 ? 1 : 2, turistico1 > turistico2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", dens1 < dens2 ? 1 : 2, dens1 < dens2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", ppc1 > ppc2 ? 1 : 2, ppc1 > ppc2);
    printf("Super Poder: Carta %d venceu (%d)\n", sp1 > sp2 ? 1 : 2, sp1 > sp2);

    return 0;
}
