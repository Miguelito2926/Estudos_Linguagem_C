#include <stdio.h>
int main()
{
    int numero, contador;
    printf("Digite um número: ");
    scanf("%d", &numero);

    for(contador = 1; contador <= 20; contador++){
        printf("\n Número = %d", numero);
    }
return 0;

}