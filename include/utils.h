#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

typedef enum{
    false,
    true
}bool;

char* getString();
void readString(char text[], char* destination);
void readInt(char text[], int lowerLimit, int upperLimit, int* adresse);
void initString(char* str, size_t size);
void hitEnterToContinue();


#endif // UTILS_H_INCLUDED
