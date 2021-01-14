/* 20. c Programma ar datu izvadi ( data out )
Programmas autors : Agris Lapins
Prg . veidota 2021.gada 11.janvari
Versija : 0.0.1
Programma mani iztaujaa un veic apreekjinus lietojot user - funkctions */

#include <stdio.h>

void f61()      /* void datu tips noziimee, 
                ka funkcija NEKO neatgriezh
                ( kaa procedure in PASCAL ) */
{
    printf("Sveiks , kaa Tevi sauc? \t");
}
void f62()
    {
printf("Kaads ir Tavs vecums ?\n");
    }
void f63()
        {
printf("Cik liels Tu esi augumaa\n\t? (Augums metros ): ");
        }

int main()
    {
char vards [20]; // Simbolu virkne - masiivs . (20 simboli )
int vecums;
float augums;

f61(); // tiek izsaukta f - ja f61
scanf("%s", vards); // skanee simbolu virkni ( string )
f62(); // tiek izsaukta f - ja f62
scanf("%d", &vecums); // Esi veeriigs ar ampersanda ziimi !
f63(); // tiek izsaukta f - ja f63
scanf("%f", &augums); // Decimaalatdaliitaajs ir punkta simbols : "."
printf("Mans Vards ir: %s \n", vards );
printf("Esmu: %d gadus jauns %d. gada produkts\n", vecums , 2013-vecums);
printf("Garumaa esmu padevies: %f cm \n", augums *100 );
    }