#include "header.h"

int main()
{
    ///Déclaratuion des variables

    srand(time(NULL));
    int i,j,test=0;
    int *tempo, *mesure;
    t_morceau* morceau;

    BITMAP *fond_in; // Image de fond quand la souris est sur le bouton "Créer un morceau"
    BITMAP *fond_out; // Image de fond quand ce n'est pas le cas
    BITMAP *souris; // Image de la souris
    BITMAP *quitter; // Image du carré pour quitter
    BITMAP *buffer; // Buffer


    ///initialisation de allegro
    allegro_init();
    install_mouse();
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0)!=0)
    {
        allegro_message("prb gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    ///chargement des bitmaps
    fond_in = load_bitmap("Image/FondIn.bmp",NULL);
    if(!fond_in)
    {
        allegro_message("Erreur fond in");
        exit(EXIT_FAILURE);
    }
    fond_out = load_bitmap("Image/FondOut.bmp",NULL);
    if(!fond_out)
    {
        allegro_message("Erreur fond out");
        exit(EXIT_FAILURE);
    }
    souris = load_bitmap("Image/mousenote.bmp",NULL);
    if(!souris)
    {
        allegro_message("Erreur souris");
        exit(EXIT_FAILURE);
    }
    quitter = load_bitmap("Image/quitter.bmp",NULL);
    if(!quitter)
    {
        allegro_message("Erreur quitter");
        exit(EXIT_FAILURE);
    }
    buffer = create_bitmap(800,600);


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



    ///Affichage///
    while(!(mouse_x>760 && mouse_x<800 && mouse_y<40 && (mouse_b&1))) // Boucle d'affichage tant que la souris n'a pas cliqué sur le boutton pour quitter
    {
        blit(fond_in,buffer,0,0,0,0,SCREEN_W,SCREEN_H);

        if (mouse_x>299 && mouse_x<501 && mouse_y>449 && mouse_y<551)// Si la souris est sur le boutton pour créer un nouveau morceau
        {

            //printf("yolo2");
            if(mouse_b & 1 & test!=1)
            {
                printf("coucou");
                tempo=(int*)malloc(1*sizeof(int));
                mesure=(int*)malloc(1*sizeof(int));
                aleatoire_tempo_mesure(tempo,mesure);
                morceau = init_alea_morceau();
                transpo_et_son(morceau,tempo);
                test=1;
                liberer_morceau(morceau);

            }

        }
        else // Sinon
        {
            blit(fond_out,buffer,0,0,0,0,SCREEN_W,SCREEN_H);
            test=0;
        }
        blit(quitter, buffer,0,0,760,0,SCREEN_W,SCREEN_H); //Afficher le boutton pour cliquer
        draw_sprite(buffer, souris, mouse_x, mouse_y); // La souris
        blit(buffer,screen,0,0,0,0,SCREEN_W,SCREEN_H); // Tout mettre à l'écran

    }///end wile




///Libération de la mémoire
BASS_Free();
free(fond_in);
free(fond_out);
free(souris);
free(quitter);
free(buffer);
return 0;

}
END_OF_MAIN();


void aleatoire_tempo_mesure(int *tempo, int *mesure)
{
    * tempo= rand()%151+50;
    * mesure= rand()%21+5;
}


void transpo_et_son(t_morceau* morceau,int * tempo)
{
    int i,j;
    char fichier_son[100];
    char buffer[10];
    printf("nombre_phrase=%d\n",morceau->nombre_phrase);

    for (i=0; i<morceau->nombre_phrase; i++)
    {
        //printf("schema[i]=%d\n",morceau->schema[i]);
        if (morceau->schema[i]==9)
        {
            //printf("nb_note_if=%d\n",morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].nb_note);
            for (j=0; j<morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].nb_note; j++)
            {
                if(morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].demi_ton==-1)
                    sprintf(buffer,"b");
                if(morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].demi_ton==1)
                    sprintf(buffer,"#");
                sprintf(fichier_son,"Data/NotesPSTEfull/%c%c%d.wav",
                        morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].hauteur,
                        buffer,
                        morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].octave);

            }
        }
        else
        {
            //printf("nb_note_else=%d\n",morceau->morceau_phrases[morceau->schema[i]].nb_note);
            for (j=0; j<morceau->morceau_phrases[morceau->schema[i]].nb_note; j++)
            {
                if(morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].demi_ton==-1)
                    sprintf(buffer,"b");
                if(morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].demi_ton==1)
                    strcat(buffer,"#");

                sprintf(fichier_son,"Data/NotesPSTEfull/%c%c%d.wav",
                        morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].hauteur,
                        buffer,
                        morceau->morceau_phrases[morceau->morceau_phrases[morceau->nombre_phrase_diff-1].fin].note[j].octave);
            }
        }

        printf("nom=%s\n",fichier_son);
        //fichier_son[0]='\0';


       //Lire_Son(fichier_son);
    }
}
