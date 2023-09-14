//O trecho de código lê uma cadeia de 8 caracteres e mostra o texto invertido. 

#include <stdio.h>

int main()
{
 
char nome[8];
int ind;
scanf ("%s",nome);
for (ind=8;ind>=0;ind--) {
    printf ("%c", nome[ind]);
}
}
