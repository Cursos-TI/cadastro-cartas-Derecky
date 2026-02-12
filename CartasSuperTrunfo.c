#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  int turistic_points_quantity_01, population_01, turistic_points_quantity_02, population_02;
  float pib_01, pib_02, area_01, area_02; 
  char state_01, state_02, code_01[5], code_02[5], city_name_01[50], city_name_02[50];
  

  printf("--------------------------------\n");
  printf("--------------------------------\n");
  printf("REGISTRE UMA CARTA DE CIDADE 1:\n\n");
  printf("--------------------------------\n");
  
  // Entrada para registrar o estado
  printf("Digite o estado (A~H): ");
  scanf(" %c", &state_01);

  // Entrada para registrar o código
  printf("Digite o código da cidade (01~04): ");
  scanf("%s", code_01);
  
  // Entrada para registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  scanf("%s", city_name_01);
  
  // Entrada para registrar a população da cidade
  printf("Digite a população da cidade: ");
  scanf("%d", &population_01);
  
  // Entrada para registrar a quantidade de pontos turísticos
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &turistic_points_quantity_01);

  // Entrada para registrar a área da cidade
  printf("Digite a área da cidade (km²): ");
  scanf("%f", &area_01);

  // Entrada para registrar o PIB da cidade
  printf("Digite o PIB da cidade (bilhões): ");
  scanf("%f", &pib_01);

  printf("\n--------------------------------\n\n");
  printf("--------------------------------\n");
  printf("REGISTRE UMA CARTA DE CIDADE 2:\n\n");
  printf("--------------------------------\n");
  
  // Entrada para registrar o estado
  printf("Digite o estado (A~H): ");
  scanf(" %c", &state_02);

  // Entrada para registrar o código
  printf("Digite o código da cidade (01~04): ");
  scanf("%s", code_02);
  
  // Entrada para registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  scanf("%s", city_name_02);
  
  // Entrada para registrar a população da cidade
  printf("Digite a população da cidade: ");
  scanf("%d", &population_02);
  
  // Entrada para registrar a quantidade de pontos turísticos
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &turistic_points_quantity_02);

  // Entrada para registrar a área da cidade
  printf("Digite a área da cidade (km²): ");
  scanf("%f", &area_02);

  // Entrada para registrar o PIB da cidade
  printf("Digite o PIB da cidade (bilhões): ");
  scanf("%f", &pib_02);

  printf("\n--------------------------------\n\n");

  // Exibindo os dados da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", state_01);
  printf("Código: %c%s\n", state_01, code_01);
  printf("Nome da cidade: %s\n", city_name_01);
  printf("População: %d\n", population_01);
  printf("Área: %.2f km²\n", area_01);
  printf("PIB: %.2f bilhões de reais\n", pib_01);
  printf("Pontos Turísticos: %d\n", turistic_points_quantity_01);

  printf("\n\n");
  // Exibindo os dados da Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", state_02);
  printf("Código: %c%s\n", state_02, code_02);
  printf("Nome da cidade: %s\n", city_name_02);
  printf("População: %d\n", population_02);
  printf("Área: %.2f km²\n", area_02);
  printf("PIB: %.2f bilhões de reais\n", pib_02);
  printf("Pontos Turísticos: %d\n", turistic_points_quantity_02);

  return 0;
} 
