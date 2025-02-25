#include <stdio.h>

int main() {

    // variáveis usadas no programa
    char cidade1[30], cidade2[30];
    float populacao1, populacao2, area1, area2;
    double pib1, pib2; 
    int turistico1, turistico2;

    // Imprime cabeçalho, para fazer uma graça
    printf("-------------------------------------\n");
    printf("          Cartas S. Trunfo\n");
    printf("-------------------------------------\n");

    // Cadastro das informações da Carta 01

    printf("Carta 1:\n");
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
    scanf("%f", &populacao1);  

    // Limpeza pois quando criei ia lixo para a área
    getchar();

    // Solicita a área e armazena na variavel area
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area1);  

    // Limpeza pois quando criei ia lixo para o PIB
    getchar();

    // Solicita o PIB e armazena na variavel pib
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%lf", &pib1);  

    // Limpeza pois quando criei ia lixo para o p turisticos
    getchar();

    // Solicita a quantidade de pontos turísticos e armazena na variavel Turistico
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d\n", &turistico1);  


    // Cadastro das informações da Carta 02

    printf("Carta 2:\n");
    printf("Estado: B\n");
    printf("Código: A02\n");
    
    // Limpeza pois quando criei ia lixo para o p turisticos
    getchar();
    
    // Solicita a cidade usando fgets para le	qr até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final.
    printf("Escreva a Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; 

        // Limpeza pois quando criei ia lixo para o p turisticos
    getchar();

    // Solicita a população e armazena na variavel população
    printf("Escreva a Populacao:\n");
    scanf("%f", &populacao2);  

    // Limpeza pois quando criei ia lixo para a área
    getchar();

    // Solicita a área e armazena na variavel area
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area2);  

    // Limpeza pois quando criei ia lixo para o PIB
    getchar();

    // Solicita o PIB e armazena na variavel pib
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%lf", &pib2);  

    // Limpeza pois quando criei ia lixo para o p turisticos
    getchar();

    // Solicita a quantidade de pontos turísticos e armazena na variavel Turistico
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico2);  

    // Imprime os dados para cabeçalho
    printf("-------------------------------------\n");
    printf("          Cartas Cadastradas\n");
    printf("-------------------------------------\n");

    // Exibe as informações preenchidas anteriormente na Carta 01
    printf("Carta 1:\n"); // Mostra a Carta 1
    printf("Estado: A\n"); // Mostra o Estado A
    printf("Código: A01\n"); // Mostra o Código
    printf("Nome da Cidade: %s\n", cidade1); // Mostra a cidade cadastrada
    printf("População: %2.f\n", populacao1); // Mostra a população cadastrada
    printf("Área: %.2f Km²\n", area1);  // Mostra área cadastrada com 2 casas decimais 
    printf("PIB: %.2f bilhões de Reais\n", pib1);  // Mostra o PIB cadastrado com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", turistico1);  // Mostra a Quantidade de pontos turísticos cadastrado


    // Exibe as informações preenchidas anteriormente na Carta 02
    printf("Carta 2:\n"); // Mostra a Carta 2
    printf("Estado: B\n"); // Mostra Estado B
    printf("Código: A02\n"); // Mostra o Código 
    printf("Nome da Cidade: %s\n", cidade2); // Mostra a cidade cadastrada
    printf("População: %2.f\n", populacao2); // Mostra a população cadastrada
    printf("Área: %.2f Km²\n", area2);  // Mostra área cadastrada com 2 casas decimais 
    printf("PIB: %.2f bilhões de Reais\n", pib2);  // Mostra o PIB cadastrado com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", turistico2);  // Mostra a Quantidade de pontos turísticos cadastrado




    
    return 0;
}
