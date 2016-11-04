#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char ch[])
{
	int i,l=strlen(ch);
	int p =1;
	for(i=0;i<l/2;i++)
		if(ch[i]!=ch[l-i-1])
		{
			p=0;
			break;
		}
	return p;
}

 void convertir( char tab1_ch[][20],int n)
 {
		int i,j;
		for (i=0 ; i<n;i++)
			for(j=0;j<strlen(tab1_ch[i]);j++)
				tab1_ch[i][j]=toupper(	tab1_ch[i][j]);
 }

 void affiche_pal( char tab1_ch[][20],int n)
 {
	int i ;
		for (i=0 ; i<n;i++)
			if (palindrome( tab1_ch[i]))
				{printf("%s ",(tab1_ch[i]));}
 }





