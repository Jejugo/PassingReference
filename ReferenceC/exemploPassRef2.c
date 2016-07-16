void Troca(int *px, int *py); /* Prototipo. */

int main() {
   int x=4,y=7;

   /** Ao chamar a funcao passamos o endereco
    * das variaveis x e y como parametro.
   */
   Troca(&x,&y);
   printf("Troca: x vale %d e y vale %d\n",x,y);
   Troca(&x,&y);
   printf("Destroca: x vale %d e y vale %d\n",x,y);

   system("pause");
   return 0;
}

void Troca(int *px, int *py)
/* Troca os valores das variaveis apontadas por px e py. */
{
   int n;

   n= *py;
   *py= *px;
   *px= n;
}
