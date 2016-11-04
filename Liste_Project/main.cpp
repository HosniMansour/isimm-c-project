#include <stdio.h>
#include <myconio.h>
#include "headers/splash.h"
#include "headers/menuc.h"
#include "works/ajout.h"
#include "headers/maj.h"
#include "headers/rech.h"
#include "headers/enr.h"

/**
* Hosni Mansour 
* https://hosni.me
* version: 1
*/


int main()
{
    system("mode con: lines=34 cols=80");
    spl();getch();

    liste l=NULL;
    ldc ld;
        ld.tete = NULL;
        ld.queu = NULL;

    int choix,ver=0,x,test=0;
    do
    {
        clrscr();
        Version();
        gotoxy(37,26);printf("Donner Votre Choix SVP : ");
        scanf("%d",&ver);
    }while(ver<1||ver>3);

    clrscr();

    if(ver==3)
    {
        system("EXIT");
        return 0;
    }

    do
    {

        do
        {
            clrscr();
            menu();
            gotoxy(36,26);printf("Donner Votre Choix SVP : ");
            scanf("%d",&choix);
        }while(choix<1||choix>5);
        clrscr();

        switch(choix)
        {
            case 1:if(ver==1) {l=creation(l);} else {printf("steaaaaaaaal working !!");}break;
            case 2:if(ver==1) {l=miseajour(l);} else {printf("steaaaaaaaal working !!");}break;
            case 3:if(ver==1) {mnrecherche(l);} else {printf("steaaaaaaaal working !!");}break;
            case 4:if(ver==1) {l=mnenregistrement(l);}else {printf("steaaaaaaaal working !!");}break;
            case 5: system("exit");
        }

    }while(choix!=5);

    free(l);
    return 0;
}
