#include "head.h"

int main()
{
    t_morceau* morceau;
    int i,j;

    srand(time(NULL));

    morceau = init_alea_morceau();

///Affichage///
    printf("\n\n\n ---- MORCEAU ----\n");

    for (i=0;i<morceau->nombre_phrase;i++)
    {
        if (morceau->schema[i]==9)
        {
         for (j=0;j<morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].nb_note;j++)
            {
                printf ("%c%d", morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].hauteur, morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].demi_ton);
                printf ("%d(%f) ", morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].octave, morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].temp);
            }
        }
        else{
        for (j=0;j<morceau->morceau_phrases[morceau->schema[i]].nb_note;j++)
            {
                printf ("%c%d ", morceau->morceau_phrases[morceau->schema[i]].note[j].hauteur, morceau->morceau_phrases[morceau->schema[i]].note[j].demi_ton);
                printf ("%d(%f) ", morceau->morceau_phrases[morceau->schema[i]].note[j].octave, morceau->morceau_phrases[morceau->schema[i]].note[j].temp);
            }
        }
        printf ("\n");
    }
///Affichage///

     liberer_morceau(morceau);
    return 0;
}
