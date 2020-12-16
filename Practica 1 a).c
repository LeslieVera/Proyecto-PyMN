
#include <stdio.h>
#include <math.h>
int main() {
    const float Pi = 3.14159;
    float radio = 0;
    float volumenEsfera = 0;
printf("Introduzca el radio de una esfera, en metros: ");
    scanf("%f", &radio);
 volumenEsfera = (4 / 3)* Pi * pow(radio, 3);
    printf("\nPi %f \nradio %f \nEl volumen de la esfera es %f metros cubicos" , Pi,radio,volumenEsfera);
    return 0
    ;

