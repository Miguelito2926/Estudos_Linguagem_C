#include <stdio.h>

int main()
{
    int  contador;
    float soma, nota1, nota2, nota3, media;
    for(contador = 1; contador <= 40; contador++){
        printf("Digite as três notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        soma = nota1 + nota2 + nota3;
        media = soma / 3;
        if(media >= 7){
            printf("Aluno Aprovado, com média %f\n", media);
        }else{
            printf("Aluno Reprovado, com média %f\n", media);
        }  
    }
return 0;

}