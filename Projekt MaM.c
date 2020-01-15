#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stronatytul.h"
#include "naglowek.h"
#include "nowagra.h"
#include "losowa.h"
#include "clear.h"
#include"dodawanie.h"
#include"odejmowanie.h"
#include"dzielenie.h"
#include"mnozenie.h"
#include"historiawyswietl.h"
#include"historiazapis.h"
int main()
{
    int wybor=0;
    while(wybor!=3)
    {
        naglowek();
        menu();
        scanf("%d",&wybor);
        switch(wybor)
        {
            case 1:
            {
                int poziom=-1;
                naglowek();
                printf("Podaj poziom trudnosci od 1 do nieskonczonosci: ");
                while(poziom<1)
                {
                    naglowek();
                    printf("Podaj poziom trudnosci od 1 do nieskonczonosci: ");
                    scanf("%d",&poziom);
                }
                nowagra(poziom);
            }
            break;
            case 2:
            {
              historiawyswietl();
            }
            break;
            case 3:
            {

                naglowek();
                printf("     [    DZIEKUJE WSZYSTKIM ZA UWAGE    ]  \n\n\n");
            }
            break;
        }
    }
return 0;
}
