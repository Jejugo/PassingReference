#include <stdio.h>
#include <stdlib.h>

/* definicao do prototipo */

void complexo2 (float *r, float *t)
{
   float real;

   real = (*r * *r) - (*t * *t);
   *t = 2 * *r * *t;
   *r = real;
}

int main () 
{
   float a, b;

   printf ("Entre com um numero complexo (2 numeros inteiros): ");
   scanf("%f %f", &a, &b);
   complexo2 ( &a, &b);
   printf("O quadrado do número complexo é %f + i %f\n", a, b);

   system("pause");
   return 0;
}
