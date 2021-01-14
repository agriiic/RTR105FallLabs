/* 200. c
Programmas autors : Agris Lapins
Prg . veidota 2021.gada 11.janvari
Versija : 0.0.1 

*/
#include <stdio.h>
int main (void)
{      
     printf("ievadi skaitli:");             //ievada izveleto skaitli
    int b;
    b=2;
     int num;
     scanf("%d", &num);                     //nolasa ievadito skaitli
     printf("jūsu 10 skaitļi:");
     for (int i = num; i <= num + 10; i++) //pievieno klat pa vienam skaitlim lidz sasniedz +10 
     { 
            printf("\n %d ", i);            //izvada iegutos skaitlus
     }

     printf("\n");

     return 0;
}