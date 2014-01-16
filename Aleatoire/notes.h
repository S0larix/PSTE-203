#ifndef NOTES_H_INCLUDED
#define NOTES_H_INCLUDED

#define Maj 1
#define min 0

typedef struct note
{
    char hauteur;
    int demi_ton;

}t_note;


typedef struct gamme
{
    t_note nom;
    int mode;
    t_note choix[7];

}t_gamme;


typedef struct phrase
{
    int nb_note;
    t_gamme gamme;
    t_note *note;
    struct phrase *suiv;

}t_phrase;


#endif // NOTES_H_INCLUDED
