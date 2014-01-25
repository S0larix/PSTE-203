#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    ///Déclaratuion des variables
    char fichier_son[100];

    ///initialisation BASS
    BASS_Init(-1, 44100, 0, 0, NULL);

    ///test de la note à jouer
    printf("Donner le nom du fichier à jouer\n");
    scanf("%s",fichier_son);


    Lire_Son(fichier_son);

    ///Libération de la mémoire
    BASS_Free();
    return 0;
}
