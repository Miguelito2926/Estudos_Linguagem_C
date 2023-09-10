#include <stdio.h>
int main(){
    int numero;
    do{        
        printf("Digite um número: ");
        scanf("%d", &numero);
        if(numero != 0){
            printf("Você digitou o número = %d\n\n ", numero);
        }
    }        
    while(numero != 0);  
     
     printf("Você digitou a número zero por isso o programa foi finalizado");
    return 0;
}