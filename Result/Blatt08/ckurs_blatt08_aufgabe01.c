#include<stdio.h>

int main()
{
  //Gib die Fakultäten von n aus
  int i, n = 10;                    // Problem i ist uninitialisiert, nur n = 10
  int produkt = 1;

  // test von i vor der for-schleife
  for (int i = 2; i < n; ++i)         // in der for wir i auf 2 assigend und läuft bis 9 da <10
  {
    produkt = produkt * i;
    printf("i = %d\n", i);
  }

  printf("Die Fakultät von n = %d und damit das Produkt der Zahlen ([%d, ..., %d]) ist %d\n", n, 1, n, produkt);
  // gibt nur fak 9 aus = 362880

}
