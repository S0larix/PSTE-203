#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED
#include "header.h"

///Prototypes
void Au_clair_de_la_lune();
void Lire_Son(char* fichier_son,int * tempo,float temps);
//void Lire_Son(char* fichier_son);
void aleatoire_tempo_mesure(int *tempo, int *mesure);
void transpo_et_son(t_morceau* morceau,int * tempo,BITMAP* buffer);


#endif // PROTOTYPES_H_INCLUDED
