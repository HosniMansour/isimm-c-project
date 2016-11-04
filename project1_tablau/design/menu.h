#include <stdio.h>
#include <myconio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "cadre.h"
#include "../travail/chargement.h"
#include "../travail/fonction.h"
#include "../travail/recherche.h"
#include "../travail/tri.h"
#include "../travail/suite.h"
#include "../travail/abpre.h"
#include "../travail/fusion.h"

    int k=1;
    int choix,c;
    int t1[50],a[50],t2[50],t3[50],t4[50],t5[50],t6[50],t7[50],t8[50],t9[50],t10[50],t11[50],t12[50],t15[50],t13[50],t14[50],r[50],t16[50],br[50];
    int nc1=0,nc2=0,n1=0,n2=0,n3=0,n4=0,n7=0,n8=0,n9=0,n12=0,n13=0,n14=0,n;
    void menu();

void menugenerale()
{
    if(k==1)
    {
        cadremenu("Menu General",1);
        k--;
    }else
        cadremenu("Menu Géneral",0);
		gotoxy(50,10);printf("1/ Remplissage");
		gotoxy(50,11);printf("2/ Transfere");
		gotoxy(50,12);printf("3/ Symetrique");
		gotoxy(50,13);printf("4/ Recherche");
		gotoxy(50,14);printf("5/ Tri");
		gotoxy(50,15);printf("6/ Insertion");
		gotoxy(50,16);printf("7/ Invertion");
		gotoxy(50,17);printf("8/ Rotation");
		gotoxy(50,18);printf("9/ Presents");
		gotoxy(50,19);printf("10/ Absents");
		gotoxy(50,20);printf("11/ Fusion");
		gotoxy(50,21);printf("12/ Suite");
		gotoxy(50,23);printf("13/ Quitter le programme");
}

void menuremplir()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Remplissage",0);
			gotoxy(40,10);printf("1/ Remplissage T1 [ ");afficher(t1,n1);printf("]");
			gotoxy(40,11);printf("2/ Remplissage T2 [ ");afficher(t2,n2);printf("]");
			gotoxy(40,12);printf("3/ Remplissage T3 [ ");afficher(t3,n3);printf("]");
			gotoxy(40,13);printf("4/ Remplissage T4 [ ");afficher(t4,n4);printf("]");
			gotoxy(40,14);printf("5/ Remplissage T5 [ ");afficher(t5,nc1);printf("]");
			gotoxy(40,15);printf("6/ Remplissage T6 [ ");afficher(t6,nc1);printf("]");
			gotoxy(40,16);printf("7/ Remplissage T7 [ ");afficher(t7,n7);printf("]");
			gotoxy(40,17);printf("8/ Remplissage T8");
			gotoxy(40,18);printf("9/ Remplissage T9");
			gotoxy(40,19);printf("10/ Remplissage T10");
			gotoxy(40,20);printf("11/ Remplissage T11");
			gotoxy(40,21);printf("12/ Remplissage T12");
			gotoxy(40,23);printf("13/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>13);

        clrscr();
		switch(c)
		{
			case 1:cadremenu("Remplissage T1",3);n1=saisie_taille();chargement1(t1,n1);
                gotoxy(10,10+n1);printf("Vous avez saisire T : ");for(int i=0;i<n1;i++){printf("%d ",t1[i]);}
                gotoxy(10,12+n1);printf("-----------------------------------------------");
                gotoxy(10,14+n1);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 2:cadremenu("Remplissage T2",3);n2=saisie_taille();chargement1(t2,n2);
                gotoxy(10,10+n2);printf("Vous avez saisire T : ");for(int i=0;i<n2;i++){printf("%d ",t2[i]);}
                gotoxy(10,12+n2);printf("-----------------------------------------------");
                gotoxy(10,14+n2);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 3:cadremenu("Remplissage T3",3);n3=saisie_taille();chargement2(t3,n3);
                gotoxy(10,10+n3);printf("Vous avez saisire T : ");for(int i=0;i<n3;i++){printf("%d ",t3[i]);}
                gotoxy(10,12+n3);printf("-----------------------------------------------");
                gotoxy(10,14+n3);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 4:cadremenu("Remplissage T4",3);n4=saisie_taille();chargement2(t4,n4);
                gotoxy(10,10+n4);printf("Vous avez saisire T : ");for(int i=0;i<n4;i++){printf("%d ",t4[i]);}
                gotoxy(10,12+n4);printf("-----------------------------------------------");
                gotoxy(10,14+n4);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 5:cadremenu("Remplissage T5",3);if(nc1==0){nc1=saisie_taille();}chargement3(t5,nc1);
                gotoxy(10,10+nc1);printf("Vous avez saisire T : ");for(int i=0;i<nc1;i++){printf("%d ",t5[i]);}
                gotoxy(10,12+nc1);printf("-----------------------------------------------");
                gotoxy(10,14+nc1);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 6:cadremenu("Remplissage T6",3);if(nc1==0){nc1=saisie_taille();}chargement3(t6,nc1);
                gotoxy(10,10+nc1);printf("Vous avez saisire T : ");for(int i=0;i<nc1;i++){printf("%d ",t6[i]);}
                gotoxy(10,12+nc1);printf("-----------------------------------------------");
                gotoxy(10,14+nc1);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 7:cadremenu("Remplissage T7",3);n7=saisie_taille();chargement3(t7,n7);
                gotoxy(10,10+n7);printf("Vous avez saisire T : ");for(int i=0;i<n7;i++){printf("%d ",t7[i]);}
                gotoxy(10,12+n7);printf("-----------------------------------------------");
                gotoxy(10,14+n7);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 8:cadremenu("Remplissage T8",3);n8=saisie_taille();chargement5(t8,n8);
                gotoxy(10,10);printf(" T : ");for(int i=0;i<n8;i++){printf("%d ",t8[i]);}
                gotoxy(10,12);printf("-----------------------------------------------");
                gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 9:cadremenu("Remplissage T9",3);n9=saisie_taille();chargement2(t9,n9);
                gotoxy(10,10+n9);printf("Vous avez saisire T : ");for(int i=0;i<n9;i++){printf("%d ",t9[i]);}
                gotoxy(10,12+n9);printf("-----------------------------------------------");
                gotoxy(10,14+n9);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 10:cadremenu("Remplissage T10",3);if(nc2==0){nc2=saisie_taille();}chargement4(t10,nc2);
                gotoxy(10,10);printf(" T : ");for(int i=0;i<nc2;i++){printf("%d ",t10[i]);}
                gotoxy(10,12);printf("-----------------------------------------------");
                gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 11:cadremenu("Remplissage T11",3);if(nc2==0){nc2=saisie_taille();}chargement4(t11,nc2);
                gotoxy(10,10);printf(" T : ");for(int i=0;i<nc2;i++){printf("%d ",t11[i]);}
                gotoxy(10,12);printf("-----------------------------------------------");
                gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 12:cadremenu("Remplissage T12",3);n12=saisie_taille();chargement2(t12,n12);
                gotoxy(10,10+n12);printf("Vous avez saisire T : ");for(int i=0;i<n12;i++){printf("%d ",t12[i]);}
                gotoxy(10,12+n12);printf("-----------------------------------------------");
                gotoxy(10,14+n12);printf("Appuyer sur une touche pour retourner au menu ");
                getch();break;
			case 13:menu();break;
		}

	}while(c!=13);
	menu();
}

void menurecherche()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Recherche",0);
			gotoxy(50,10);printf("1/ Recherche Distincts");
			gotoxy(50,11);printf("2/ Recherche Element_sup");
			gotoxy(50,12);printf("3/ Recherche Diviseur Multiples");
			gotoxy(50,13);printf("4/ Recherche Element consecutifs");
			gotoxy(50,14);printf("5/ Recherche Blocs");
			gotoxy(50,15);printf("6/ Recherche El_fréquent");
			gotoxy(50,16);printf("7/ Recherche ecart");
			gotoxy(50,17);printf("8/ Recherche Tab max");
			gotoxy(50,18);printf("9/ Recherche Sequentielle");
			gotoxy(50,19);printf("10/ Recherche Dichotomique");
			gotoxy(50,20);printf("11/ Recherche Median");
			gotoxy(50,21);printf("12/ Recherche Permution");
			gotoxy(50,22);printf("13/ Recherche nb Sequences");
			gotoxy(50,24);printf("14/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>14);

		switch(c)
		{
			case 1:clrscr();cadremenu("Recherche Distincts",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Distincts");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Distincts",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Distincts",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            gotoxy(10,12);printf("le nb d'elements distincts dans T1 est %d\n",recherche_distincts(t1,n1));
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 2:clrscr();cadremenu("Recherche Elements sup",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Elements sup");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Elements sup",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Elements sup",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_elements_sup(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 3:clrscr();cadremenu("Recherche Div Multiples",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Div Multiples");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Div Multiples",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Div Multiples",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_div_multiples(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 4:clrscr();cadremenu("Recherche Consecutif",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Consecutif");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Consecutif",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Consecutif",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_consecutifs(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 5:clrscr();cadremenu("Recherche Blocs",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Blocs");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Blocs",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Blocs",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_blocs(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 6:clrscr();cadremenu("Recherche el_frequent",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche el_frequent");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche el_frequent",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche el_frequent",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_el_frequent(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 7:clrscr();cadremenu("Recherche Ecart",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Ecart");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            rech_ecart(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 8:clrscr();cadremenu("Recherche Tab Max",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Tab Max");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Tab Max",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement2(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Tab Max",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_tab_max(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 9:clrscr();cadremenu("Rech Sequentielle",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Rech Sequentielle");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Rech Sequentielle",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Rech Sequentielle",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            rech_sequentielle(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 10:clrscr();cadremenu("Rech dichotomique",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Ecart");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_dichotomique(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
            case 11:clrscr();cadremenu("Recherche Mediane",3);
                    if((n1==0)||(n2==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T1 rt T2 pour tester Recherche Mediane");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Mediane",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,14);n2=saisie_taille();
                            chargement1(t2,n2);
                        }
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            median(t1,t2,n1,n2);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 12:clrscr();cadremenu("Recherche Permution",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Permution");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Permution",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Ecart",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_permutation(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 13:clrscr();cadremenu("Recherche Nb Sequences",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Recherche Nb Sequences");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Recherche Nb Sequences",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Recherche Nb Sequences",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            recherche_nb_sequences(t1,n1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 14:menu();break;
		}

	}while(c!=13);
	menu();
}

void menutri()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Tri",0);
			gotoxy(50,10);printf("1/ Tri Par Selection T3");
			gotoxy(50,11);printf("2/ Tri a Bulles T3");
			gotoxy(50,12);printf("3/ Tri Par Insertion T3");
			gotoxy(50,13);printf("4/ Tri Remplacer T3");
			gotoxy(50,14);printf("5/ Tri Poasition T3");
			gotoxy(50,16);printf("6/ Retourner au menu Principal T3");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>6);

		switch(c)
		{
			case 1:clrscr();cadremenu("Tri Par Selection",3);
                    if(n3==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T3 pour tester Tri Par Selection");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Tri Par Selection",3);
                            gotoxy(10,14);n3=saisie_taille();
                            chargement1(t3,n3);
                        }
                            clrscr();cadremenu("Tri Par Selection",3);
                            gotoxy(10,10);printf("T3 = ");gotoxy(15,10);affiche(t3,n3);
                            tri_selection(t3,n3);
                            gotoxy(10,12);printf("Apres Tri : ");
                            gotoxy(10,14);printf("T3 = ");gotoxy(15,14);affiche(t3,n3);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 2:clrscr();cadremenu("Tri a Bulles",3);
                    if(n3==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T3 pour tester Tri a Bulles");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Tri a Bulles",3);
                            gotoxy(10,14);n3=saisie_taille();
                            chargement1(t3,n3);
                        }
                            clrscr();cadremenu("Tri a Bulles",3);
                            gotoxy(10,10);printf("T3 = ");gotoxy(15,10);affiche(t3,n3);
                            tri_bulle(t3,n3);
                            gotoxy(10,12);printf("Apres Tri : ");
                            gotoxy(10,14);printf("T3 = ");gotoxy(15,14);affiche(t3,n3);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 3:clrscr();cadremenu("Tri Par Insertion",3);
                    if(n3==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T3 pour tester Tri Par Insertion");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Tri Par Insertion",3);
                            gotoxy(10,14);n3=saisie_taille();
                            chargement1(t3,n3);
                        }
                            clrscr();cadremenu("Tri Par Insertion",3);
                            gotoxy(10,10);printf("T3 = ");gotoxy(15,10);affiche(t3,n3);
                            tri_insertion(t3,n3);
                            gotoxy(10,12);printf("Apres Tri : ");
                            gotoxy(10,14);printf("T3 = ");gotoxy(15,14);affiche(t3,n3);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 4:clrscr();cadremenu("Tri Remplacer T4",3);
                    if(n4==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T4 pour tester Tri Remplacer");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Tri Remplacer",3);
                            gotoxy(10,14);n4=saisie_taille();
                            chargement1(t4,n4);
                        }
                            clrscr();cadremenu("Tri Remplacer",3);
                            gotoxy(10,10);printf("T3 = ");gotoxy(15,10);affiche(t4,n4);
                            tri_remplacer(t4,br,n4);
                            gotoxy(10,12);printf("Apres Tri : ");
                            gotoxy(10,14);printf("B = ");gotoxy(15,14);affiche(br,n4);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 5:clrscr();cadremenu("Tri Poasition T5",3);
                    if(nc1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T5 pour tester Tri Poasition");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Tri Poasition",3);
                            gotoxy(10,14);nc1=saisie_taille();
                            chargement1(t5,nc1);
                        }
                            clrscr();cadremenu("Tri Poasition",3);
                            gotoxy(10,10);printf("T5 = ");gotoxy(15,10);affiche(t5,nc1);
                            tri_position(t5,nc1,r);
                            gotoxy(10,12);printf("Apres Tri : ");
                            gotoxy(10,14);printf("R = ");gotoxy(15,14);affiche(r,nc1);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 6:menu();break;
		}

	}while(c!=6);
	menu();
}

void menufusion()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Fusion",0);
			gotoxy(50,10);printf("1/ Fusion 1");
			gotoxy(50,11);printf("2/ Fusion 2");
			gotoxy(50,13);printf("3/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>3);

		switch(c)
		{
			case 1:clrscr();cadremenu("Fusion 1",3);
                    if((n3==0)||(n12==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T3 et T12 pour tester Fusion 1");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Fusion 1 T3",3);
                            gotoxy(10,14);n3=saisie_taille();
                            chargement1(t3,n3);
                            clrscr();cadremenu("Fusion 1 T12",3);
                            gotoxy(10,14);n12=saisie_taille();
                            chargement1(t12,n12);
                        }
                            clrscr();cadremenu("Fusion 1",3);
                            gotoxy(10,10);printf("T3 = ");gotoxy(15,10);affiche(t3,n3);
                            gotoxy(10,12);printf("T12 = ");gotoxy(15,12);affiche(t12,n12);
                            fusion1(t3,t12,t15,n3,n12);
                            gotoxy(10,16);printf("Resultat: ");gotoxy(20,16);affiche(t15,n3+n12);
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 2:clrscr();cadremenu("Fusion 2",3);
                   if(n==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T10 et T11 pour tester Fusion 2");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Tri Poasition T10",3);
                            gotoxy(10,14);n=saisie_taille();
                            chargement1(t10,n);
                            clrscr();cadremenu("Fusion 2 T11",3);
                            gotoxy(10,14);
                            chargement1(t11,n);
                        }
                            clrscr();cadremenu("Fusion 2",3);
                            gotoxy(10,10);printf("T10 = ");gotoxy(15,10);affiche(t10,n);
                            gotoxy(10,12);printf("T11 = ");gotoxy(15,12);affiche(t11,n);
                            fusion2(t10,t11,t16,n);
                            gotoxy(10,16);printf("Resultat :");gotoxy(20,16);for(int i=0;i<n;i++){printf("%d",t16[i]);}
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 3:menu();break;
		}

	}while(c!=3);
	menu();
}

void menusuite()
{
	do{
        do{
            clrscr();
            cadremenu("Menu Tri",0);
			gotoxy(50,10);printf("1/ Suite Arithmetique");
			gotoxy(50,11);printf("2/ Suite Geometrique");
			gotoxy(50,13);printf("3/ Retourner au menu Principal");
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>3);

		switch(c)
		{
			case 1:clrscr();cadremenu("Suite Arithmetique",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Suite Arithmetique");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Suite Arithmetique",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Suite Arithmetique",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            if(suite_arithmetique(t1,n1))
                            {
                                 gotoxy(10,12);printf("suite arithmétique croissante");
                            }else{
                                gotoxy(10,12);printf("n'est pas une suite arithmétique croissante");
                            }
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 2:clrscr();cadremenu("Suite Geometrique",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Suite Geometrique");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Suite Geometrique",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Suite Geometrique",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            if(suite_geometrique(t1,n1))
                            {
                                 gotoxy(10,12);printf("suite Geometrique croissante");
                            }else{
                                gotoxy(10,12);printf("n'est pas une suite Geometrique croissante");
                            }
                            gotoxy(10,20);printf("-----------------------------------------------");
                            gotoxy(10,22);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 3:menu();break;
		}

	}while(c!=3);
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

		clrscr();

		switch (choix)
		{
			case 1:menuremplir();break;
			case 2: clrscr();cadremenu("Transfere",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Transfere ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Transfere",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Transfere",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            transfere(t1,a,n1);gotoxy(10,12);printf("A =");gotoxy(15,12);affiche(a,n1);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;

			case 3:clrscr();cadremenu("Symetrique",3);
                    if(n1==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T1 pour tester Symetrique ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Symetrique",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                        }
                            clrscr();cadremenu("Symetrique",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            if(symetrique(t1,n1))
                                {gotoxy(10,12);printf("T1 est symetrique");}
                            else
                                {gotoxy(10,12);printf("T1 n'est pas symetrique");}
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 4:menurecherche();break;
			case 5:menutri();break;
			case 6:clrscr();cadremenu("Insertion",3);
                    if(n2==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T2 pour tester Insertion ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Insertion",3);
                            gotoxy(10,14);n2=saisie_taille();
                            chargement1(t2,n2);
                        }
                            clrscr();cadremenu("Insertion",3);
                            gotoxy(10,10);printf("T2 = ");gotoxy(15,10);affiche(t2,n2);
                            insertion(t2,n2);
                            gotoxy(10,16);printf("Apres insertion :");gotoxy(28,16);affiche(t2,n2+1);
                            gotoxy(10,18);printf("-----------------------------------------------");
                            gotoxy(10,20);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 7:clrscr();cadremenu("Invertion",3);
                    if(n9==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T9 pour tester Invertion ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Invertion",3);
                            gotoxy(10,14);n9=saisie_taille();
                            chargement1(t9,n9);
                        }
                            clrscr();cadremenu("Invertion",3);
                            gotoxy(10,10);printf("T9 = ");gotoxy(15,10);affiche(t9,n9);
                            inverse(t9,n9);
                            gotoxy(10,12);printf("Resultat : ");affiche(t9,n9);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 8:clrscr();cadremenu("Rotation",3);
                    if(n9==0)
                        {
                            gotoxy(10,10);printf("il faut saisire T9 pour tester Rotation ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Rotation",3);
                            gotoxy(10,14);n9=saisie_taille();
                            chargement1(t9,n9);
                        }
                            clrscr();cadremenu("Rotation",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t9,n9);
                            rotation(t9,n9);
                            gotoxy(10,12);printf("Resultat : ");affiche(t9,n9);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 9:clrscr();cadremenu("Present",3);
                    if((n1==0)||(n3==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T1 et T3 pour tester Present ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Present",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                            clrscr();cadremenu("Present",3);
                            gotoxy(10,14);n3=saisie_taille();
                            chargement1(t3,n3);
                        }
                            clrscr();cadremenu("Present",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            gotoxy(10,12);printf("T3 = ");gotoxy(15,12);affiche(t3,n3);
                            n13=presents(t1,t3,t13,n1,n3);
                            gotoxy(10,14);printf("Resultat :");gotoxy(19,14);affiche(t13,n13);
                            gotoxy(10,16);printf("-----------------------------------------------");
                            gotoxy(10,18);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 10:clrscr();cadremenu("Absent",3);
                    if((n1==0)||(n3==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T1 et T3 pour tester Absent ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour la saisire");getch();
                            clrscr();cadremenu("Absent",3);
                            gotoxy(10,14);n1=saisie_taille();
                            chargement1(t1,n1);
                            clrscr();cadremenu("Absent",3);
                            gotoxy(10,14);n3=saisie_taille();
                            chargement1(t3,n3);
                        }
                            clrscr();cadremenu("Absent",3);
                            gotoxy(10,10);printf("T1 = ");gotoxy(15,10);affiche(t1,n1);
                            gotoxy(10,12);printf("T3 = ");gotoxy(15,12);affiche(t3,n3);
                            n14=absent(t1,t3,t14,n1,n3);
                            gotoxy(10,14);printf("Resultat :");gotoxy(19,14);affiche(t14,n14);
                            gotoxy(10,16);printf("-----------------------------------------------");
                            gotoxy(10,18);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
			case 11:menufusion();break;
			case 12:menusuite();break;
			case 13:system("exit");break;
		}
	}while(choix!=13);
    system("exit");
}
