#include <stdio.h>
#include "kbinput.h"

int getInteger(char text[],int lower_limit,int upper_limit)
{
    int intValue;
    int scanf_var = 0;
    char s[80];
    do
    {
        printf("%s ",text);
        fgets(s,80,stdin);
        fflush(stdin);
    }
    while(sscanf(s,"%d",&intValue)<1 || intValue<lower_limit || intValue>upper_limit);
    return intValue;
}

double getDouble(char text[],double lower_limit,double upper_limit)
{
    double doubleValue;
    char s[80];
    do
    {
        printf("%s ",text);
        fgets(s,80,stdin);
        fflush(stdin);
    }
    while(sscanf(s,"%lf",&doubleValue)<1 || doubleValue<lower_limit || doubleValue>upper_limit);
    return doubleValue;
}
