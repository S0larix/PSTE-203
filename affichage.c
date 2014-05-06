#include "header.h"

void affichage (char note,int num_note,int nb_note_total)
{
    int R, G, B,Color ;
	int x,y;//coordonnées des notes
    int intervalle;
    intervalle=(715-85)/nb_note_total;

    if(note=='c')// Do => Rouge
    {
        R=255 ;
        G=0 ;
        B=0 ;
        y=132;
        }
    else if(note=='d')//Ré => Orange
    {
        R=255 ;
        G=127 ;
        B=0 ;
        y=126;
    }
    else if(note=='e')//Mi => Jaune
    {
        R=255 ;
        G=255 ;
        B=0 ;
        y=120;
    }
    else if (note=='f')//Fa => Jaune-Vert
    {
        R=127 ;
        G=255 ;
        B=0 ;
        y=114;
    }
    else if (note=='e')//Sol => Vert-Bleu
    {
        R=0 ;
        G=127 ;
        B=127 ;
        y=108;
    }
    else if (note=='a')//La => Bleu-Violet
    {
        R=127 ;
        G=0 ;
        B=255 ;
        y=102;
    }
    else if (note=='b')//Si => Violet-Rouge
    {
        R=255 ;
        G=0 ;
        B=127 ;
        y=96;
    }
    else
    {
        R=255 ;
        G=255 ;
        B=255 ;
        y=150;
    }

///85<x<715 et 75<y<132
x= 85+num_note*intervalle;
Color = makecol(R,G,B);
ellipsefill(screen, x, y, 7, 7, Color);
line(screen, (x-7), y, (x-7), (y+50), Color);
//line(screen, (x-14), y, (x-14), (y+50), Color);		si la queue est trop fine
}
