int losowa(int);
int dodawanie(int);
int mnozenie(int);
int dzielenie(int);
int odejmowanie(int);
int historiazapis(int);


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
            punkty=punkty+10+2*poziom;
        }
        else if (x==0)
        {
            printf("  [  TRACISZ JEDNA SZANSE.  ] \n \n");
            szanse=szanse-1;
        }

        printf("  /----------[  ZDOBYTE PUNKTY  ]-----------\\\n");
        printf("  |              [  %6d  ]               |      \n",punkty);
        printf("  |                                         |\n");
        printf("  |         [  POZOSTALE SZANSE  ]          |\n");
        printf("  |                 [  %d  ]                 |\n",szanse);
        printf("  |                                         |\n");
        printf("  |              [  POZIOM  ]               |\n");
        printf("  |               [  %4d  ]                |\n",poziom);
        printf("  |                                         |\n");
        printf("  \\--------------[  ZADANIE  ]--------------/\n");
        printf("\t\t");

        if (ziarno<=25)
            x=dodawanie(poziom);
        else if(ziarno<=50)
            x=mnozenie(poziom);
        else if(ziarno<=75)
            x=dzielenie(poziom);
        else if(ziarno<=100)
            x=odejmowanie(poziom);
        naglowek();
        poziom=poziom+1;
    }
    historiazapis(punkty);
}

