#ifndef FUNKTIONEN_H_INCLUDED
#define FUNKTIONEN_H_INCLUDED
#define MaxChar_name    40
#define MaxChar_zweig   20
#define MaxChar_email   40


struct schuely
{
    char name[MaxChar_name];
    char zweig[MaxChar_zweig];
    int alter;
    int geburtsmonat;
    char email[MaxChar_email];
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
