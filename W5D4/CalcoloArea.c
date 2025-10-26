#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main() 
{

    float D;
    float q, c, t;

    printf("Inserire un numero reale: \n");
    scanf("%f", &D);

    q = D*D;
    c = ((D*D)*(M_PI))/4;
    t = (sqrt(3)/4)*(D*D);

    printf("L'area del quadrato è: %f \n", q);
    printf("L'area del cerchio è: %f \n", c);
    printf("L'area del triangolo equilatero è: %f \n", t);

    return 0;

}