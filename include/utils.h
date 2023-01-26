#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

typedef enum{
    false,
    true
}bool;

char* getString();
void readString(char text[], char* adresse);
void readInt(char text[], int lowerLimit, int upperLimit, int* adresse);

#endif // UTILS_H_INCLUDED
