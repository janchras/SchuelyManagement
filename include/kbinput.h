/*  kbinput.h - Header file for keyboard input functions
    28.09.2020
    Thomas Jerman
*/

#ifndef KBINPUT_H_INCLUDED
#define KBINPUT_H_INCLUDED

int getInteger(char text[],int lower_limit,int upper_limit);
double getDouble(char text[],double lower_limit,double upper_limit);

#endif // KBINPUT_H_INCLUDED
