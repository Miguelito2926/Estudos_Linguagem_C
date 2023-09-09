#include <stdio.h>

//Cacular média aritimética de um aluno
int main(){
    printf (" nota 1 = ");
    scanf("%f", &nota1);
    printf (" nota 2 = ");
    scanf("%f", &nota2);
    printf (" nota 3 = ");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf ("media= %f",media);
        if (media>=7)
            printf (" , Aluno Aprovado");
        else
            printf (" , Aluno Reprovado");
    return 0;
}