#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2];
  char cod_cidade[3];
  char nome_cidade[20];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;

  char estado2[2];
  char cod_cidade2[3];
  char nome_cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  float densPop;
  float pibpercapita;

  // Área para entrada de dados
  printf("CARTA 01\n\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código da cidade: ");
    scanf("%s", cod_cidade);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("População: ");
    scanf("%i", &populacao);

    printf("Área (em km2): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%i", &pontos_turisticos);




// INICIO DA CARTA 02
  printf("CARTA 02\n\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da cidade: ");
    scanf("%s", cod_cidade2);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área (em km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%i", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf("\nCARTA 01\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", cod_cidade);
  printf("Nome da Cidade: %s\n", nome_cidade);
  printf("População: %i\n", populacao);
  printf("Área: %f Km2\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %i\n", pontos_turisticos);

      
    densPop = populacao / area;

    printf("Densidade Populacional: %f\n", densPop);

    pibpercapita = pib / populacao;

    printf("PIB per capita: %.2f", pibpercapita);




  printf("\nCARTA 02\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", cod_cidade2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %i\n", populacao2);
  printf("Área: %f Km2\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de pontos turísticos: %i\n", pontos_turisticos2);

    densPop = populacao2 / area2;

    printf("Densidade Populacional: %f\n", densPop);

    pibpercapita = pib2 / populacao2;

    printf("PIB per capita: %.2f", pibpercapita);

    printf("\n\n");
return 0;
} 
