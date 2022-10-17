#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=0, media, i, soma; 
    

    for(i = 0; i < 10; i++) {
    printf("Entre com as notas: \n");
    scanf("%f", &n);
        soma = soma + n;
        media = soma / 10;
    }
     printf("A media da sala e: %.1f\n", media);
    return 0;
}