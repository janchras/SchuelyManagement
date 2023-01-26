#include <stdio.h>
#include <stdlib.h>
#include "Funktionen.h"
#include <string.h>
#include "fileLib.h"
#include <windows.h>

//Jan Traussnigg; Robotik; 5; 20; trajan20@htl-kaindorf.at;


void read_str_from_string(char* adresse, char* source, char** p)
{
    if(adresse == NULL || source == NULL || p == NULL)
    {
        printf("Error: one or more of the pointers passed to the function are NULL.\n");
        return;
    }
    char* p_end = strchr(source, ';');
    if(p_end == NULL)
    {
        printf("Error: Symbol %c not found in source string.\n", ';');
        return;
    }
    size_t source_length = p_end - source;
    if (source_length >= (size_t) adresse)
    {
        printf("Error: Not enough space in adresse to store the copied string.\n");
        return;
    }
    printf("log1");
    *p_end = '\0';
    printf("log2");
    strncpy(adresse, source, source_length);
    *p = ++p_end;
}



void read_int_from_string(int* adresse, char* source, char** p)
{
    if(adresse == NULL || source == NULL || p == NULL)
    {
        printf("Error: one or more of the pointers passed to the function are NULL.\n");
        return;
    }
    char* p_end = strchr(source, ';');
    if(p_end == NULL)
    {
        printf("Error: Symbol %c not found in source string.\n", ';');
        return;
    }
    *p_end = '\0';
    int val = atoi(source);
    if(val==0 && strcmp(source,"0")!=0)
    {
        printf("Error: Not a valid integer.\n");
        return;
    }
    *adresse = val;
    *p = ++p_end;
}


void read_schuely_from_string(struct schuely* string_schuelies, char* source)
{
    read_str_from_string(string_schuelies->name, source, &source);
    read_str_from_string(string_schuelies->zweig, source, &source);
    read_int_from_string(&string_schuelies->alter, source, &source);
    read_int_from_string(&string_schuelies->geburtsmonat, source, &source);
    read_str_from_string(string_schuelies->email, source, &source);
}


/*
    FILE* fp;
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    for (int i = 0; i < MAX_SCHUELIES; i++) {
        char source[100];
        if (fgets(source, sizeof(source), fp) != NULL) {
            read_schuely_from_string(&schuelies[i], source);
        } else {
            break;
        }
    }
    fclose(fp);

*/



