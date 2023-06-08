
#include <stdio.h>
#include <math.h>
void main ()
{
int a, b, c;
float D, X, V;
printf ("Calcula el área, diagonal y volumen de un ortoedro \n");
printf ("Ingresa el lado a \n");
scanf ("%i",&a);
printf ("Ingresa el lado b \n");
scanf ("%i",&b);
printf ("Ingresa el lado c \n");
scanf ("%i",&c);
if ((a>0) && (a<10) && (b>0) && (b<10) && (c>0) && (c<10))
{
X = 2*((a*b) + (a*c) + (b*c));
V = a*b*c;
D = sqrt(pow(a,2) + pow(b,2) + pow(c,2));
printf("El area del Ortoedro es %f \n", X);
printf("La diagonal del Ortoedro es %f \n", D);
printf("El volumen del Ortoedro es %f \n", V);
}
else
{
printf("Valores Invalidos \n");
}
getch();
}



