#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "head.h"

int main()
{
    t_phrase *phrase;

    srand(time(NULL));

    phrase = choix_phrase();

    return 0;
}
