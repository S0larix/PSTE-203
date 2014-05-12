#include "header.h"

void Lire_Son(char* fichier_son,int* tempo,float temps)
//void Lire_Son(char* fichier_son)
{
    ///allocation
    HSTREAM audiochannel;
//    int i;
    ///ouvrir le fichier correspondant
    if(audiochannel = BASS_StreamCreateFile(FALSE,fichier_son,0,0,0))
    {
         ///jouer le son
        BASS_ChannelPlay(audiochannel,TRUE);
        ///tant que le son n'est pas fini
        if(BASS_ChannelIsActive(audiochannel))
        {
            ///printf("ouverture fichier son %s avec %f temps\n",fichier_son,temps);
            ///for(i=0;i<*tempo*100000;i++);
            Sleep((*tempo*temps)*1000/60);
            BASS_ChannelStop(audiochannel);

        }
    }

    else
        printf("erreur ouverture fichier son %s\n",fichier_son);

}
