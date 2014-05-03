#ifndef NOTES_H_INCLUDED
#define NOTES_H_INCLUDED

typedef struct note // Un note
{
    char hauteur; // Sa hauteur (do, r�, mi, fa, sol, la ou si)
    int demi_ton; // La gestion des demi-tons (-1 : b�mol // 0: note juste // 1: di�se)
    int octave; //Octave sur laquelle la note est jou�e
    float temp; //dur�e de la note (0.25 = double croche // 0.5 = croche // 1 = noire // 2 blanche // 4 = ronde)

}t_note;


typedef struct gamme // Une gamme
{
    t_note nom; // Nom de la gamme
    int mode; // Majeur ou mineur
    t_note choix[7]; // Les 7 notes de la gamme

}t_gamme;


typedef struct phrase // Une phrase
{
    int nb_note; // Nombre de note dans la phrase (al�atoire)
    t_note *note; // Enchainement des notes
    t_note *accord; // Accord de la phrase
    int fin; // Si c'est la phrase de fin on donne un num�ro �quivalent � la phrase correspondante

}t_phrase;

typedef struct morceau // Le morceau
{
    t_gamme morceau_gamme; // La gamme du morceau (al�atoire)
    t_phrase* morceau_phrases; // Les diff�rentes phrases du morceau
    t_phrase phrase_fin; /// PAS ENCORE G�R� (la phrase de fin)
    int nombre_phrase, nombre_phrase_diff; // nombre de phrase total et de phrase diff�rentes
    char numero_phrase; // Pour r�cup�rer le chemin du sch�ma choisit de fa�on al�atoire
    int* schema; // L'enchainement des phrases selon les sch�ma (choisit al�atoirement)

}t_morceau;


#endif // NOTES_H_INCLUDED
