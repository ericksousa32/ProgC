#include <stdio.h>

int main(){
  int idade = 0, matricula = 0;
  float altura = 0;
  chat nome[50];

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);
  
  printf("Digite a sua altura: \n");
  scanf("%f", &altura);

  printf("Digite o seu nome: \n");
  scanf(" %s", nome);

  printf("Digite a sua matricula: ");
  scanf("%d", &matricula);

  printf("Nome do aluno: %s - Matricula: %d - Idade: %d - Altura: %.2f\n", nome, matricula, idade, altura);

  return 0;
}
