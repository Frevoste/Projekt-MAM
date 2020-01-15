
struct Gracz
{
    char imie[20];
};
int historiazapis(int wynik)
{
    struct Gracz osoba;
    printf("Podaj swoje Imie: ");
    scanf("%s",osoba.imie);
    FILE *plik;
        plik = fopen("historiaimie.txt","w");
    fprintf(plik,"%s",osoba.imie);
    fclose(plik);
        plik = fopen("historiawynik.txt","w");
    fprintf(plik,"%d",wynik);
    fclose(plik);
    return 0;
}
