#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input3.h"

/* Die Konstanten:
 *  int MAX_LAENGE_STR - die maximale String Länge
 *  int MAX_LAENGE_ARR - die maximale Array Länge
 *  sind input3.c auf jeweils 255 und 100 definiert
 */

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Aufruf: %s <anzahl> <bundesland>\n", argv[0]);
        printf("Beispiel: %s 100 Bayern\n", argv[0]);
        printf("Klein-/Großschreibung beachten!\n");
        exit(1);
    }
    int anzahl = atoi(argv[1]);
    char *bundesland = argv[2];

    // Statisch allokierter Speicher
    char staedte[MAX_LAENGE_ARR][MAX_LAENGE_STR];
    char laender[MAX_LAENGE_ARR][MAX_LAENGE_STR];
    int bewohner[MAX_LAENGE_ARR];

    int len = read_file("staedte.csv", staedte, laender, bewohner);

    // Hier implementieren

    char **result;
    int j = 0;

    result = malloc(sizeof(char*) * len);

    for (int i = 0; i < len; ++i)
    {

        if (bewohner[i] >= anzahl && strcmp(laender[i], bundesland) == 0)
        {
            result[j] = malloc(100);
            sprintf(result[j], "Die Stadt %s hat %d Einwohner.", staedte[i], bewohner[i]);
            j = j + 1;
        }
    }
    write_file(result, j);
    for (int i = 0; i < j; ++i)
    {
        free(result[i]);
    }
    free(result);
}

