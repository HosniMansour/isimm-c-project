#include <stdio.h>
#include <myconio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "cadre.h"
#include "../travail/page1.h"
#include "../travail/page2.h"
#include "../travail/page3.h"

    int k=0;
    int choix,car;
    int a,b,n,x,m;
    int t[30];
    int mat[20][20];
    char ch[30],inv[30],c;
    void menu();

void menugenerale()
{
    if(k==0)
    {
        cadremenu("Menu General",1);
        k--;
    }else
        cadremenu("Menu Géneral",0);
		gotoxy(50,10);printf("1/ Somme");
		gotoxy(50,11);printf("2/ PGCD");
		gotoxy(50,12);printf("3/ Racine carre");
		gotoxy(50,13);printf("4/ Carre");
		gotoxy(50,14);printf("5/ Fibonacci");
		gotoxy(50,15);printf("6/ Evaluer un polynome");
		gotoxy(50,16);printf("7/ Premier");
		gotoxy(50,17);printf("8/ Chaine");
		gotoxy(50,18);printf("9/ Tableaux");
		gotoxy(50,19);printf("10/ Matrices");
		gotoxy(50,20);printf("11/ Hanoi");
		gotoxy(50,21);printf("12/ Triangle Pascal");
		gotoxy(50,23);printf("13/ Quitter");
}

void menusomme()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Somme",0);
			gotoxy(50,10);printf("1/ Somme 1");
			gotoxy(50,11);printf("2/ Somme 2");
			gotoxy(50,12);printf("3/ Somme 3");
			gotoxy(50,14);printf("4/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>4);
        clrscr();
		switch(c)
		{
			case 1:cadremenu("Somme 1 ",3);
                do
                {
                 gotoxy(10,10);printf("             ");gotoxy(10,10);printf("N = ");scanf("%d",&n);
                }while(n<0);
                gotoxy(10,13);printf("somme de %d = %d ",n,SOMME1(n));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 2:cadremenu("Somme 2 ",3);
                do
                {
                 gotoxy(10,10);printf("             ");gotoxy(10,10);printf("N = ");scanf("%d",&n);
                }while(n<0);
                gotoxy(10,13);printf("somme 2 n=(%d) est %2.2f ",n,SOMME2(n));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 3:cadremenu("Somme 3 ",3);
                do
                {
                 gotoxy(10,10);printf("             ");gotoxy(10,10);printf("N = ");scanf("%d",&n);
                }while(n<0);
                gotoxy(10,13);printf("somme 3 n=(%d) est %2.2f ",n,SOMME3(n));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 4:menu();break;
		}

	}while(c!=13);
	menu();
}

void menupgcd()
{
	do{
        do{
            clrscr();
            cadremenu("Menu PGCD",0);
			gotoxy(50,10);printf("1/ PGCD eclude");
			gotoxy(50,11);printf("2/ PGCD deference");
			gotoxy(50,14);printf("3/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>3);

        clrscr();
		switch(c)
		{
			case 1:cadremenu("PGCD Eclude",3);
                do
                {
                 gotoxy(10,10);printf("             ");gotoxy(10,10);printf("A = ");scanf("%d",&a);
                 gotoxy(10,11);printf("             ");gotoxy(10,11);printf("B = ");scanf("%d",&b);
                }while(b>a);
                gotoxy(10,13);printf("PGCD %d et %d = %d ",a,b,PGCD_EUC(a,b));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 2:cadremenu("PGCD Deference",3);
                do
                {
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("A = ");scanf("%d",&a);
                 gotoxy(10,11);printf("             ");gotoxy(10,11);printf("B = ");scanf("%d",&b);
                }while(b>a);
                gotoxy(10,13);printf("PGCD %d et %d = %d ",a,b,PGCD_DIFF(a,b));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 3:menu();break;
		}

	}while(c!=6);
	menu();
}

void menuchaine()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Chaine",0);
			gotoxy(50,10);printf("1/ Inverse un mot");
			gotoxy(50,11);printf("2/ Palaindrome");
			gotoxy(50,12);printf("3/ Nombre de voyelle");
			gotoxy(50,13);printf("4/ Tronsfermer en majuscule");
			gotoxy(50,14);printf("5/ Nb occurence de caractaire");
            gotoxy(50,16);printf("6/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>6);

        clrscr();
		switch(c)
		{
			case 1:cadremenu("Inverser chaine",3);

                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("ch = ");scanf("%s",&ch);
                INVERSE(ch,inv,0);
                gotoxy(10,13);printf("Aprés : %s",inv);
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 2:cadremenu("Palindrome",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("ch = ");scanf("%s",&ch);
                INVERSE(ch,inv,0);
                gotoxy(10,13);if(PALINDROME(ch,0)){printf("%s est Palindrome",ch);}else{printf("%s n'est pas  Palindrome",ch);}
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 3:cadremenu("NB voyelle",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("ch = ");scanf("%s",&ch);
                gotoxy(10,13);printf("nombre voyelle de %s est : %d",ch,VOYELLE(ch,0));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 4:cadremenu("Transfermer en majuscule",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("ch = ");scanf("%s",&ch);
                MAJUS(ch,0);
                gotoxy(10,13);printf("Majuscul est %s ",ch);
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 5:cadremenu("Nb occurence de caractaire",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("ch = ");scanf("%s",&ch);
                gotoxy(10,11);printf("             ");gotoxy(10,11);printf("c = ");scanf("%s",&car);
                gotoxy(10,13);printf("nb occurence de %c in %s est %d",car,ch,OCCURENCE(ch,car,0));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 6:menu();break;
		}
	}while(c!=6);
	menu();
}

void menu()
{
	do
    {
        textcolor(LIGHTBLUE);
        textbackground(LIGHTGRAY);
        do{
		    clrscr();
            menugenerale();
			gotoxy(55,33);printf("Donner Votre Choix SVP : ");
			scanf("%d",&choix);
		}while(choix<1||choix>13);
        fflush(stdin);
		clrscr();

		switch (choix)
		{
			case 1:menusomme();break;
			case 2:menupgcd();break;
			case 3:cadremenu("Racine carre",3);
                do
                {
                    gotoxy(10,10);printf("             ");gotoxy(10,10);printf("A = ");scanf("%d",&a);
                }while(a<0);

                    gotoxy(10,11);printf("             ");gotoxy(10,11);printf("N = ");scanf("%d",&n);


                gotoxy(10,13);printf("Racine carre de %d est %.2f ",a,racine_carre(n,a));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 4:cadremenu("Carre",3);
                do
                {
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("X = ");scanf("%d",&x);
                }while(x<0);
                gotoxy(10,13);printf("carre de %d est %2.0f ",x,CARRE(x,1));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 5:cadremenu("FIBONACCI",3);
                do
                {
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("N = ");scanf("%d",&n);
                }while(n<0);
                gotoxy(10,13);printf("U(%d) = %d",n,FIBONACCI(n));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
            case 6:cadremenu("Evoluer Polynome",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("X = ");scanf("%d",&x);
                gotoxy(10,11);printf("             ");gotoxy(10,11);printf("N = ");scanf("%d",&n);
                gotoxy(10,13);printf("Evoluer Polynome = %.2f",polynome(x,n));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 7:cadremenu("Premier",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("X = ");scanf("%d",&x);
                gotoxy(10,11);printf("             ");gotoxy(10,11);printf("N = ");scanf("%d",&n);
                gotoxy(10,13);printf("Evoluer Polynome = %.2f",polynome(x,n));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 8:menuchaine();break;
			case 9:cadremenu("Tablaux",3);
                do
                {
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("n = ");scanf("%d",&n);
                }while(n<0);
                REMPLIR(t,n,0);
                clrscr();cadremenu("Tablaux",3);
                gotoxy(10,10);printf("T = ");gotoxy(15,10);AFFICHAGE(t,n,0);
                gotoxy(10,12);printf("Somme tablau : %d",SOMME_TAB(t,n,0));
                gotoxy(10,14);printf("Max Tab : %d",vector_maxAbs(t,n));
                gotoxy(10,16);printf("Donner Valeur a chercher (occurence) : ");scanf("%d",&a);
                gotoxy(10,18);printf("Nb occurence de %d est % d",a,OCCURENCE_TAB(t,n,a,0));

                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 10:cadremenu("Matrice",3);
                gotoxy(10,10);printf("             ");gotoxy(10,10);printf("ligne = ");scanf("%d",&n);
                gotoxy(10,11);printf("             ");gotoxy(10,11);printf("colone = ");scanf("%d",&m);

                //remplirmm(mat,n,m);
                //clrscr();cadremenu("Matrice",3);
                //gotoxy(10,10);printf("M = ");gotoxy(15,11);affichem(mat,n,m);
                //gotoxy(10,18);printf("Max mat : %d",recherchem(mat,n,m));
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu ");getch();break;
			case 11:cadremenu("Honoi",3);
                Mhonoi();
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu");getch();break;
			case 12:cadremenu("Triangle Pascal",3);
                trianglepascal();
                gotoxy(10,25);printf("-----------------------------------------------");
                gotoxy(10,26);printf("Appuyer sur une touche pour retourner au menu");getch();break;
            case 13 :system("exit");
		}
	}while(choix!=13);
    system("exit");
}
