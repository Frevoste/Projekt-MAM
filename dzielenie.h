
int dzielenie(int poziom)
{
    printf("\n");

    int wynik;
    int ziarenko=losowa(poziom);
    int pierwsza=ziarenko*2;
    int druga=ziarenko%2+1;
    printf("                %d : %d = ?  \n",pierwsza,druga);
    if(poziom==1)
    printf("        ***  %d  ***\n",pierwsza/druga);
    scanf("%d",&wynik);
    printf("\n");
    if(wynik==pierwsza/druga)
    {
        return 1;
    }
    else
        return 0;
}
