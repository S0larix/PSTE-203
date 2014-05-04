#include "header.h"

void Au_clair_de_la_lune()
{
    FILE*fp;
    int gamme;
    int * tempo;
    float temp;
    char note[6],temps[8],chaine[50];

    fp=fopen("ACDLL.txt","r");

    while(!feof(fp))
    {
        fscanf(fp,"%s",note);
        fscanf(fp,"%d",&gamme);
        fscanf(fp,"%s",temps);
        sprintf(chaine,"Data/Clair_Lune/%s%d%s.wav",note,gamme,temps);
        printf("%s\n",chaine);
        if(strcmp("Soupir",note))
            Lire_Son(chaine,tempo,temp);
        else
            Sleep(100);
    }

}
