#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int losowa(int poziom)
{
    int max=poziom*25+75;
    int min=0;
    time_t tt;
    int zarodek=time(&tt);
    srand(zarodek);

    return max ? (rand() % max + min) : min;
}
