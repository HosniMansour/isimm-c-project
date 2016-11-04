#include "../works/rechtri.h"

void mnrecherche(liste l)
{
    int x;
    rech_aff();
    do
    {
        clrscr();
        rech_aff();
        gotoxy(36,28);printf("Donner Votre Choix SVP : ");
        scanf("%d",&x);
    }while(x<1||x>8);
        clrscr();
    switch(x)
    {
        case 1: affiche_tous(l);getch();break;
        case 2:
            gotoxy(15,2);printf("===================================================");
            gotoxy(30,4);  printf("~~~~ Recherche par tel ~~~~");
            gotoxy(15,6);printf("===================================================\n\n");
            rech_num_tel(l);getch();break;

        case 3:
            gotoxy(15,2);printf("===================================================");
            gotoxy(30,4);  printf("~~~~ Recherche par Nom ~~~~");
            gotoxy(15,6);printf("===================================================\n\n");
            rech_nom(l);getch();break;
        case 4:
            gotoxy(15,2);printf("===================================================");
            gotoxy(30,4);  printf("~~~~ Recherche parindice ~~~~");
            gotoxy(15,6);printf("===================================================\n\n");
            rech_indice(l);getch();break;
        case 5:
            gotoxy(15,2);printf("===================================================");
            gotoxy(30,4);  printf("~~~~ Recherche par code ~~~~");
            gotoxy(15,6);printf("===================================================\n\n");
            rechcd(l);getch();break;
        case 6:
            gotoxy(15,2);printf("===================================================");
            gotoxy(30,4);  printf("~~~~ Tri 1 ~~~~");
            gotoxy(15,6);printf("===================================================\n\n");
            l=tri1(l);gotoxy(30,15);printf("taper une touche pour retourner");getch();break;
        case 7:
            gotoxy(15,2);printf("===================================================");
            gotoxy(30,4);  printf("~~~~ Tri 2 ~~~~");
            gotoxy(15,6);printf("===================================================\n\n");
            l=tri2(l);gotoxy(30,15);printf("taper une touche pour retourner");getch();break;
        case 8: break;
    }
}
