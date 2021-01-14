/* 201. c
Programmas autors : Agris Lapins
Prg . veidota 2021 gada 14.janvari
Versija : 0.0.1
Programma lenka parversanai no gradiem uz radianiem */

#include<stdio.h>                           //tiek pievienota izvades un ievades failu biblioteka
#include<math.h>                            //tiek pievienota matematikas biblioteka
    
int main()
{
    float degree, radian;                   //nosaka datu tipu mainigajiem

    printf("Ievadi lenki grados\n");
    scanf("%f", &degree);

    radian = degree * ( M_PI / 180.0 );     //aprekina lenki radianos

    printf("Lenkis radianos ir %f\n", radian);

    return 0;
}
