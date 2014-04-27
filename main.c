#include "header.h"

int main()
{
    ///Déclaratuion des variables
    char fichier_son[100];
    srand(time(NULL));
    int i,j;
    int *tempo, *mesure;

    tempo=(int*)malloc(1*sizeof(int));
    mesure=(int*)malloc(1*sizeof(int));
    aleatoire_tempo_mesure(tempo,mesure);
    //printf("%d %d",*tempo,*mesure);


    ///initialisation de allegro
    if (allegro_init() != 0)
      return 1;
    install_keyboard();
    set_color_depth(desktop_color_depth());
    install_mouse();
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0))
    {
                   set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
                   allegro_message("Unable to set any graphic mode\n%s\n", allegro_error);
                   return 1;
    }


    ///initialisation BASS
    BASS_Init(-1, 44100, 0, 0, NULL);

    ///test de la note à jouer

    /*for(i=rand()%25;i>0;i--)
    {
        j=rand()%18;
        sprintf(fichier_son,"Data/Test/%d.wav",j);

        Lire_Son(fichier_son);
    }*/
    //Au_clair_de_la_lune();

    ///Libération de la mémoire
    BASS_Free();
    return 0;
}END_OF_MAIN();


void aleatoire_tempo_mesure(int *tempo, int *mesure)
{
* tempo= rand()%151+50;
* mesure= rand()%21+5;
}
