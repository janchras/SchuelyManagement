#include "Profil_bearbeiten.h"
#include <stdio.h>
#include "kbinput.h"
#include "utils.h"

int weitere_Eigenschaften()
{
    printf("---\n");
    printf("Moechten sie noch weitere Eigenschaften bearbeiten?\n");
    printf("0 ... Nein Danke, ich bin fertig\n");
    printf("1 ... Ja, bitte\n");

    int ret = getInteger("Deine Wahl: ", 0, 1);
    printf("---\n");
    printf("\n");
    return ret;
}

int Menu_zu_bearbeitende_Eigenschaft(struct schuely* ausgewaehltes_schuely, int number)
{
    printf("\n");
    printf("---\n");
    printf("Welche Eigenschaft des Schuely[%d] moechtest du bearbeiten?\n", number);
    printf("1 ... Name: %s\n", ausgewaehltes_schuely->name);
    printf("2 ... Zweig: %s\n", ausgewaehltes_schuely->zweig);
    printf("3 ... Alter: %d\n", ausgewaehltes_schuely->alter);
    printf("4 ... Geburtsmonat: %d\n", ausgewaehltes_schuely->geburtsmonat);
    printf("5 ... email: %s\n", ausgewaehltes_schuely->email);
    printf("\n");

    int ret = getInteger("Zu bearbeitende Eigenschaft: ", 1, 5);
    printf("---\n");
    printf("\n");
    return ret;

}

void Menu_zu_bearbeitendes_Schuely(struct schuely* eingelesene_schuelies, int schuely_amount)
{
    printf("---\n");
    printf("Erstellte Schuelies:\n");
    for(int i = 0; i < schuely_amount; i++)
    {
        printf("Schuely[%d]: %s, %s\n", i, eingelesene_schuelies[i].name, eingelesene_schuelies[i].zweig);
    }
    printf("---\n");
    printf("\n");

    int ret = getInteger("Bitte gib den index des Schuelys ein, das du bearbeiten moechtest: ", 0, schuely_amount);

    do {
        switch (Menu_zu_bearbeitende_Eigenschaft(&eingelesene_schuelies[ret], ret)) {
            case 1:
                readString("Name: ", eingelesene_schuelies[ret].name);
                break;
            case 2:
                readString("Zweig: ", eingelesene_schuelies[ret].zweig);
                break;
            case 3:
                readInt("Alter: ", 0, 80, &eingelesene_schuelies[ret].alter);
                break;
            case 4:
                readInt("Geburtsmonat: ", 0, 80, &eingelesene_schuelies[ret].geburtsmonat);
                break;
            case 5:
                readString("E-Mail: ", eingelesene_schuelies[ret].email);
                break;
        }
    } while(weitere_Eigenschaften());
    printf("\n");
}
