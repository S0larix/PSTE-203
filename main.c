#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    ///D�claratuion des variables
    char fichier_son[100];

    ///initialisation BASS
    BASS_Init(-1, 44100, 0, 0, NULL);

    ///test de la note � jouer
    printf("Donner le nom du fichier � jouer\n");
    scanf("%s",fichier_son);


    Lire_Son(fichier_son);

    ///Lib�ration de la m�moire
    BASS_Free();
    return 0;
}
