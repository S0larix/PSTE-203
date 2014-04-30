#ifndef CHOIX_H_INCLUDED
#define CHOIX_H_INCLUDED

#include "notes.h"
/**Initialise le morceau de fa�on al�atoire (gamme/nombre de phrases/succession des phrases)**/
t_morceau* init_alea_morceau();
/**Choisis al�atoirement le type de gamme de jeu (m/M)**/
void choix_gamme (t_gamme *gamme);
/**Choisis al�atoirement parmis les gammes M**/
void choix_gamme_majeure(t_gamme *gamme);
/**Choisis al�atoirement parmis les gammes m**/
void choix_gamme_mineure(t_gamme *gamme);
/**Choisit de fa�on al�atoire le sh�ma du morceau et alloue les phrases du morceau**/
void choix_schema (t_morceau* morceau);
/**Choisit de fa�on al�atoire le tempo de chaque note de chaque phrase (relation entre les phrases inexistantes pour le moment)**/
void choix_tempo (t_phrase* phrase);
/**Choisit de fa�on al�atoire un accord pour la phrase consid�r�e et lui alloue des notes**/
void choix_note (t_gamme* gamme, t_phrase* phrase);
/**Lib�re de la m�moire le morceau**/
void liberer_morceau(t_morceau* morceau);



#endif // CHOIX_H_INCLUDED
