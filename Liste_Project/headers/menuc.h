#include <myconio.h>

void cadree()
{

    FILE *file = fopen("design\\cadre.txt", "r" );
    char c;
    do
    {
        c=fgetc(file);
        printf("%c",c);
    }while (c != EOF);
}

void Version()
{
	cadree();
    gotoxy(30,4);  printf("~~~~ Version ~~~~");
	gotoxy(15,12);  printf("1 - Liste simplement chainees");
	gotoxy(15,14);  printf("2 - Liste Doublement chainees");
    gotoxy(15,17);  printf("3 - Quitter");


}

void maj()
{
    cadree();
	gotoxy(30,4);  printf("~~~~ Menu MAJ ~~~~");
	gotoxy(15,10);  printf("1 - Ajouter un nouvel telephone");
	gotoxy(15,12);  printf("2 - Supprimer un  telephones");
	gotoxy(15,14);  printf("3 - Modifier Les donnees d'un telephone");
    gotoxy(15,18); printf("4 - Retour Menu generale");

}

void Ajouter()
{
    cadree();
	gotoxy(30,4);printf("~~~~ Menu Ajouter ~~~~");
	gotoxy(15,10);printf("1 - Ajout en tete");
	gotoxy(15,12);printf("2 - Ajout en queue");
	gotoxy(15,14);printf("3 - Ajout dans une position");
    gotoxy(15,18); printf("4 - Retour Menu Maj");

}

void suppression()
{
    cadree();
	gotoxy(30,4); printf("~~~~ Menu Suppression ~~~~");
	gotoxy(15,10);  printf("1 - Suppression en tete");
	gotoxy(15,12);  printf("2 - Suppression en queue");
	gotoxy(15,14);  printf("3 - Suppression a partir d'une une position");
    gotoxy(15,16);  printf("4 - Suppression d'un telephone donne");
    gotoxy(15,18);  printf("5 - Suppression des telephones d'un departement");
    gotoxy(15,22); printf("6 - Retour Menu Maj");

}


void Modification()
{
    cadree();
	gotoxy(25,4);  printf("~~~~ Menu Modification ~~~~");
	gotoxy(10,10);  printf("1 - Adresse");
	gotoxy(10,12);  printf("2 - telephone");
    gotoxy(10,16);  printf("3 - Retour Menu Maj");

}

void rech_aff()
{
    cadree();
	gotoxy(25,4);   printf("~~~~ Menu Recheche et Affichage ~~~~");
	gotoxy(15,10);  printf("1 - Contenu de la liste des telephones");
	gotoxy(15,12);  printf("2 - Recherche Par numero telephone");
	gotoxy(15,14);  printf("3 - Recherche Par nom");
    gotoxy(15,16);  printf("4 - Recherche Par indicatif telephone");
    gotoxy(15,18);  printf("5 - Recherche Par code departement");
    gotoxy(15,20);  printf("6 - Tri 1");
    gotoxy(15,22);  printf("7 - Tri 2");
    gotoxy(15,24);  printf("8 - Retour Menu generale");


}

void enr_charg()
{
    cadree();
	gotoxy(30,4);   printf("~~~~ Menu Enregistrement et Chargement ~~~~");
	gotoxy(15,10);  printf("1 - Enregistrement");
	gotoxy(15,12);  printf("2 - Chargement");
    gotoxy(15,16);  printf("3 - Retour Menu generale");

}


void menu()
{
    cadree();
    gotoxy(30,4);  printf("~~~~ MENU GENERAL ~~~~");
	gotoxy(15,10);  printf("1 - Creation du repertoire telephonique");
	gotoxy(15,12);  printf("2 - Mise a Jour des telephones");
	gotoxy(15,14);  printf("3 - Recherche, affichage et Tri");
	gotoxy(15,16);  printf("4 - Enregistrement et chargement dans un fichier");
    gotoxy(15,20); printf("5 - Quitter");

}
