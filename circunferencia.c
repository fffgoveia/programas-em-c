#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalcularArea(float r);
float CalcularComprimento(float r);

int main()
{
    float a,b,r;

    printf("Digite o raio:");
    scanf("%f", &r);

    a= CalcularArea(r);
    b= CalcularComprimento(r);

    printf("Area=%f\n",a);
    printf("Comprimento=%f\n",b);

    return 0;
}

float CalcularArea(float r){
    float a;
    a=3.14*pow(r,2);
    return a;
}
float CalcularComprimento(float r){
    float c;
    c= 2*3.14*r;
    return c;
}