#include "../works/supprime.h"
#include "../works/modification.h"

liste miseajour(liste l);
liste supprime(liste l);

liste ajoutm(liste l)
{
    int choix,pos,t=taille(l);
    personne pe;

    do
    {
        do
        {
            clrscr();
            Ajouter();
            gotoxy(37,26);printf("Donner Votre Choix SVP : ");
            scanf("%d",&choix);
        }while(choix<1||choix>4);
        clrscr();
        switch(choix)
        {
            case 1:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Ajout en tete ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    pe=saisie(l);
                    l=ajout_tete(l,pe);
            break;
            case 2:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Ajout en Queue ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    pe=saisie(l);
                    l=ajout_queue(l,pe);
            break;
            case 3:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Ajout en Position ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                do
                {
                    fflush(stdin);printf("Donnez une position entre 1 et %d : ",t+1);
                    scanf("%d",&pos);
                }while(pos>t+1||pos<1);

                pe=saisie(l);
                if (pos==1)
                    l=ajout_tete(l,pe);
                else if (pos==t+1)
                    l=ajout_queue(l,pe);
                else
                    insert_pos(l,pos,pe);
            break;
            case 4:break;
        }
    }while(choix!=4);
    return l;
}

liste supprime(liste l)
{
    int choix,pos,t=taille(l);
    do
    {
        do
        {
            clrscr();
            suppression();
            gotoxy(37,26);printf("Donner Votre Choix SVP : ");
            scanf("%d",&choix);
        }while(choix<1||choix>6);
        clrscr();
        t=taille(l);
        switch(choix)
        {
            case 1:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Supprime en tete ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        l=supp_tete(l);
                        gotoxy(30,15);printf("c bon ! taper une touche pour retourner");getch();
                    }
                    break;
            case 2:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Supprime en Queue ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        l=supp_pos(l,t);
                        gotoxy(30,15);printf("c bon ! taper une touche pour retourner");getch();
                    }
                   break;
            case 3:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Supprime en Position ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        t=taille(l);
                        do
                        {
                            fflush(stdin);printf("Donnez une position entre 1 et %d : ",t);
                            scanf("%d",&pos);
                        }while(pos>t+1||pos<1);
                        l=supp_pos(l,pos);
                        gotoxy(30,15);printf("c bon ! taper une touche pour retourner");getch();
                    }
            break;

            case 4: gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Supprimer un Telephone ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        l=supp_tel(l);
                        gotoxy(30,15);printf("c bon ! taper une touche pour retourner");getch();
                    }
                    break;
            case 5: gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Supprimer un Departement ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        l=supp_dep(l);
                        gotoxy(30,15);printf("c bon ! taper une touche pour retourner");getch();
                    }
                    break;
            case 6: break;
        }
    }while(choix!=6);
    return l;

}

liste modifier(liste l)
{
    int choix;
    do
    {
        do
        {
            clrscr();
            Modification();
            gotoxy(37,26);printf("Donner Votre Choix SVP : ");
            scanf("%d",&choix);
        }while(choix<1||choix>3);
        clrscr();
        switch(choix)
        {
            case 1:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Modification Adresse ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        l=madr(l);
                        gotoxy(30,15);printf("Taper une touche pour retourner");getch();
                    }
                    break;
            case 2:
                    gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Modification telephone ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    if(l==NULL)
                        {gotoxy(30,15);printf("Liste Vide !");getch();}
                    else
                    {
                        l=mtel(l);
                        gotoxy(30,15);printf("Taper une touche pour retourner");getch();
                    }
                   break;
            case 3:break;
        }
    }while(choix!=3);
    return l;

}

liste miseajour(liste l)
{
    int x;
    maj();
    do
    {
        do
        {
            clrscr();
            maj();
            gotoxy(36,28);printf("Donner Votre Choix SVP : ");
            scanf("%d",&x);
        }while(x<1||x>4);
        clrscr();
        switch(x)
        {
            case 1: l=ajoutm(l);break;
            case 2: l=supprime(l);break;
            case 3: l=modifier(l);break;
            case 4: break;
        }
    }while(x!=4);

    return l;
}
