#include "header.h"

void Lire_Son(char* fichier_son,int* tempo,float temps)
//void Lire_Son(char* fichier_son)
{
    ///allocation
    HSTREAM audiochannel;
    ///ouvrir le fichier correspondant
    if(audiochannel = BASS_StreamCreateFile(FALSE,fichier_son,0,0,0))
    {
         ///jouer le son
        BASS_ChannelPlay(audiochannel,TRUE);
        ///tant que le son n'est pas fini
        while(BASS_ChannelIsActive(audiochannel));
    }

    else
        printf("erreur ouverture fichier son %s\n",fichier_son);

}
