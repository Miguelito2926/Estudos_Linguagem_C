#include <stdio.h>
int main(){
    char inicial;
    int idade;
    printf("Entre com a sua idade e a sua inicial:\n");
    scanf("%d %c", &idade, &inicial);
    printf("idade %d e sua inicial é %c",idade, inicial);

    return 0; 
}