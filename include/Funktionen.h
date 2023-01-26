#ifndef FUNKTIONEN_H_INCLUDED
#define FUNKTIONEN_H_INCLUDED

struct schuely
{
    char name[30];
    char zweig[10];
    int alter;
    int geburtsmonat;
    char email[40];
};

struct Eintrag
{
    char fach[30];
    char lehrer[40];
    char titel[20];
    char art[40];
    char kurzbeschreibung[200];
    char datum[10];
};

int Menu();
void Profil_initialisieren(struct schuely* x);
void Profil_erstellen(struct schuely* x);
void schuely_erstellen(struct schuely** schuelies, int schuely_amount);

#endif // FUNKTIONEN_H_INCLUDED
