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

    // char pointer pointer; pointer das aus ein array zeigt; dieses array hat an indizes wieder pointer (zeigen auf char array = string!);
    char **result;
    int j = 0;              // var j als separater laufindex für result; damit werte an richtige stelle gelegt werden

    // dynamische speicheralloz. für unsere pointer an den indizes -> noch kein speicher für die länge der char arrays
    result = malloc(sizeof(char*) * len);

    // Algo. gehe durch array und wenn kriterien zutreffen; alloz. speicher für 100 chars dynamisch; lege neuen string an stelle j
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

    // da speicher für jede zeile separat alloz. wurde, muss jede zeile auch separat gefreet werden
    for (int i = 0; i < j; ++i)
    {
        free(result[i]);
    }

    // letztendlich muss noch spciher der char* gefreet werden
    free(result);
}

