#include "daten_ausgeben.h"
#include "Funktionen.h"
#include <stdio.h>
#include "strings.h"
#include <windows.h>
#include "kbinput.h"

void Profil_ausgeben(struct schuely* x)
{
    printf("Name: %s\n", x->name);
    printf("Zweig: %s\n", x->zweig);
    printf("Alter: %d\n", x->alter);
    printf("Geburtsmonat: %d\n", x->geburtsmonat);
    printf("email: %s\n", x->email);
    printf("\n");
}

int Menu_Profil_ausgeben() {
    printf("----------------\n");
    printf("Profil ausgeben:\n");
    printf("----------------\n");
    printf("1 ... angelegte Profile ausgeben\n");
    printf("2 ... String-eingelesene Profile ausgeben\n");
    printf("3 ... File-eingelesene Profile ausgeben\n");

    int ret = getInteger("Choice: ", 1, 3);
    printf("\n");
    return ret;
}

void call_Profil_ausgeben(struct schuely* eingelesene_schuelies, int schuely_amount)
{
    switch(Menu_Profil_ausgeben())
    {
        case 1:
            for(int i = 0; i<schuely_amount; i++)
            {
                Sleep(100);
                Profil_ausgeben(&eingelesene_schuelies[i]);
            }
            Sleep(100);
            break;
        case 2:
            string_schuelies_einlesen();
            break;
    }
}



