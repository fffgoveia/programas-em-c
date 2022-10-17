#include <stdio.h>
#include <stdlib.h>

int Fatorial( int n);

int main()
{
    int n, f;
    printf("Digite um numero:\n");
    scanf("%i", &n);

    f= Fatorial(n);
    printf(" fatorial=%i\n",  f);

    return 0;
}
int Fatorial( int n){

    int acum=1;
    for(int i=1; i<=n; i++){

        acum= acum*i;
    }
    return acum;
}