
void historiawyswietl()
{
    int n=3;

    int liczba=0;
    char imie[20];

    FILE *plik;
    if ((plik = fopen("historiawynik.txt","r")) == NULL)
    {
        printf("NIE MA TAKIEGO PLIKU");
        exit(1);
    }
        fscanf(plik,"%d",&liczba);
    fclose(plik);
    if ((plik = fopen("historiaimie.txt","r")) == NULL)
    {
        printf("NIE MA TAKIEGO PLIKU");
        exit(1);
    }

        fscanf(plik,"%s",imie);
    fclose(plik);

    while(n!=0)
    {
        naglowek();
    printf("  ----------------[ HISTORIA ]---------------\n");
    printf("  |                                         |\n");
    printf("  |        [  TWOJ OSTATNI WYNIK TO  ]      |\n");
    printf("  |                                         |\n");
    printf("  | [ %10s ]    [  %15d  ] |\n",imie,liczba);
    printf("  |                                         |\n");
    printf("  |                                         |\n");
    printf("  |          ______________________         |\n");
    printf("  |         |  [0] POWROT DO MENU  |        |\n");
    printf("  -------------------------------------------\n");
    scanf("%d",&n);
    }

    return;
}
