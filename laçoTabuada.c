#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tabu;

    printf("Escolha a tabuada desejada >> ");
    scanf("%d", &tabu);

    for (i = 0; i<=10; i++){
    int result = ( i * tabu); 
    printf("%d\n", result);
    }
    return 0;
}