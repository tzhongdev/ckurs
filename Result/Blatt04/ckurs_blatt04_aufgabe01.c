#include <stdio.h>
#include <stdlib.h>
#include "input.h" // Hier binden wir die Bibliothek ein

// Schreibe hier die Funktion "int fibonacci"

int fibonacci(int n) {

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);   // finde vorgänger und vorvorgänger addiere beide -> gehe bis fib(1)
}

int main() {
  int n = lese_int(); // Hier rufen wir die Funktion lese_int auf.
  int f = fibonacci(n);
  printf("Fib(%d) = %d\n", n, f);

  return 0; //Beende das Prog ohne Fehlermeldung
}
