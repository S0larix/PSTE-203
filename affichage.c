#include "header.h"

void affichage (int note,int octave)///note entre 1 et 12, octave l’octave ofc
{
    int R, G, B,Color ;
	int nb_notes =0;
	int x,y;//coordonnées des notes

    switch(note){
    case 1:// Do => Rouge
        R=255 ;
        G=0 ;
        B=0 ;
        break;
    case 2://Do# => Rouge-Orange
        R=255 ;
        G=63 ;
        B=0 ;
        break;
    case 3://Ré => Orange
        R=255 ;
        G=127 ;
        B=0 ;
        break;
    case 4://Ré# => Orange-Jaune
        R=255 ;
        G=190 ;
        B=0 ;
        break;
    case 5://Mi => Jaune
        R=255 ;
        G=255 ;
        B=0 ;
        break;
    case 6://Fa => Jaune-Vert
        R=127 ;
        G=255 ;
        B=0 ;
        break;
    case 7://Fa# => Vert
        R=0 ;
        G=255 ;
        B=0 ;
        break;
    case 8://Sol => Vert-Bleu
        R=0 ;
        G=127 ;
        B=127 ;
        break;
    case 9://Sol# => Bleu
        R=0 ;
        G=127 ;
        B=255;
        break;
    case 10://La => Bleu-Violet
        R=127 ;
        G=0 ;
        B=255 ;
        break;
    case 11://La# => Violet
        R=255 ;
        G=0 ;
        B=255 ;
        break;
    case 12://Si => Violet-Rouge
        R=255 ;
        G=0 ;
        B=127 ;
        break;
    }


R=R*(0.5+octave/10);		//à enlever si ça plante, pb d’arrondi
G=G*(0.5+octave/10);		//idem
B=B*(0.5+octave/10);		//idem
x= 40*nb_notes + 25;
y= 20*note + 240*octave +20;
Color = makecol(R,G,B);
ellipsefill(screen, x, y, 15, 10, Color);
line(screen, (x-15), y, (x-15), (y+50), Color);
//line(screen, (x-14), y, (x-14), (y+50), Color);		si la queue est trop fine
}
