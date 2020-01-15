#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int nowagra(int poziom)
{
    naglowek();
    int punkty=0;
    int szanse=3;
    int x=2;
    int ziarno;
    int dmg=10;
    while(szanse!=0)
    {
        ziarno = losowa(poziom)%100;
        if (x==1)
        {
            printf("  [  ZYSKUJESZ %d PUNKTOW.  ]   \n \n",dmg);
            punkty=punkty+10;
        }
        else if (x==0)
        {
            printf("  [  TRACISZ JEDNA SZANSE.  ] \n \n");
            szanse=szanse-1;
        }

        printf("  [  ZDOBYTE PUNKTY: %d ]\n",punkty);
        printf("  [ POZOSTALE SZANSE: %d ]\n",szanse);

        if (ziarno<=25)
            x=dodawanie(poziom);
        else if(ziarno<=50)
            x=mnozenie(poziom);
        else if(ziarno<=75)
            x=dzielenie(poziom);
        else if(ziarno<=100)
            x=odejmowanie(poziom);

        naglowek();
    }
    historiazapis(punkty);
}

