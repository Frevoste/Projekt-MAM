
int mnozenie(int poziom)
{
    printf("\n");

    int wynik;
    int ziarenko=losowa(poziom);
    int pierwsza=ziarenko-13;
    int druga=ziarenko%10;
    printf("                 %d * %d = ?\n",pierwsza,druga);
    if(poziom==1)
    printf("        ***  %d  ***\n",pierwsza*druga);
    scanf("%d",&wynik);
    printf("\n");
    if(wynik==pierwsza*druga)
    {
        return 1;
    }
    else
        return 0;
}
