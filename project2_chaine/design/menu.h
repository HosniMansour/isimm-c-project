#include <stdio.h>
#include <myconio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "../travaille/remplissage.h"
#include "../travaille/palindro.h"
#include "../travaille/fonction.h"
#include "../travaille/supprime.h"
#include "../travaille/tri.h"
#include "cadre.h"

    int k=1;
    int choix,c,n1=0,n2=0,i,nt=0;
    char ch1[20]="",ch2[20]="",ch3[20]="",ch4[20]="",ch5[20]="",ch6[20]="",t[10],m[20]="",tab_ch[30][20],ch7[40]="";
    void menu();

void menu1()
{
    if(k==1)
    {
        cadremenu("Menu General",1);
        k--;
    }else
        cadremenu("Menu Géneral",0);
    gotoxy(50,10);printf("1/ Remplissage");
    gotoxy(50,11);printf("2/ Nombre_Voyelles");
    gotoxy(50,12);printf("3/ Alterner");
    gotoxy(50,13);printf("4/ Remplacer");
    gotoxy(50,14);printf("5/ Suppression");
    gotoxy(50,15);printf("6/ Convertion");
    gotoxy(50,16);printf("7/ Crypter");
    gotoxy(50,17);printf("8/ Verification");
    gotoxy(50,18);printf("9/ Tri_Tableau");
    gotoxy(50,19);printf("10/ Affichage Palindrome");
    gotoxy(50,20);printf("11/ Rechercher & Remplacer");
    gotoxy(50,22);printf("12/ Quitter le programme");
}

void menuremplir()
{
    cadremenu("Menu Remplissage",0);
    gotoxy(45,10);printf("1/ Remplissage ch1 [ %s ]",ch1);
    gotoxy(45,11);printf("2/ Remplissage ch2 [ %s ]",ch2);
    gotoxy(45,12);printf("3/ Remplissage ch3 [ %s ]",ch3);
    gotoxy(45,13);printf("4/ Remplissage ch4 [ %s ]",ch4);
    gotoxy(45,14);printf("5/ Remplissage ch5 [ %s ]",ch5);
    gotoxy(45,15);printf("6/ Remplissage ch6");
    gotoxy(45,16);printf("7/ Remplissage T");
    gotoxy(45,17);printf("8/ Remplissage Mot M [ %s ]",m);
    gotoxy(45,18);printf("9/ Remplissage TAB_CH");
    gotoxy(45,20);printf("10/ Retourne au Menu Principal");
}

void menu2()
{
    do{
        do{
            clrscr();
            menuremplir();
            gotoxy(55,33);printf("Donner Votre Choix SVP : ");scanf("%d",&c);
        }while(c<1||c>10);

    switch (c)
    {
        case 1:clrscr();cadremenu("Saisire ch1",3);saisie_ch1(ch1);
            gotoxy(10,10);printf("Vous avez saisire ch1 = %s ",ch1);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 2:clrscr();cadremenu("Saisire ch2",3);saisie_ch1(ch2);
            gotoxy(10,10);printf("Vous avez saisire ch2 = %s ",ch2);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 3:clrscr();cadremenu("Saisire ch3",3);saisie_ch1(ch3);
            gotoxy(10,10);printf("Vous avez saisire ch3 = %s ",ch3);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 4:clrscr();cadremenu("Saisire ch4",3);saisie_ch1(ch4);
            gotoxy(10,10);printf("Vous avez saisire ch4 = %s ",ch4);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 5:clrscr();cadremenu("Saisire ch5",3);saisie_ch1(ch5);
            gotoxy(10,10);printf("Vous avez saisire ch5 = %s ",ch5);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 6:clrscr();cadremenu("Saisire ch6",3);saisie_ch2(ch6);
            gotoxy(10,10);printf("Vous avez saisire ch6 = %s ",ch6);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 7:clrscr();cadremenu("Saisire T",3);n1=saisie_taille(5,10);saisie4(t,n1);
            gotoxy(10,10+n1);printf("Vous avez saisire T : ");for(i=0;i<n1;i++){printf("%c ",t[i]);}
            gotoxy(10,12+n1);printf("-----------------------------------------------");
            gotoxy(10,14+n1);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 8:clrscr();cadremenu("Saisire Mot m",3);saisie5(m);
            gotoxy(10,10);printf("Vous avez saisire Mot m = %s ",m);
            gotoxy(10,12);printf("-----------------------------------------------");
            gotoxy(10,14);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
        case 9:clrscr();cadremenu("Saisire Tab_ch",3);n2=saisie_taille(2,30);saisir_tab_ch(tab_ch,n2);
            gotoxy(10,10+n2);printf("Vous avez saisire Tab_ch : ");for(i=0;i<n2;i++){printf("%s ",tab_ch[i]);}
            gotoxy(10,12+n2);printf("-----------------------------------------------");
            gotoxy(10,14+n2);printf("Appuyer sur une touche pour retourner au menu ");
            getch();break;
    }
        }while(c!=10);
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
            menu1();
			gotoxy(55,33);printf("Donner Votre Choix SVP : ");
			scanf("%d",&choix);
		}while(choix<1||choix>12);

		clrscr();

		switch (choix)
		{
            case 1:menu2();break;
            case 2: clrscr();cadremenu("Nombre_Voyelle",3);
                    if(ch1[0]==NULL)
                        {
                            gotoxy(10,10);printf("il faut saisire ch1 pour tester la fonction Nombre_Voyelle ");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            gotoxy(10,10);printf("contenu de ch1 : %s",ch1);
                            gotoxy(10,12);printf("les nombre de voyelle Dans ch1 : %d",nombre_voyelle(ch1));
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
                        }

            case 3: clrscr();cadremenu("Alterner",3);
                    if((ch1[0]==NULL)||(ch2[0]==NULL))
                        {
                            gotoxy(10,10);printf("il faut saisire ch1 et ch2 pour tester la fonction alterner");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            gotoxy(10,10);printf("contenu de ch1 : %s et ch2 %s\n\n",ch1,ch2);
                            alterner(ch1,ch2,ch7);
                            gotoxy(10,12);printf("Apres Alterner ch7 = %s",ch7);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu ");
                            getch();break;
                        }
            case 4: clrscr();cadremenu("Remplissage",3);
                   if((ch1[0]==NULL)||(ch2[0]==NULL)||(ch3[0]==NULL))
                        {
                            gotoxy(10,10);printf("il faut saisire ch1, ch2 et ch3 pour tester la fonction Remlissage");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            gotoxy(10,9);printf("contenu de ch1 : %s , ch2 : %s et ch3 : %s",ch1,ch2,ch3);
                            ////////////////////////////////////////////////////////////////////////////////////
                            if(strstr(ch3,ch1)==NULL)
                            {
                                gotoxy(10,12);printf("Remplace_premier : Resultat = %s (pas de modufication)",ch3);
                            }else
                            {
                                gotoxy(10,11);printf("Remplace_premier : Resultat = %s",Remplace_premier(ch1,ch2,ch3));
                            }
                            ////////////////////////////////////////////////////////////////////////////////////
                            if(strstr(ch3,ch1)==NULL)
                            {
                                gotoxy(10,12);printf("Remplace_tous : Resultat = %s (pas de modufication)",ch3);
                            }else
                            {
                                gotoxy(10,13);printf("Remplace_tous : Resultat = %s",Remplace_tous(ch1,ch2,ch3));
                            }
                            ////////////////////////////////////////////////////////////////////////////////////

                            gotoxy(10,15);printf("-----------------------------------------------");
                            gotoxy(10,17);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
                        }

            case 5:clrscr();cadremenu("Supprime",3);
                    int sup;
                    char cb[3];
                     do{
                        clrscr();
                        cadremenu("Supprime",0);
                        gotoxy(50,10);printf("1/ Supprime 1");
                        gotoxy(50,11);printf("2/ Supprime 2");
                        gotoxy(50,12);printf("3/ Supprime 3");
                        gotoxy(50,14);printf("4/ Retourner au menu generale");
                        gotoxy(55,33);printf("Donner Votre Choix SVP : ");
                        scanf("%d",&sup);
                    }while(sup<1||sup>4);

                    clrscr();cadremenu("Supprime",3);
                    switch(sup)
                    {
                        case 1:if((ch4[0]==NULL))
                            {
                                gotoxy(10,10);printf("il faut saisire ch4 pour tester le fonctions Supprime1");
                                gotoxy(10,12);printf("-----------------------------------------------");
                                gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                                getch();
                                menu2();
                            }else
                            {
                                saisie_c(cb);
                                ////////////////////////////////////////////////////////////////////////////////////
                                gotoxy(10,9);printf("contenu de ch4 : %s ",ch4);
                                if(strstr(ch4,cb)==NULL)
                                {
                                    gotoxy(10,11);printf("Supprime1 : Resultat = %s (pas de modufication)",ch4);
                                }else
                                {
                                    gotoxy(10,11);printf("Supprime1 : Resultat = %s",supprime(ch4,cb));
                                }
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;

                            }
                            break;
                        case 2:if((ch1[0]==NULL)||(ch5[0]==NULL))
                            {
                                gotoxy(10,10);printf("il faut saisire ch1 et ch5 pour tester le fonctions Supprime2");
                                gotoxy(10,12);printf("-----------------------------------------------");
                                gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                                getch();
                                menu2();
                            }else{
                                ////////////////////////////////////////////////////////////////////////////////////
                                gotoxy(10,9);printf("contenu de ch1 : %s et ch5 : %s",ch1,ch5);
                                if(strstr(ch5,ch1)==NULL)
                                {
                                    gotoxy(10,11);printf("Supprime2 : Resultat = %s (pas de modufication)",ch5);
                                }else
                                {
                                    gotoxy(10,11);printf("Supprime3 : Resultat = %s",supprime2(ch1,ch5));
                                }
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;

                            }break;
                        case 3:if((ch1[0]==NULL)||(ch5[0]==NULL))
                            {
                                gotoxy(10,10);printf("il faut saisire ch1 et ch5 pour tester le fonctions Supprime3");
                                gotoxy(10,12);printf("-----------------------------------------------");
                                gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                                getch();
                                menu2();
                            }else{
                                ////////////////////////////////////////////////////////////////////////////////////
                                gotoxy(10,9);printf("contenu de ch1 : %s et ch5 : %s",ch1,ch5);
                                if(strstr(ch5,ch1)==NULL)
                                {
                                    gotoxy(10,12);printf("Remplace_tous : Resultat = %s (pas de modufication)",ch5);
                                }else
                                {
                                    gotoxy(10,12);printf("Remplace_tous : Resultat = %s",supprime3(ch1,ch5));
                                }
                                ////////////////////////////////////////////////////////////////////////////////////
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;

                            }break;
                        case 4:break;
                    }break;

            case 6: clrscr();cadremenu("Convertion",3);

                    convertir_base();

                    gotoxy(10,14);printf("-----------------------------------------------");
                    gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                    getch();break;

            case 7: clrscr();cadremenu("Crypter",3);
                    if(m[0]==NULL)
                        {
                            gotoxy(10,10);printf("il faut saisire Mot pour tester la fonction Crypter");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            crypter(m);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                        }getch();break;

            case 8: clrscr();cadremenu("Verification",3);
                    if((ch1[0]==NULL)||(n1==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T et ch1 pour tester la fonction Verification");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            verification(ch1,t,n1);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                        }getch();break;

            case 9: clrscr();cadremenu("Tri",3);
                    if((n2==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T et ch1 pour tester la fonction Tri");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            tri(tab_ch,n2);
                            gotoxy(10,10);printf("Tab_ch =");for(i=0;i<n2;i++){gotoxy(15,12+i);printf("%s",tab_ch[i]);}
                            gotoxy(10,14+i);printf("-----------------------------------------------");
                            gotoxy(10,16+i);printf("Appuyer sur une touche pour retourner au menu");
                        }getch();break;

            case 10:clrscr();cadremenu("palaindrme",3);
                    if((n2==0))
                        {
                            gotoxy(10,10);printf("il faut saisire T et ch1 pour tester la fonction palaindrme");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            convertir(tab_ch, n2);
                            gotoxy(10,9);printf("Tab_ch =");for(i=0;i<n2;i++){gotoxy(15,11+i);printf("%s",tab_ch[i]);}
                            gotoxy(10,12+i);printf("les mots palaindrme de tab_ch : ");
                            affiche_pal(tab_ch,n2);
                            gotoxy(10,14+i);printf("-----------------------------------------------");
                            gotoxy(10,16+i);printf("Appuyer sur une touche pour retourner au menu");
                        }getch();break;

                case 11: clrscr();cadremenu("Rechercher et remplacer",3);
                   if((ch6[0]==NULL)||(ch2[0]==NULL)||(ch1[0]==NULL))
                        {
                            gotoxy(10,10);printf("il faut saisire ch1, ch2 et ch6 pour tester la fn Rechercher et remplacer");
                            gotoxy(10,12);printf("-----------------------------------------------");
                            gotoxy(10,14);printf("Appuyer sur une touche pour Aller au menu remplissage");
                            getch();
                            menu2();
                        }else{
                            gotoxy(10,10);printf("ch6 avant modification = ");printf("%s ",ch6);
                            gotoxy(10,12);printf("ch6 apres modification = ");gotoxy(35,12);rech_rem(ch1,ch2,ch6);
                            gotoxy(10,14);printf("-----------------------------------------------");
                            gotoxy(10,16);printf("Appuyer sur une touche pour retourner au menu");
                            getch();break;
                        }


                case 12:system("exit");break;
		}

  }while(choix!=12);

}
