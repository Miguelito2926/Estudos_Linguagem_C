#include <stdio.h>
int main(){
    //Desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.

    int contador;
    float reajuste, salario, salarioAjustado = 0;
    
  printf("Insira a porcentagem de reajuste do salário: ");
    scanf("%f", &reajuste);
    for(contador = 1; contador <= 2 ; contador++){
      
        printf("Insira o salário atual: ");
        scanf("%f", &salario);
        salarioAjustado = salario + (salario * reajuste) / 100;
        printf("O Salário ajustado é %f \n",salarioAjustado);
        
        if(salario > salarioAjustado)
            salarioAjustado = salario;
    }
     printf("Maior Salário ajustado é: %2.f", salarioAjustado);
    
}