#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void saisie_taille(int *n)
{
    do
    {
            gotoxy(14,8);printf("                                          ");
            gotoxy(10,8);printf("N = ");
            scanf("%d",n);
    }while(!(*n>1)&&(*n<=50));
}


void chargement1(int *t,int n)
{
    int *pi;
    for(pi=t;pi<t+n;pi++)
    {
        do
        {
            gotoxy(17,9+pi-t);printf("          ");
            gotoxy(10,9+pi-t);printf("T[%d] = ",pi-t);
            scanf("%d",pi);
        }while(*pi<0);
    }
}

void chargement2 (int *t,int n )
{
	int *pi ;
	for(pi=t;pi<t+n;pi++)
	{
   		gotoxy(17,9+pi-t);printf("          ");
        gotoxy(10,9+pi-t);printf("T[%d] = ",pi-t);
		scanf("%d",pi);
   }
}

int verif(int *t ,int i , int v )
{
	int *pj,ok=0 ;
   for(pj=t;pj<t+i ;pj++)
   {
   	if(*pj==v)
      {
      	ok=1;
         break;
      }
   }
   return ok ;
}

void chargement3 (int *t,int n )
{
	int *pi=t ;
   do
	{
   	gotoxy(17,9);printf("T[0] :  ");
   	scanf("%d",pi);
   }while(*pi<=0);
	for(pi=t+1;pi<t+n;pi++)
	do
	{
		gotoxy(17,9+pi-t);printf("          ");
        gotoxy(10,9+pi-t);printf("T[%d] = ",pi-t);
		scanf("%d",pi);
	}while(verif(t,pi-t,*pi)==1 || *pi<=0);
}

void chargement4 (int *t,int n )
{
	int *pi ;
    srand(time(NULL));
    for(pi=t;pi<t+n;pi++)
    {
           *pi=(rand()%90) + 10;
    }
}

void chargement5 (int *t,int n )
{
	int *pi ;
    srand(time(NULL));
    for(pi=t;pi<t+n;pi++)
    {
           *pi=(rand()%900) + 100;
    }
}

void afficher (int *t, int n)
{
	int *pi;
	for(pi=t;pi<t+n;pi++)
		printf("%d ",*pi);
}
