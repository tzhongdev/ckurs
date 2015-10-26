#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input3.h"

int main(int argc, char **argv) {
    // lege Speicher an, um die Pointer zu den einzelnen Zeilen zu speichern
    char* string_array[5];

    // reserviere den Speicher für den Inhalt der Zeilen statisch
    // dies sollte in Aufgabe 2 dynamisch mittels malloc geschehen
    char erste_zeile[50];
   // char zweite_zeile[50];
    // char dritte_zeile[50];

    // beschreibe den Speicher mit entsprechenden Informationen
    for (int i = 0; i < 3; ++i)
    {
        sprintf(erste_zeile, "Erste Stadt");
        string_array[i] = erste_zeile

    }

    // lege die Pointer im Array ab
    // string_array[0] = erste_zeile;
    // string_array[1] = zweite_zeile;
    // string_array[2] = dritte_zeile;

    // schreibe die Datei mit den entsprechenden 3 Zeilen
    printf("%s\n", string_array[0]);
    printf("%s\n", string_array[1]);
   // write_file(string_array, 3);
}
