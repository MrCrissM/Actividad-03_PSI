
#include <stdio.h>
#include <math.h>
void main ()
{
int h, g;
float r, X, V, PI;
PI = 3.14;
h=g=0;
r=X=V=0.0;
printf ("Calcula el área y volumen de un cono \n");
printf ("Ingresa el valor de altura \n");
scanf ("%i",&h);
printf ("Ingresa el valor de generatriz \n");
scanf ("%i",&g);
if ((h>0) && (h<10) && (g>0) && (g<30))
{
r = sqrt(pow(g,2)-(pow(h,2)));
X = PI*r*(g+r);
V = (PI*(pow(r,2))*h)/3;
printf("El radio del Cono es %f \n", r);
printf("El area del Cono es %f \n", X);
printf("El volumen del Cono es %f \n", V);
}
else
{
printf("Valores Invalidos \n");
}
getch();
}
