#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 

    // variáveis para o cadastro da carta 1 do Desafio Super Trunfo

    char estado_1;
    char codigocarta_1 [15];
    char nomecidade_1 [30];
    int populacao_1;
    float areakm2_1;
    float pib_1;
    int pontosturist_1;

    // variáveis para o cadastro da carta 2 do Desafio Super Trunfo

    char estado_2;
    char codigocarta_2 [15];
    char nomecidade_2 [30];
    int populacao_2;
    float areakm2_2;
    float pib_2;
    int pontosturist_2;

  // Área para entrada de dados

   printf("\nDESAFIO SUPER TRUNFO\n"); // Aqui inicia-se o cadastro das cartas 01 e 02 para o Desafio Super Trunfo

    printf("\nCARTA 1\n"); // CADASTRO DA CARTA 01
    printf("Digite o código do estado: \n");
    scanf("%c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade_1);

    printf("Digite a população: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área em km²: \n");
    scanf("%f", &areakm2_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturist_1);

    printf("\nCARTA 2\n"); // CADASTRO DA CARTA 02
    printf("Digite o código do estado: \n");
    scanf("%c", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade_2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área em km²: \n");
    scanf("%f", &areakm2_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturist_2);

  // Área para exibição dos dados da cidade

  // Exibição da Carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", &estado_1);
    printf("Código: %s\n", &codigocarta_1);
    printf("Nome da Cidade: %s\n", &nomecidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área em km²: %.2f\n", areakm2_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontosturist_1);

    // Exibição da Carta 2

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", &estado_2);
    printf("Código: %s\n", &codigocarta_2);
    printf("Nome da Cidade: %s\n", &nomecidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área em km²: %.2f\n", areakm2_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturist_2);

return 0;
} 
