#include <stdio.h>
#include <stdlib.h>
#include "Funktionen.h"
#include "kbinput.h"
#include "utils.h"
#include <windows.h>

#define PRINT_DELAY_HOME 250

int Menu()
{
    system("cls");
    Sleep(PRINT_DELAY_HOME);
    printf(" _____               \n");
    printf("|  |  |___ _____ ___ \n");
    Sleep(PRINT_DELAY_HOME);
    printf("|     | . |     | -_|\n");
    Sleep(PRINT_DELAY_HOME);
    printf("|__|__|___|_|_|_|___|\n");
    Sleep(PRINT_DELAY_HOME);
    printf("~~~~~~~~~~~~~~~~~~~~~\n");
    Sleep(PRINT_DELAY_HOME);

    printf("0 ... Exit\n");
    printf("1 ... Profil anlegen\n");
    printf("2 ... Profil ausgeben\n");
    printf("3 ... Profil bearbeiten\n");
    printf("4 ... Klasse anlegen\n");

    int ret = getInteger("Choice: ", 0, 4);
    printf("\n");
    return ret;
}

void Profil_initialisieren(struct schuely* x)
{
    initString(x->name, MaxChar_name);
    initString(x->zweig, MaxChar_zweig);
    x->alter=0;
    x->geburtsmonat=0;
    initString(x->email, MaxChar_email);
}


void Profil_erstellen(struct schuely* x)
{
    printf("=====================\n");
    printf("Erstelle das Schuely:\n\n");
    readString("Name:", x->name);
    readString("Zweig:", x->zweig);
    readInt("Alter:", 0, 80, &x->alter);
    readInt("Geburtsmonat:", 1, 12, &x->geburtsmonat);
    readString("E-mail:", x->email);
    printf("=====================\n");
    printf("\n");
}

void schuely_erstellen(struct schuely** schuelies, int schuely_amount)
{

    realloc(*schuelies, ++schuely_amount*sizeof(struct schuely));
    Profil_initialisieren(&(*schuelies)[schuely_amount -1]);
    Profil_erstellen(&(*schuelies)[schuely_amount-1]);
    hitEnterToContinue();
}
