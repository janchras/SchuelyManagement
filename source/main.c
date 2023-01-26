#include <stdlib.h>
#include "Funktionen.h"
#include "daten_ausgeben.h"
#include "Profil_bearbeiten.h"


int main()
{
    struct schuely* schuelies = (struct schuely*) malloc(0);
    int choice;
    int schuely_amount = 0;
    do
    {
        switch(choice = Menu())
        {
            case 1:
                schuely_erstellen(&schuelies, schuely_amount++);
                break;
            case 2:
                call_Profil_ausgeben(schuelies, schuely_amount);
                break;
            case 3:
                Menu_zu_bearbeitendes_Schuely(schuelies, schuely_amount);
                break;
        }
    } while(choice);

    return 0;
}
