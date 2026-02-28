#include <stdio.h>
#include <string.h> //Para usar fgets

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
    unsigned long int habitantes1; //O número de habitantes da cidade
    float area1; //A área da cidade em quilometros quadrados;
    float pib1; //O Produto Interno Bruto da cidade;
    int pontosturisticos1; //O número de pontos turísticos na cidade;
    float densidadepop1;
    float pibpercapita1;
    float superpoder1;

  // Área para entrada de dados

    //Entrada de dados da Cidade 1
    printf("\n Vamos digitar os dados da primeira carta?\n");

    printf("\n Digite uma letra maiúscula de 'A' a 'H' representando um estado: \n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (exemplo - A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    getchar(); // limpa o \n que ficou do scanf anterior
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove o \n

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &habitantes1);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos na cidade \n");
    scanf("%d", &pontosturisticos1);

  //Cálculo da densidade populacional e do PIB per capita
  densidadepop1 = habitantes1/area1;
  pibpercapita1 = (pib1*1000000000.0)/habitantes1;

  // Cálculo do Superpoder da Carta 1
  superpoder1 = habitantes1 + area1 + pib1 
                + pibpercapita1 + 1/densidadepop1 + pontosturisticos1;

  // Área para exibição dos dados da cidade

    //Exibição dos dados cadastrados da Carta 1
     printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %lu\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidadepop1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f \n \n", superpoder1);

    //Definição das variáveis do Cidade 2
    char estado2;//Letra de 'A' a 'H' representando um dos oito estados
    char codigo2[5]; //A letra do estado seguida de um número de 01 a 04
    char cidade2[50]; //Nome da cidade com apenas uma palavra (se a cidade tiver nome composto orientar que seja escrito sem espaços)
    unsigned long int habitantes2; //O número de habitantes da cidade
    float area2; //A área da cidade em quilometros quadrados;
    float pib2; //O Produto Interno Bruto da cidade;
    int pontosturisticos2; //O número de pontos turíst
    float densidadepop2;
    float pibpercapita2;
    float superpoder2;
    
    //Entrada de dados da Cidade 2
    printf("\n Vamos digitar os dados da segunda carta?\n");

    printf("\n Digite uma letra maiúscula de 'A' a 'H' representando um estado: \n");
    scanf("%c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (exemplo - A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    getchar(); 
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &habitantes2);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos na cidade \n");
    scanf("%d", &pontosturisticos2);

  //Cálculo da densidade populacional e do PIB per capita
  densidadepop2 = habitantes2/area2;
  pibpercapita2 = (pib2*1000000000.0)/habitantes2;

  // Cálculo do Superpoder da Carta 2
  superpoder2 = habitantes2 + area2 + pib2 
                + pibpercapita2 + 1/densidadepop2 + pontosturisticos2;

  // Área para exibição dos dados da cidade

    //Exibição dos dados cadastrados da Carta 2
     printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %lu\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidadepop2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f \n \n", superpoder2);

//Menu interativo para perguntar ao jogador qual atributo será comparado
int atributo;

printf("Escolha qual atributo deseja comparar: \n");
printf("1. Número de Habitantes \n");
printf("2. Área \n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("7. Superpoder\n");
printf("Escolha: \n");
scanf("%d", &atributo);

switch(atributo) {
  case 1:
  printf("Comparação entre o número de habitantes das cartas:\n");
  printf("Carta 1 (%s) - Habitantes: %lu \n", cidade1, habitantes1);
  printf("Carta 2 (%s) - Habitantes: %lu \n", cidade2, habitantes2);
  if(habitantes1>habitantes2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else if(habitantes1<habitantes2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else{
    printf("Houve um empate! \n");
  }
  break;
case 2:
  printf("Comparação entre as áreas das cartas:\n");
  printf("Carta 1 (%s) - Área: %.2f \n", cidade1, area1);
  printf("Carta 2 (%s) - Área: %.2f \n", cidade2, area2);
  if(area1>area2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else if(area1<area2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else{
    printf("Houve um empate! \n");
  }
  break;
case 3:
printf("Comparação entre o PIB das cartas:\n");
  printf("Carta 1 (%s) - PIB: %.2f \n", cidade1, pib1);
  printf("Carta 2 (%s) - PIB: %.2f \n", cidade2, pib2);
  if(pib1>pib2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else if(pib1<pib2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else{
    printf("Houve um empate! \n");
  }
  break;
case 4:
  printf("Comparação entre os pontos turísticos das cartas:\n");
  printf("Carta 1 (%s) - Pontos Turísticos: %d \n", cidade1, pontosturisticos1);
  printf("Carta 2 (%s) - Pontos Turísticos: %d \n", cidade2, pontosturisticos2);
  if(pontosturisticos1>pontosturisticos2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else if(pontosturisticos1<pontosturisticos2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else{
    printf("Houve um empate! \n");
  }
  break;
case 5:
  printf("Comparação entre as densidades populacionais das cartas:\n");
  printf("Carta 1 (%s) - Densidade Populacional: %.2f \n", cidade1, densidadepop1);
  printf("Carta 2 (%s) - Densidade Populacional: %.2f \n", cidade2, densidadepop2);
  if(densidadepop1>densidadepop2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else if(densidadepop1<densidadepop2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else{
    printf("Houve um empate! \n");
  }
  break;
case 6:
  printf("Comparação entre os PIBs per capita das cartas:\n");
  printf("Carta 1 (%s) - PIB per Capita: %.2f \n", cidade1, pibpercapita1);
  printf("Carta 2 (%s) - PIB per Capita: %.2f \n", cidade2, pibpercapita2);
  if(pibpercapita1>pibpercapita2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else if(pibpercapita1<pibpercapita2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else{
    printf("Houve um empate! \n");
  }
  break;
case 7:
  printf("Comparação entre os Superpoderes das cartas:\n");
  printf("Carta 1 (%s) - Superpoder: %.2f \n", cidade1, superpoder1);
  printf("Carta 2 (%s) - Superpoder: %.2f \n", cidade2, superpoder2);
  if(superpoder1>superpoder2){
    printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
  }else if(superpoder1<superpoder2){
    printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
  }else{
    printf("Houve um empate! \n");
  }
  break;
default:
  printf("Opção inválida. Tente Novamente. \n");
}
return 0;
} 
