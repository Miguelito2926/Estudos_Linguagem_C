#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    while(numero != 0){
        printf("Você digitou o número = %d\n\n ", numero);
        printf("Digite um número: ");
        scanf("%d", &numero);
    }
    printf("Você digitou a número zero por isso o programa foi finalizado");
    return 0;
}