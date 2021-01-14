/* 32.c Programma ar datu izvadi (data out)
Programmas autors: Agris Lapins
Prg. veidota 2021. gada 14. janvaarii
Versija: 0.0.1
Programma faktoriaalu apreekiniem. Faktoriaalus rekina veselu skaitlu rindaam
Skaitlu faktoriaals loti strauji aug. */

#include <stdio.h>

int main()
{
int num, i;
int reizinajums = 1;

    printf("Ievadam veselu skaitli: ");
    scanf("%d", &num);

        for (i = 1 ; i <= num ; i++)
    {
	        reizinajums = reizinajums * i;
    }
                printf("Skaitla %d faktoriaals ir: %d\n", num, reizinajums);
}