/*
    Escreva uma função que receba uma string e retorne o número de caracteres da string.
    Obs.: Não utilize a função strlen().
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int strLen(char str[])
{
    int cont = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        cont++;
        if (str[i] < 0)
            i++;
    }

    return cont;
}*/

//COM strlen()---------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n", strLen("")); // 0
    printf("%d\n", strLen("caju")); // 4
    printf("%d\n", strLen("maçã")); // 4
    printf("%d\n", strLen("micro-ondas")); // 11
    printf("%d\n", strLen("banana terra")); // 12
    printf("%d\n", strLen("marca d'água")); // 12
    printf("%d\n", strLen("Ainda que eu falasse a língua dos homens")); // 40

    return 0;
}