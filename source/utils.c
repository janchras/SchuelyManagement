#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kbinput.h"
#include "utils.h"

char* getString() {
    char* buffer = (char*) malloc(80*sizeof(char));
    fflush(stdin);
    fgets(buffer, 80, stdin);
    fflush(stdin);
    buffer[strcspn(buffer, "\n")] = 0;
    return buffer;
}

void readString(char text[], char* destination) {
    printf("%s ", text);
    char* buffer = getString();
    strcpy(destination, buffer);
    free(buffer);
}

void readInt(char text[], int lowerLimit, int upperLimit, int* adresse) {
    int value = getInteger(text, lowerLimit, upperLimit);
    *adresse = value;
}

void initString(char* str, size_t size) {
    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
}

void hitEnterToContinue()
{
    fflush(stdin);
    printf("\nHit enter to continue.");
    getchar();
}

