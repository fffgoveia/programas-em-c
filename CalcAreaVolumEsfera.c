#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcArea (float r);
float calcVol (float r);

int main ()
{
    float r, area, vol;

    printf("\nEntre com o raio da esfera a qual deseja-se saber volume e area: \n\n");
    scanf("%f", &r);

    area = calcArea (r);
    vol = calcVol (r);

    printf("\nArea = %.2f \nVolume = %.2f\n(levando pi = 3.17)\n", area, vol);
     
    return 0;
}

float calcArea (float r)
{
    float resultado;

    resultado = (4*3.1415)*pow(r, 2);

    return resultado;
}

float calcVol (float r)
{
    float resultado;

    resultado = (4*3.1415*pow(r, 3))/3;

    return resultado;
}