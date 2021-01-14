/* 22. c
Programmas autors : Agris Lapins
Prg . veidota 2021.gada 11.janvari
Versija : 0.0.1
Programma cikliskam robezhas e apreekjinam */

#include <stdio.h> //tiek pievienota izvades un ievades failu biblioteka
#include <math.h>  //tiek pievienota matematikas biblioteka

int main()
{
    int k;          // cikla mainigais
    double lim;     // robezhas mainigaa defineeshana

        for (k=1; k<=50; k++ )
    {
            lim = pow((1+1./k),k);
            printf("k=%d lim=%f \n", k, lim);
    }
}
//kompile izmantojot g++ (Programmas nosaukums)