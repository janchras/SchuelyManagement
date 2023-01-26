#ifndef SCHUELYMANAGEMENT_PROFIL_BEARBEITEN_H
#define SCHUELYMANAGEMENT_PROFIL_BEARBEITEN_H

#include "Funktionen.h"

int weitere_Eigenschaften();
int Menu_zu_bearbeitende_Eigenschaft(struct schuely* ausgewaehltes_schuely, int number);
void Menu_zu_bearbeitendes_Schuely(struct schuely* eingelesene_schuelies, int schuely_amount);

#endif //SCHUELYMANAGEMENT_PROFIL_BEARBEITEN_H
