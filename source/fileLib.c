#include <stdio.h>
#include <stdlib.h>
#include "Funktionen.h"
#include <string.h>
#include "fileLib.h"


//Jan Traussnigg; Robotik; 5; 20; trajan20@htl-kaindorf.at;


void read_str_from_string(char* dest, char* source, char** p)
{
    if(dest == NULL || source == NULL || p == NULL)
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
    if (source_length >= (size_t) dest)
    {
        printf("Error: Not enough space in dest to store the copied string.\n");
        return;
    }

    source[source_length] = '\0';
    strncpy(dest, source, source_length);
    *p = p_end + 1;

    /*
    size_t i = 0;
    while (source[i] != ';' && source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    *p = &source[i];
    */
}



void read_int_from_string(int* dest_int, char* source, char** p_end)
{
    if(dest_int == NULL || source == NULL || p_end == NULL)
    {
        printf("Error: one or more of the pointers passed to the function are NULL.\n");
        return;
    }
    *p_end = strchr(source, ';');
    if(p_end == NULL)
    {
        *p_end = source + strlen(source);
        printf("No more %c not found in source string.\n", ';');
        return;
    }
    **p_end = '\0';
    //int val = strtol(source, dest_int, 10); //nicht sicher ob das so richtig ist
    //sscanf(source,"%d",&dest_int);
    int val = atoi(source);
    if(val==0 && strcmp(source,"0")!=0)
    {
        printf("Error: Not a valid integer.\n");
        return;
    }
    *dest_int = val;
    *p_end = *p_end + 1;
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



