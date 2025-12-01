#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 
  
  // variáveis para o cadastro da carta 1 do Desafio Super Trunfo

  char estado_1;
  char codigodacarta_1 [30];
  char nomedacidade_1 [30];
  int populacao_1;
  float areaemkm2_1;
  float pib_1;
  int pontosturisticos_1;
  
  // variáveis para o cadastro da carta 2 do Desafio Super Trunfo

  char estado_2;
  char codigodacarta_2 [30];
  char nomedacidade_2 [30];
  int populacao_2;
  float areaemkm2_2;
  float pib_2;
  int pontosturisticos_2; 

  // Área para entrada de dados

  printf ("\nDESAFIO SUPER TRUNFO\n\n");

  // Aqui inicia-se o cadastro das cartas 01 e 02 para o Desafio Super Trunfo

  printf("CARTA 1\n"); // CADASTRO DA CARTA 01

  printf("Digite o código do estado: \n");
  scanf("%c", &estado_1);

  printf("Digite o código da carta: \n");
  scanf("%s", codigodacarta_1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nomedacidade_1);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao_1);

  printf("Digite a área em km² da cidade: \n");
  scanf("%f", &areaemkm2_1);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_1);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos_1);


  // Área para exibição dos dados da cidade

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", codigodacarta_1);
  printf("Nome da Cidade: %s\n", nomedacidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área em km²: %.2f\n", areaemkm2_1);
  printf("PIB: %.2f\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos_1);



return 0;
} 
