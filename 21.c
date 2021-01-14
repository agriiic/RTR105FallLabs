/* 21. c
Programmas autors : Agris Lapins
Prg . veidota 2021.gada 11.janvari
Versija : 0.0.1
Programma paraada iespeejamo datu tipa paarpluudi */

#include <stdio.h>      //tiek pievienota izvades un ievades failu biblioteka
#include <limits.h>     //tiek pievienota mainigo ipasibu, robezu biblioteka
int main()
{
int a = 50000; // mainiga definesana
long int b = 1000000; // mainiga definesana
long int c = a * b; // rezultāts ir paredzams long in robezas

printf("int datu tipa izmers ir: %ld baiti \n", sizeof(int) ); //nosakam integer datu tipa izmeru baitos
printf("Apreekjinam a un b reizinaajumu :\n" ); //pievienojam tekstu
printf("a = %d, b = %ld \n", a, b); //veicam mainigo reizinaajumu
printf("c = a * b = %d * %ld = %ld \n", a,b,c ); // uz ekrana tiek attelots rezultats (50000000000)
}