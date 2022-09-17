#include <stdio.h>
#include <math.h>

float norme(float a , float b){
    return(sqrt(a*a+b*b));
}

int main() {
    float a, b;

    printf("Rentrez un nombre: ");
    scanf("%f", &a);

    printf("Rentrez un 2eme nombre: ");
    scanf("%f", &b);

    float res = norme(a, b);
    printf("valeur norme %f\n\n", res);

    return 0;
}
