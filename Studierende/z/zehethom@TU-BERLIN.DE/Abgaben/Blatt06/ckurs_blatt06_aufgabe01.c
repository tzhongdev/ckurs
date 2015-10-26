#include <stdio.h>
#include <stdlib.h>
#include "input2.h"

int main()
{
    int n = lese_int();
    int laenge = n - 1;
    int *ptr;

    ptr = malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i)
    {

        ptr[i] = 1;
    }


    for (int i = 0; i < n; ++i)
    {
      if (ptr[i] == 1)
      {
        for (int j = 2; j < n; ++j)
        {
          if ((i+2)*j <= n)
          {
            ptr[((i+2)*j) - 2] = 0;
          }
        }
      }
    }


    print_prim(ptr,laenge);

    free(ptr);

    return 0;
}
