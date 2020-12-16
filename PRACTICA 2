
PROGRAMA DE LA EDAD
#include <iostream>
using namespace std;
int main()
{
   int edad;
printf("Cual es tu edad\n”);
scanf(“%d”,&edad);
printf("Tu edad es %d",edad);
   return 0;
}



ECUACION CUADRATICA
#include<stdio.h>
#include<math.h>
 
int main()
{
float xpos, xnega;
int   a,b,c;
   
    printf("Ingrese el valor de a:\n");
    scanf("%d",&a);
    printf("Ingrese el valor de b:\n");
    scanf("%d",&b);
    printf("Ingrese el valor de c:\n");
    scanf("%d",&c);
if(a!=0)

	{
if (b*b-4*a*c>=0)
	{
    xpos= (-b+sqrt(b*b-4*a*c))/(2*a);
	xnega=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("\nvalor de X1 %.2f", xpos);
	printf("\nvalor de X2 %.2f", xnega);
   	}
	else
    printf("\nError las soluciones no son reales");
}
    return 0;
}




CONDICIONALES ANIDADOS
#include <stdio.h>
int main()
{
    int ingresos;
    char estadoCivil;
    float impuesto, tarifaImpuestos;
    printf("\nÂ¿Cual es tu estado civl? S=Soltero o C=Casado?");
    scanf("%c",&estadoCivil);
    printf("\n¿Cuanto es tu ingreso mensual?:");
    scanf("%d",&ingresos);
    if (estadoCivil=='C')
    {
        if ( ingresos<64000)
        {
         impuesto=0.10; 
        }
        else
        {
         impuesto=0.25;
        }
    } 
    if (estadoCivil=='S')
    {
        if (ingresos>32000)
        {
           impuesto=0.25;
        }
        else
        {
           impuesto=0.10;
        }
   }
   tarifaImpuestos= ingresos*impuesto;
   printf("\nTu estado civil es %c", estadoCivil);
   printf("\nEl ingreso es %d", ingresos);
   printf("\nEl porcentaje de impuesto es %.2f", impuesto);
   printf("\nEl impuesto es de %.2f, tafimpuestos");
   
   return 0;
}



CONDICIONALES MULTIPLES
#include <stdio.h>
int main ()
{
    int ctbolsas;//cantidad bolsas
    float costoProducto,porcentajeDesc,descuento,tarifaFinal,costoBolsas;
    char dep;
    printf("Departamentos:\n");
    printf("P) Perfumeria\n");
    printf("S) Salchichoneria\n");
    printf("C) Carniceria\n");
    printf("L) Limpieza\n");
    printf("A que departamento pertenece su producto? opcion (P,S,C,L): ");
     scanf("%c",&dep);
    printf("Cual es el costo del producto? ");
     scanf("%f",&costoProducto);    
    printf("Cantidad de bolsas que requiere: ");
     scanf("%d",&ctbolsas);

    switch (dep)
    {
    	case 'P':
    	          porcentajeDesc=0.20;
    	          break;
    	case 'S': 
    	          porcentajeDesc=0.40;
    	          break;
    	case 'C':
    		      porcentajeDesc=0.20;
    	          break;
    	case 'L':
    		      porcentajeDesc=0.35;
    	          break;
	}
    descuento=costoProducto*porcentajeDesc;
    costoBolsas= ctbolsas*0.10;
    tarifaFinal= costoProducto - descuento + costoBolsas;

    printf("\nCosto producto %.2f",costoProducto);
    printf("\nDescuento %.2f",descuento);
    printf("\nCosto de las bolsas %.2f",costoBolsas);
    printf("\nTarifa final: %.2f",tarifaFinal);

	return 0;
}



CONDICIONALES Y OPERADORES LOGICOS
#include <stdio.h>
#include <math.h>

int main()
{
    char nombre[20]; 
    float altura,peso,IMC;
    int edad; //Definimos la variable edad como tipo entero

printf("Introduce tu nombre: ");
    scanf("%scanf", nombre); 
    printf("¿Cuál es tu edad?");
    scanf("%d", &edad); //leemos y guardamos edad del usuario
    printf("Introduce tu altura (cm): ");
    scanf("%f", &altura);
    printf("Introduce tu peso (kg): ");
    scanf("%f", &peso);
    IMC = peso/ pow(altura, 2);
    printf("\nNombre %s \ntu edad es de %d \ntu peso es de %f \nIndice de masa corporal: %f", nombre,edad,peso,IMC);
    
    return 0;
}



