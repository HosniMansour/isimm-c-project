#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int saisie_taille()
{
    int n;
    do
    {
            gotoxy(14,8);printf("                                          ");
            gotoxy(10,8);printf("N = ");
            scanf("%d",&n);
    }while(!(n>1)&&(n<=50));
    return n;
}

void chargement1(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        do
        {
            gotoxy(17,9+i);printf("          ");
            gotoxy(10,9+i);printf("T[%d] = ",i);
            scanf("%d",&t[i]);
        }while(t[i]<0);
    }
}

void chargement2(int t[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        gotoxy(17,9+i);printf("          ");
        gotoxy(10,9+i);printf("T[%d] = ",i);
       scanf("%d",&t[i]);
    }
}

int  verift(int t[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
       if(t[i]==x)
            return 1;
    }
    return 0;
}

void chargement3(int t[50],int n)
{
    for(int i=0;i<n;i++)
    {
        do
        {
             gotoxy(17,9+i);printf("          ");
            gotoxy(10,9+i);printf("T[%d] = ",i);
            scanf("%d",&t[i]);
        }while((t[i]<0)||(verift(t,i,t[i])==1));
    }
}

void chargement4(int t[50],int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
           t[i]=(rand()%90) + 10;
    }
}

void chargement5(int t[50],int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
           t[i]=(rand()%900) + 100;
    }
}

void afficher(int t[50],int n)
{
    for(int i=0;i<n;i++)
    {
           printf("%d ",t[i]);
    }
}
