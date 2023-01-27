#include <stdlib.h>
#include <stdio.h>
#include "strings.h"
#include "fileLib.h"
#include "Funktionen.h"
#include <windows.h>
#include "daten_ausgeben.h"
#include "utils.h"

void string_schuelies_einlesen()
{
    struct schuely* string_schuelies = NULL;
    int string_schuely_count = 0;


    char* test_strings[] =
    {
        "Jan Traussnigg; Robotik; 16; 8; trajan20@htl-kaindorf.at;",
        "Iwana Ursnik; Robotik; 17; 6; ursniwn20@htl-kaindorf.at;",
            "Elias Gottsbacher; Robotik; 17; 12; goteln2920@htl-kaindorf.at;"
    };

    //int string_schuely_amount = sizeof(test_strings)/sizeof(test_strings[0]);
    int string_schuely_amount = 3;

    char* editable_string;

    for(int k = 0; k < string_schuely_amount; k++)
    {
        editable_string = (char*) malloc(80*sizeof(char));
        initString(editable_string, 80);
        strcpy(editable_string, test_strings[k]);

        string_schuelies = (struct schuely*) realloc(string_schuelies, (string_schuely_count + 1)*sizeof(struct schuely));
    //    printf("\n%d\n", string_schuelies);
  //      printf("%d", sizeof(string_schuelies[string_schuely_count]));
        read_schuely_from_string(&string_schuelies[string_schuely_count], editable_string);
//        printf("%d", sizeof(string_schuelies[string_schuely_count]));
        string_schuely_count++;

        free(editable_string);
    }

    printf("log z");


    for(int j = 0; j<string_schuely_amount; j++)
    {
        Sleep(100);
        Profil_ausgeben(&string_schuelies[j]);
    }
    Sleep(100);
}


/*
 *     struct schuely* string_schuelies = NULL;

    int string_schuely_amount = 0;
    string_schuelies = (struct schuely*) malloc(sizeof(struct schuely));
    string_schuely_amount++;


    struct schuely* new_schuelies = (struct schuely*) malloc(sizeof(struct schuely));

struct schuely* new_string_schuelies = (struct schuely*) malloc((string_schuely_amount+1)*sizeof(struct schuely));
memcpy(new_string_schuelies, string_schuelies, string_schuely_amount*sizeof(struct schuely));
memcpy(&new_string_schuelies[string_schuely_amount], new_schuelies, sizeof(struct schuely));
string_schuely_amount++;
free(string_schuelies);
string_schuelies = new_string_schuelies;

*/