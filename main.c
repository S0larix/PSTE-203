#include "header.h"

int main()
{
    ///D�claratuion des variables
    char fichier_son[100];
    srand(time(NULL));
    int i,j;
    int *tempo, *mesure;

    tempo=(int*)malloc(1*sizeof(int));
    mesure=(int*)malloc(1*sizeof(int));
    aleatoire_tempo_mesure(tempo,mesure);
    //printf("%d %d",*tempo,*mesure);


    ///initialisation BASS
    BASS_Init(-1, 44100, 0, 0, NULL);

    ///test de la note � jouer

    /*for(i=rand()%25;i>0;i--)
    {
        j=rand()%18;
        sprintf(fichier_son,"Data/Test/%d.wav",j);

        Lire_Son(fichier_son);
    }*/
    //Au_clair_de_la_lune();

    ///Lib�ration de la m�moire
    BASS_Free();
    return 0;
}


void aleatoire_tempo_mesure(int *tempo, int *mesure)
{
* tempo= rand()%151+50;
* mesure= rand()%21+5;
}
