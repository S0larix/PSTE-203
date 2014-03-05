#include "header.h"

int main()
{
    ///Déclaratuion des variables
    char fichier_son[100];
    srand(time(NULL));
    int i,j;

    ///initialisation BASS
    BASS_Init(-1, 44100, 0, 0, NULL);

    ///test de la note à jouer

    /*for(i=rand()%25;i>0;i--)
    {
        j=rand()%18;
        sprintf(fichier_son,"Data/Test/%d.wav",j);

        Lire_Son(fichier_son);
    }*/
    Au_clair_de_la_lune();

    ///Libération de la mémoire
    BASS_Free();
    return 0;
}
