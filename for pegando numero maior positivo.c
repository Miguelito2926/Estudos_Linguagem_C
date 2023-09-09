#include <stdio.h>

// Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.
int main()
{
    int numero, contador, maior = 0 ;

    for(contador = 1; contador <= 15; contador++){
        printf("Digite um número: ");
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }
        
    }
     printf("O maior número é %d:", maior);
return 0;

}