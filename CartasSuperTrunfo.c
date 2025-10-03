#include <stdio.h>

int main() {
 
// Declaração das variáveis das cartas

char Estado [100];      // letra do estado ( A'a Z')
char Codigo [4];       // letra do código ( A'a Z')
char Nomedacidade[100];  // nome da cidade (string)
int Populacao;     // população (inteiro)  
float Área;        // área em km² (float)
float PIB;         // PIB 
int Pontosturisticos;  // número de pontos turísticos (inteiro)

printf("Digite a letra do estado (A'a Z'):\n");
scanf(" %c", &Estado);  // lê o caractere do estado 

printf("Digite o código (A'a Z'):\n");
scanf(" %s", &Codigo);  // lê a string do código

printf("Digite o nome da cidade:\n");
scanf(" %s", Nomedacidade);  // lê a string do nome da cidade

printf("Digite a população:\n");
scanf(" %d", &Populacao);  // lê o inteiro da população

printf("Digite a área em km²:\n");
scanf(" %f", &Área);  // lê o float da área

printf("Digite o PIB:\n");
scanf(" %f", &PIB);  // lê o float do PIB

printf("Digite o número de pontos turísticos:\n");
scanf(" %d", &Pontosturisticos);  // lê o inteiro do número de pontos turísticos

printf("\n--- Carta da Cidade ---\n");
printf("Estado: %c\n", Estado); 
printf("Código: %s\n", Codigo);
printf("Nome da Cidade: %s\n", Nomedacidade);
printf("População: %d\n", Populacao);
printf("Área: %.2f km²\n", Área);
printf("PIB: %.2f\n", PIB);
printf("Número de Pontos Turísticos: %d\n", Pontosturisticos);
  
return 0;

} 