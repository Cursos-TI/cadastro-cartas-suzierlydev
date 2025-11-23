#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Imprimindo na tela o nome do desafio
      printf("Desafio Super Trunfo - Cidades! \n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Definição das variáveis do Estado 1
    char estado1;//Letra de 'A' a 'H' representando um dos oito estados
    char codigo1[5]; //A letra do estado seguida de um número de 01 a 04
    char cidade1[50]; //Nome da cidade com apenas uma palavra (se a cidade tiver nome composto orientar que seja escrito sem espaços)
    int habitantes1; //O número de habitantes da cidade
    float area1; //A área da cidade em quilometros quadrados;
    float pib1; //O Produto Interno Bruto da cidade;
    int pontosturisticos1; //O número de pontos turísticos na cidade;

  // Área para entrada de dados

    //Entrada de dados do Estado 1
    printf("Vamos digitar os dados da primeira carta?\n");

    printf("Digite uma letra maiúscula de 'A' a 'H' representando um dos oito estados: \n");
    scanf("%s", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (exemplo - A01): \n");
    scanf("%s", &codigo1);

    printf("Digite Nome da cidade com apenas uma palavra: \n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &habitantes1);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

     //printf("Digite o número de pontos turísticos na cidade \n");
    //scanf("%d", &pontosturisticos1);

  // Área para exibição dos dados da cidade

    //Exibição dos dados cadastrados da Carta 1
    printf("Carta 1:\n");
    
    

return 0;
} 
