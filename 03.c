/* 03. c Programma ar datu ievadi - izvadi ( data in / out )
Programmas autors : Agris Lapins
Veidota 2021. gada 11. janvarii
Versija : 0.0.1
Programma sanjem datus ( vienu simbolu ) no konsoles
un izvada uz ekrana kaa simbolu */

#include <stdio.h>	// Iekljaujam izvades funkciju biblioteeku

int main()		// Taa ir galvenaa C programmas f - ja
{
	printf("Ievadi simbolu:");		// Dialoga izvade

	char abc;				// Tiek deklareets mainigais abc

	scanf("%c", &abc);			// klaviaturas dati tiek iekopeeti
						// adresee , kur atrodas abc

	printf("rakstu zime: ""%c \n", abc);			// Shii ir manigaa abc formateetaa
	printf("decimals skaitlis: ""%d \n", abc);
	printf("sedecimals skaitlis: ""%x \n", abc);
	printf("oktals skaitlis: ""%o \n", abc);
								// izdruka uz ekraana .
								// Dati tiek izvadiiti kaa SIMBOLS

}
