#include <stdio.h>
//lista1, questão1:
int main(void) {
  char nome[10];
  float salario;
  float venda_mes;
  float porcentagem;
  scanf("%s", nome);
  scanf("%f"
        "%f",
        &salario, &venda_mes);
  // formula:
  porcentagem = ((venda_mes)*0.15) + salario;
  printf("%.2f", porcentagem);
 
}