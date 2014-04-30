#include "head.h"

void choix_gamme_mineure(t_gamme *gamme)
{
    FILE *fichier=NULL;
    int carnot, i;
    t_note h;

    carnot = (rand()%12)+1; // Aléatoire sur la roue de Carnot

    switch (carnot) // Ouverture du bon fichier en fonction de la gamme choisie
    {
    case 1: // C (la m)
        h.hauteur = 'a';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/la.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 2: // +1h (mi m)
        h.hauteur = 'e';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/mi.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 3: // si m
        h.hauteur = 'b';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/si.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 4: // fa# m
        h.hauteur = 'f';
        h.demi_ton = 1;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/fad.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 5: // réb m
        h.hauteur = 'd';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/reb.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 6: // lab m
        h.hauteur = 'a';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/lab.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 7: // mib m
        h.hauteur = 'e';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/mib.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 8: // sib m
        h.hauteur = 'b';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/sib.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 9: // fa m
        h.hauteur = 'a';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/fa.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 10: // do m
        h.hauteur = 'c';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/do.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 11: // sol m
        h.hauteur = 'g';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/sol.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 12: // re m
        h.hauteur = 'd';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/mineures/re.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    }

}

void choix_gamme_majeure(t_gamme *gamme)
{
    FILE *fichier=NULL;
    int carnot, i;
    t_note h;

    carnot = (rand()%12)+1; // Aléatoire sur la roue de Carnot

    switch (carnot) // Ouverture du bon fichier en fonction de la gamme choisie
    {
    case 1: // C (do M)
        h.hauteur = 'c';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/do.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 2: // +1h (sol M)
        h.hauteur = 'g';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/sol.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 3: // re M
        h.hauteur = 'd';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/re.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 4: // la M
        h.hauteur = 'a';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/la.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 5: // mi M
        h.hauteur = 'e';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/mi.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 6: // si M
        h.hauteur = 'b';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/si.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 7: // fa# M
        h.hauteur = 'f';
        h.demi_ton = 1;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/fad.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 8: // reb M
        h.hauteur = 'd';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/reb.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 9: // lab M
        h.hauteur = 'a';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/lab.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 10: // mib M
        h.hauteur = 'e';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/mib.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 11: // sib M
        h.hauteur = 'b';
        h.demi_ton = -1;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/sib.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    case 12: // fa M
        h.hauteur = 'f';
        h.demi_ton = 0;
        gamme->nom = h;
        fichier = fopen ("gammes/Majeures/fa.txt", "r"); // Ouverture du bon fichier en mode lecture seule
        for (i=0; i<7; i++)
        {
            fscanf(fichier, "%c", &h.hauteur);
            printf ("%c", h.hauteur); //test
            fscanf(fichier, "%d", &h.demi_ton);
            h.demi_ton--;
            printf ("%d", h.demi_ton); // test
            gamme->choix[i]=h;
        }
        fclose(fichier);
        break;
    }

}

void choix_gamme (t_gamme *gamme)
{
    int mode;

    mode = rand()%2; // mode aléatoire (0:mineure 1:Majeure)

    gamme->mode = mode; // mode appliqué à la gamme

    printf ("%d\n", mode);
    switch (gamme->mode)
    {
    case 0:
        choix_gamme_mineure(gamme);
        break;
    case 1:
        choix_gamme_majeure(gamme);
        break;
    }
}

void choix_schema (t_morceau* morceau)
{
    FILE* fichier=NULL;
    char chemin[1000];
    int ascii=0;
    int i;
    chemin[0]='\0';

    fichier = fopen("types/phrases/nombre.txt","r"); // On ouvre le fichier indiquant combien de schéma existent
    if (fichier!=NULL)
    {
        fscanf(fichier, "%d", &ascii); // On stocke le nombre de schéma existant
        morceau->numero_phrase = (rand()%ascii)+'0'; // On en choisi un de façon aléatoire
    }
    fclose(fichier);

    /* Récupération du chemin avec le schéma choisi*/
    strcat(chemin, "types/phrases/");
    chemin[14] = morceau->numero_phrase;
    strcat(chemin, ".txt");


    fichier = fopen(chemin, "r");
    if (fichier!=NULL)
    {
        fscanf(fichier, "%d", &morceau->nombre_phrase); // On récupère le nombre total de phrases dans le morceau
        morceau->schema = malloc (morceau->nombre_phrase * sizeof(int)); // On alloue un tableau correspondant à l'enchainement des phrases dans le morceau
        fscanf(fichier, "%d", &morceau->nombre_phrase_diff); // On récupère le nombre de phrases différentes dans le morceau
        morceau->morceau_phrases = malloc (morceau->nombre_phrase_diff * sizeof(t_phrase)); // on alloue un tableau de chaine différentes
        for (i=0;i<morceau->nombre_phrase;i++)
        {
            fscanf(fichier, "%d", &morceau->schema[i]); // On récupère l'enchainement de phrases
        }
        for (i=0;i<morceau->nombre_phrase_diff;i++)
        {
            if (i!= morceau->nombre_phrase_diff-1) // Si la phrase n'est pas la dernière
                morceau->morceau_phrases[i].fin=-1; // Elle n'a pas d'équivalent (=> négatif)
            else // Sinon
                fscanf(fichier, "%d", &morceau->morceau_phrases[i].fin); // On récupère son équivalent
        }
    }
    fclose(fichier);
}

void choix_note (t_gamme* gamme, t_phrase* phrase)
{

    int i,j;
    int depart;
    int octave_jouer;

    printf ("\n\n");
    depart = rand()%7;
    octave_jouer = (rand()%3)+6; // Octave du morceau 6 7 ou 8
    phrase->accord = malloc(3*sizeof(t_note));  // On alloue l'accord
    if (phrase->accord == NULL)
        printf ("\n\n\nERREUR ERREUR ERREUR\n\n\n");
    i=rand()%3; // Choix de l'accord de la phrase
    switch (i)
    {
    case 0: // Cas de l'unisson
        phrase->accord[0] = gamme->choix[depart]; // Note à unir
        phrase->accord[1] = gamme->choix[depart]; // Note à unir (la même)
        phrase->accord[2] = gamme->choix[depart]; // Note à unir (la même)
        phrase->accord[0].octave = octave_jouer-1; // octave -1
        phrase->accord[1].octave = octave_jouer; // octave de base du morceau
        phrase->accord[2].octave = octave_jouer+1; // octave +1
        break;
    case 1: // tierce
        phrase->accord[0]=gamme->choix[depart];
        /*test*/printf("%c%d - ", phrase->accord[0].hauteur, phrase->accord[0].demi_ton);
        phrase->accord[1]=gamme->choix[(depart+2)%7];
        /*test*/printf("%c%d - ", phrase->accord[1].hauteur, phrase->accord[1].demi_ton);
        phrase->accord[2]=gamme->choix[(depart+4)%7];
        /*test*/printf("%c%d - ", phrase->accord[2].hauteur, phrase->accord[2].demi_ton);
        phrase->accord[0].octave = octave_jouer; // octave de base du morceau
        phrase->accord[1].octave = octave_jouer; // octave de base du morceau
        phrase->accord[2].octave = octave_jouer; // octave de base du morceau
        break;
    case 2: // quinte
        phrase->accord[0]=gamme->choix[depart];
        /*test*/printf("%c%d - ", phrase->accord[0].hauteur, phrase->accord[0].demi_ton);
        phrase->accord[1]=gamme->choix[(depart+4)%7];
        /*test*/printf("%c%d - ", phrase->accord[1].hauteur, phrase->accord[1].demi_ton);
        phrase->accord[2]=gamme->choix[(depart+8)%7];
        /*test*/printf("%c%d - ", phrase->accord[2].hauteur, phrase->accord[2].demi_ton);
        phrase->accord[0].octave = octave_jouer; // octave de base du morceau
        phrase->accord[1].octave = octave_jouer; // octave de base du morceau
        phrase->accord[2].octave = octave_jouer; // octave de base du morceau
        break;
    }

    //Choisis un nombre de note au hasard entre 6 et 11 notes dans la phrase
    j=(rand()%5)+6; /// Modifié dans la version finale du code
    phrase->nb_note=j;
    phrase->note = malloc(j*sizeof(t_note));
    /*test*/printf ("\n");
    for (i=0;i<j;i++)
    {
        phrase->note[i]=phrase->accord[rand()%3];
        printf ("%c%d ", phrase->note[i].hauteur, phrase->note[i].demi_ton);
    }
}

void choix_tempo (t_phrase* phrase)
{
    int i,j,k;
    int t; //temporaire
    int ok=0;
    int nb_note_rest = phrase->nb_note; // nombre de note restante dans la phrase
    float tempo;

    for (i=0;i<phrase->nb_note;i++)
    {
        while (ok!=1 && nb_note_rest>0)
        {
            tempo = 0.25 * pow(2, (rand()%5)); // tempo aléatoire (0.25*2^r)

            if (tempo==0.25) // double croche
               {
                   if (nb_note_rest>=4) // Si il reste au moins 4 notes
                    {
                        if (nb_note_rest%2==0) // Nb de notes restant = pair
                        {
                            t=4; // On prend les quatres prochaines notes
                            for (j=i;j<i+t;j++) // elles deviennent toutes des doubles croches
                            {
                                phrase->note[j].temp=tempo;
                            }
                            nb_note_rest=nb_note_rest-t;
                        }
                        else
                        {
                            t=3; // les trois prochaines notes
                            k=rand()%3; // On selectionne celle qui deviendra une croche
                            for (j=i;j<i+t;j++) // elles deviennent deux doubles croches et une simple
                            {
                                if (j==i+k)
                                    phrase->note[j].temp=0.5; // la croche
                                else
                                    phrase->note[j].temp=tempo; // les doubles croches
                            }
                            nb_note_rest = nb_note_rest-t;
                        }

                        ok=1; // On valide les notes
                    }
               }
            if (tempo==0.5) // croche
                {
                    if (nb_note_rest%2==0)
                    {
                        t = (rand()%(nb_note_rest/2))+1; // On choisit aléatoirement un nombre de note allant de 1 à la moitié des notes restantes
                        for (j=i;j<i+t;j++) // Elles deviennent toutes des croches
                        {
                            phrase->note[j].temp=tempo;
                        }
                        nb_note_rest=nb_note_rest-t; // On enlève t notes du compte
                        ok=1; // on valide
                    }
                    else
                    {
                        t = 3;
                         for (j=i;j<i+t;j++) // Elles deviennent un triolet
                        {
                            phrase->note[j].temp=0.33;
                        }
                        nb_note_rest=nb_note_rest-t; // On enlève t notes du compte
                        ok=1; // on valide
                    }
                }
            if (tempo==1 || tempo==2)// noire ou blanche
                {
                    phrase->note[i].temp=tempo; // le tempo est pris
                    nb_note_rest--; // Pas de changement dans les prochaines notes
                    ok =1; // validation
                }
            if (tempo==4) // ronde
                {
                    if (phrase->accord[0].hauteur == phrase->accord[1].hauteur) // Si unisson
                    {
                        phrase->note[i].temp=tempo; // le tempo est pris
                        ///suppression de 2/4 notes suivantes ///
                        nb_note_rest--; // Pas de changement dans les prochaines notes
                        ok =1; // validation
                    }
                }
            }

            ok =0; // On réinitialise la validation
        }
    }

t_morceau* init_alea_morceau()
{
    t_morceau* morceau;
    int i;

    morceau = malloc(sizeof(t_morceau)); // Création mémoire du morceau

    choix_gamme(&morceau->morceau_gamme); // Choix aléatoire de la gamme du morceau

    choix_schema(morceau);

    for (i=0;i<morceau->nombre_phrase_diff;i++)
        {
            choix_note(&morceau->morceau_gamme, &morceau->morceau_phrases[i]);
            choix_tempo(&morceau->morceau_phrases[i]);
        }

    return morceau;
}


void liberer_morceau(t_morceau* morceau)
{
    int i;

    free(morceau->schema);
    for (i=0;i<morceau->nombre_phrase_diff;i++)
    {
        free(morceau->morceau_phrases[i].note);
        free(morceau->morceau_phrases[i].accord);
    }
    free(morceau->morceau_phrases);
    free(morceau);
}
