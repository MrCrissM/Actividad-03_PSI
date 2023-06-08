
#include <stdio.h>
void main ()
{
int l, h, a, P;
float Ab, X, V;
l=h=a=P= 0;
Ab=X=V=0.0;
printf ("Calcula el área y volumen de un Prisma \n");
printf ("Ingresa el valor de lado \n");
scanf ("%i",&l);
printf ("Ingresa el valor de la altura \n");
scanf ("%i",&h);
printf ("Ingresa el valor de la apotema \n");
scanf ("%i",&a);
if ((l>0) && (l<10) &&  (h>0) && (h<10) &&  (a>0) && (a<10))
{
P = l*5;
Ab = (P*a)/2;
V = Ab*h;
X = P*(h+a);
printf("El perimetro del Prisma es %i \n", P);
printf("El area del Prisma es %f \n", X);
printf("El volumen del Prisma es %f \n", V);
}
else
{
printf("Valores Invalidos \n");
}
getch();
}
