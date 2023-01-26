#ifndef FILELIB_H_INCLUDED
#define FILELIB_H_INCLUDED

#include "Funktionen.h"

void read_str_from_string(char* adresse, char* source, char** p);
void read_int_from_string(int* adresse, char* source, char** p);
void read_schuely_from_string(struct schuely* string_schuelies, char* source);

#endif // FILELIB_H_INCLUDED
