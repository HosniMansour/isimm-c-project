#include <ctype.h>
#include "type.h"
#include <string.h>

/************ Verification ***********/

int verif1(long int num)
{
    return ((num>=10000000)&&(num<99999999));
}

int verif2(char ch[])
{
	int ok=1,i=0;
	while(i<strlen(ch)&&ok==1)
	{

        if(!((toupper(ch[i])>='A')&&(toupper(ch[i])<='Z')) && (ch[i]!=' ') )
			{ok=0;break;}
		else
			i++;
	}
	if (ok==1)
        if(strstr(ch,"  ")!=NULL)
            ok= 0;
    return ok;
}

int verif4(char ch[])
{
    if((strstr(ch,"@")==0)||(strstr(ch," ")==0))
        return 1;
    return 0;
}

int test(int an)
{
	if(an % 400==0 || (an%4==0 && an%100))
		return 1 ;
	else
		return 0;
}

int jour_max(date dt)
{
	switch(dt.m)
	{
		case 1 :
		case 3 :
		case 5:
		case 7 :
		case 8 :
		case 10 :
		case 12 :
				return 31 ;
		case 4 :
		case 6:
		case 9 :
		case 11 :
				return 30 ;
		case 2:
			if(test(dt.a))
				return 29;
			else
				return 28;
	}
}


int verif(date dt)
{
	if(dt.a<1900)
		return 0 ;
	if(dt.m<1 || dt.m>12)
		return 0 ;
	if(dt.j <1 || dt.j > jour_max(dt))
		return 0;
	return 1;
}
liste recherche_tel(liste l,long int num)
{
		liste pok=NULL;
		while(l)
                if(l->info.tel==num)
                {
                  pok=l;
                  break;
                }
                else
                    l=l->suiv;
        return pok;

}

/************ Liste simplement ***********/

liste ajout_tete(liste l,struct personne per)
{
		liste p;
		p=(cellule*) malloc(sizeof(cellule));
		p->suiv=l;
		p->info=per;
		l=p;
		return l ;
}

liste ajout_queue(liste l,struct personne per)
	{
		liste p,p1;
		if(l==NULL)
			l=ajout_tete(l,per);
		else
		{

			p1=l;
			while(p1->suiv!=NULL)
			{
				p1=p1->suiv;
			}

		p=(cellule*)malloc(sizeof(cellule));
		p->info=per;
		p->suiv=NULL;
		p1->suiv=p;
	  }
		return l ;
	}

void insert_pos(liste l,int pos,struct personne per)
{
	liste p,p1=l;
	int i=1;
	while (i<pos -1 )
	{
		p1=p1->suiv;
		i++;
	}
	p=(cellule*)malloc(sizeof(cellule));
	p->info=per;
	p->suiv=p1->suiv;
	p1->suiv=p;
}


void affichedate(date dt)
{
	printf("      %d/%d/%d ",dt.j,dt.m,dt.a);
}

struct date saisie_date()
{
    date dt;
	do{
		fflush(stdin);printf("       Jour: ");scanf("%d",&(dt.j));
		fflush(stdin) ;printf("       Mois: ");scanf("%d",&(dt.m));
		fflush(stdin);printf("       Annee: ");scanf("%d",&(dt.a));

		affichedate(dt);
		if(verif(dt)==0)
			printf("n'est pas valide\n");
	}while(verif(dt)==0);
	return dt;
}


struct personne saisie(liste l)
{
	personne p;
        do
        {
           do{
                fflush(stdin);printf("    Numero de telephone de 8 chiffres : ");scanf("%ld",&(p.tel));
            }while(verif1(p.tel)==0);
        }while((recherche_tel(l,p.tel)!=NULL));

        do{
            fflush(stdin);printf("    Nom : ");gets(p.nom);
        }while(!verif2(p.nom));
		do{
            fflush(stdin);printf("    Prenom : ");
            gets(p.prenom);
		}while(strcmp(p.prenom,"")==0);

		do{
            fflush(stdin);printf("    Adresse : ");gets(p.adresse);
		}while(strcmp(p.adresse,"")==0);

		printf("    Date de naissance : \n");p.date_naiss=saisie_date();printf("\n");
		fflush(stdin);printf("    mail: ");gets(p.adr_mail);

		do{
			fflush(stdin);printf("    Code de departement : ");scanf("%d",&(p.code));
		}while(p.code <=0);

	return p ;
}

int taille(liste l)
{
	int k=0;
	while(l!=NULL)
	{
		k++;
		l=l->suiv;
	}
	return k ;
}

liste creation(liste l)
{
	int pos,x,t,rep;
	personne pe;
	do
	{
	  t=taille(l);
	  do{
        gotoxy(30,8);printf("                      ");
        gotoxy(15,2);printf("===================================================");
        gotoxy(30,4);  printf("~~~~ Creation d'une liste ~~~~");
        gotoxy(15,6);printf("===================================================\n\n");
		fflush(stdin);
		printf("Donnez une position entre 1 et %d : ",t+1);
		scanf("%d",&pos);
		}while(pos>t+1||pos<1);
		pe=saisie(l);
		printf("\n====================================\n");
		if (pos==1)
				l=ajout_tete(l,pe);
		else
			if (pos==t+1)
				l=ajout_queue(l,pe);
				else
					 insert_pos(l,pos,pe);
		do
		{
			fflush(stdin);printf("Voulez vous continuez la saisie? 1:oui 0:non : ");
			scanf("%d",&rep);
            clrscr();
		}while ((rep!=1)&&(rep!=0));
	}while(rep!=0);

	return l;
}

void affiche_info(liste p)
{
	printf("    Telephone : %ld",(p->info).tel);printf(" | Mail : %s \n",(p->info).adr_mail);
	printf("    Nom & Prenom : %s ",(p->info).nom);printf("%s",(p->info).prenom);
	printf("    | adresse: %s \n",(p->info).adresse);
	printf("    Date de naissance : ");affichedate((p->info).date_naiss);printf("\n");
	printf("    code de departement : %d \n ",(p->info).code);

}

void affiche_tous(liste l)
{
    gotoxy(15,2);printf("===================================================");
    gotoxy(30,4);  printf("~~~~ Affichage ~~~~");
    gotoxy(15,6);printf("===================================================\n\n");

    liste p=l;
    if(p==NULL)
        {gotoxy(30,15);printf("Liste Vide !");}
    else
    {
        while(p!= NULL)
        {
            affiche_info(p);
            printf("\n");
            p=p->suiv;
        printf("                   -----------                \n\n");
        }
    }

}

/************ liste doublement ***********/

ldce ajout_teted(ldce l,struct personne pe)
{
    elementd p;
    p=(celluled*) malloc(sizeof(celluled));
    p->info=e;
    p->suivant=l.tete;
    p->avant=NULL;
    if(l.tete==NULL)
        l.queu=p;
    else
        (l.tete)->avant=p;

    l.tete=p;
    return(l);
}

ldce ajout_queued(ldce l,struct etudiant e)
{
    element p;
    if (l.tete==NULL)
        ajout_tete(l,e);
    else
    {
        p=(cellule*) malloc(sizeof(cellule));
        p->info=e;
        p->suivant=NULL;
        p->avant=l.queu;
        (l.queu)->suivant=p;
        l.queu=p;
    }
    return(l);
}

ldce ajout_posd(ldce l,int pos,etudiant e)
{
    element p1=l.tete,p2;
    int i;
    for(i=1;i<pos-1;i++)
        p1=p1->suivant;

    p2=(cellule*) malloc(sizeof(cellule));
    p2->info=e;
    p2->avant=p1;
    p2->suivant=p1->suivant;
    p1->suivant=p2;
}
