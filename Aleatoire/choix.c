
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

#include "head.h"

void choix_gamme_mineure(t_gamme *gamme)
{
    FILE *fichier=NULL;
    int carnot, i, j;
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
    int carnot, i, j;
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

t_phrase* choix_phrase()
{
    t_phrase *phrase;

    phrase = malloc (sizeof(t_phrase)); // création de la phrase

    choix_gamme(&phrase->gamme); // Choix de la gamme de la phrase

    //Choix des notes de la phrase suivant la gamme de la phrase

    return phrase;
}
