#include <stdio.h>

int main(){
//esenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.
    int contador;
    float salario, maiorSalario, soma, media;

    for(contador = 1; contador <= 10; contador++){
        printf("Informe o salário do funcionário:");
        scanf("%f", &salario);
         soma =+ salario;
        if(salario > maiorSalario){
            maiorSalario = salario;
        }
    }
    media = soma/10;
    printf("O maior salário é: %f \n", maiorSalario);
    printf("A média é: %f", media);
}