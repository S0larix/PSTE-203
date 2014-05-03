#ifndef CHOIX_H_INCLUDED
#define CHOIX_H_INCLUDED

#include "notes.h"
/**Initialise le morceau de façon aléatoire (gamme/nombre de phrases/succession des phrases)**/
t_morceau* init_alea_morceau();
/**Choisis aléatoirement le type de gamme de jeu (m/M)**/
void choix_gamme (t_gamme *gamme);
/**Choisis aléatoirement parmis les gammes M**/
void choix_gamme_majeure(t_gamme *gamme);
/**Choisis aléatoirement parmis les gammes m**/
void choix_gamme_mineure(t_gamme *gamme);
/**Choisit de façon aléatoire le shéma du morceau et alloue les phrases du morceau**/
void choix_schema (t_morceau* morceau);
/**Choisit de façon aléatoire le tempo de chaque note de chaque phrase (relation entre les phrases inexistantes pour le moment)**/
void choix_tempo (t_phrase* phrase);
/**Choisit de façon aléatoire un accord pour la phrase considérée et lui alloue des notes**/
void choix_note (t_gamme* gamme, t_phrase* phrase);
/**Libère de la mémoire le morceau**/
void liberer_morceau(t_morceau* morceau);



#endif // CHOIX_H_INCLUDED
