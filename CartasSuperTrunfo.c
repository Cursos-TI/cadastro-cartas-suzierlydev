#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Imprimindo na tela o nome do desafio
      printf("--------------------- Desafio Super Trunfo - Cidades! --------------------- \n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Definição das variáveis do Estado 1
    char estado1;//Letra de 'A' a 'H' representando um dos oito estados
    char codigo1[5]; //A letra do estado seguida de um número de 01 a 04
    char cidade1[50]; //Nome da cidade com apenas uma palavra (se a cidade tiver nome composto orientar que seja escrito sem espaços)
    int habitantes1; //O número de habitantes da cidade
    float area1; //A área da cidade em quilometros quadrados;
    float pib1; //O Produto Interno Bruto da cidade;
    int pontosturisticos1; //O número de pontos turísticos na cidade;
    float densidadepop1;
    float pibpercapita1;

  // Área para entrada de dados

    //Entrada de dados da Cidade 1
    printf("\n Vamos digitar os dados da primeira carta?\n");

    printf("\n Digite uma letra maiúscula de 'A' a 'H' representando um dos oito estados: \n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (exemplo - A01): \n");
    scanf("%s", codigo1);

    printf("Digite Nome da cidade com apenas uma palavra: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &habitantes1);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos na cidade \n");
    scanf("%d", &pontosturisticos1);

  //Cálculo da densidade populacional e do PIB per capita
  densidadepop1 = habitantes1/area1;
  pibpercapita1 = (pib1*1000000000.0)/habitantes1;


  // Área para exibição dos dados da cidade

    //Exibição dos dados cadastrados da Carta 1
     printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidadepop1);
    printf("PIB per capita: %.2f\n \n", pibpercapita1);

    //Definição das variáveis do Cidade 2
    char estado2;//Letra de 'A' a 'H' representando um dos oito estados
    char codigo2[5]; //A letra do estado seguida de um número de 01 a 04
    char cidade2[50]; //Nome da cidade com apenas uma palavra (se a cidade tiver nome composto orientar que seja escrito sem espaços)
    int habitantes2; //O número de habitantes da cidade
    float area2; //A área da cidade em quilometros quadrados;
    float pib2; //O Produto Interno Bruto da cidade;
    int pontosturisticos2; //O número de pontos turíst
    float densidadepop2;
    float pibpercapita2;

    //Entrada de dados da Cidade 2
    printf("\n Vamos digitar os dados da segunda carta?\n");

    printf("\n Digite uma letra maiúscula de 'A' a 'H' representando um dos oito estados: \n");
    scanf("%c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (exemplo - A01): \n");
    scanf("%s", codigo2);

    printf("Digite Nome da cidade com apenas uma palavra: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &habitantes2);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos na cidade \n");
    scanf("%d", &pontosturisticos2);

  //Cálculo da densidade populacional e do PIB per capita
  densidadepop2 = habitantes2/area2;
  pibpercapita2 = (pib2*1000000000.0)/habitantes2;

  // Área para exibição dos dados da cidade

    //Exibição dos dados cadastrados da Carta 2
     printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n \n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidadepop2);
    printf("PIB per capita: %f\n \n", pibpercapita2);
    
return 0;
} 
