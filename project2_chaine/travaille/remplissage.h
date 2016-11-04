#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <myconio.h>

int verif(char ch[])
{
	int ok=1,i=0;
	while(i<strlen(ch)&&ok==1)
	{
		if(!(ch[i]>='a')&&(ch[i]<='z'))
			ok=0;
		else
			i++;
	}
	return ok;
}

int verif_maj(char ch[])
{
	int ok=0,i=0;
	for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]<'A')||(ch[i]>'Z'))
            return 1;
    }
	return 0;
}

void saisie_ch1(char ch[])
{
	do
	{
	    gotoxy(26,8);printf("                                          ");
		gotoxy(10,8);printf("Donner un mot : ");
		fflush(stdin);
		gets(ch);
	}while((verif(ch)==0)||(strlen(ch)>=20));
}

void saisie_ch2(char ch[])
{
	do
	{
	    gotoxy(26,8);printf("                                          ");
		gotoxy(10,8);printf("Donner un phrase : ");
		fflush(stdin);
		gets(ch);
	}while(((ch[0]<'A')||(ch[0]>'Z'))&&((ch[0]<'a')||(ch[0]>'z'))||(strstr(ch," ")==NULL));
}

void saisie_c(char c[])
{
    gotoxy(26,8);printf("                                          ");
    gotoxy(10,8);printf("c : ");
    fflush(stdin);
    scanf("%s",c);
}

void saisie_ch3(char ch[])
{
	do
	{
	    gotoxy(26,14);printf("                                          ");
		gotoxy(10,14);printf("Saisire ch 3 : ");
		fflush(stdin);
		gets(ch);
	}while((verif(ch)==0)||(strlen(ch)>=20));
}

int saisie_taille(int a,int b)
{
	int n;
	do
	{
        gotoxy(14,8);printf("                                          ");
		gotoxy(10,8);printf("N = ");
		fflush(stdin);
		scanf("%d",&n);
	}while((n<a)||(n>b));
	return n;
}

void saisir_tab_ch(char t[][20],int n)
{
	int i;
	char ch[20];
	for(i=0;i<n;i++)
	{
	    do
        {
            gotoxy(10,8+i);printf("Tab_ch[%d] : ",i);
            fflush(stdin);
            gets(t[i]);
        }while((verif(ch)==0)||(strlen(ch)>=20));
	}
}


void saisie4(char t[20],int n)
{
	int i;
	gotoxy(10,8);
	for(i=0;i<n;i++)
	{
		do
        {
            gotoxy(17,9+i);printf("                                          ");
            gotoxy(10,9+i);
            printf("T[%d] = ",i);
            fflush(stdin);
            scanf("%c",&t[i]);
        }while(!((t[i]>='a')&&(t[i]<='z')));
	}
}
void saisie5(char ch[])
{
	do
	{
		gotoxy(26,8);printf("                                          ");
		gotoxy(10,8);printf("Donner un mot Majuscule : ");
		fflush(stdin);
		gets(ch);
	}while((verif_maj(ch)==1)||(strlen(ch)>=20));
}

void affiche(char tab_ch[][20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		puts(tab_ch[i]);
	}
}
