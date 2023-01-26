#include <stdlib.h>
#include <stdio.h>
#include "strings.h"
#include "fileLib.h"
#include "Funktionen.h"
#include <windows.h>

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

    int string_schuely_amount = sizeof(test_strings)/sizeof(test_strings[0]);

    printf("log x");

    for(int k = 0; k < string_schuely_amount; k++)
    {
        printf("log x");
        string_schuelies = (struct schuely*) realloc(string_schuelies, 10000*(string_schuely_count + 1)*sizeof(struct schuely));
        printf("\n%d\n", string_schuelies);
        printf("%d", sizeof(string_schuelies[string_schuely_count]));
        read_schuely_from_string(&string_schuelies[string_schuely_count], test_strings[k]);
        printf("%d", sizeof(string_schuelies[string_schuely_count]));
        string_schuely_count++;
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

/* Fill the new struct with data *//*

struct schuely* new_string_schuelies = (struct schuely*) malloc((string_schuely_amount+1)*sizeof(struct schuely));
memcpy(new_string_schuelies, string_schuelies, string_schuely_amount*sizeof(struct schuely));
memcpy(&new_string_schuelies[string_schuely_amount], new_schuelies, sizeof(struct schuely));
string_schuely_amount++;
free(string_schuelies);
string_schuelies = new_string_schuelies;

*/