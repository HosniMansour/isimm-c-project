#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void alterner(char ch1[],char ch2[],char ch7[])
{
    int i,t,n = strlen(ch1)>strlen(ch2)?strlen(ch1):strlen(ch2);
    char aux [2];

    for(i=0,t=0;i<n;i++,t+=2)
    {
        ch7[t]=ch1[i];
        ch7[t+1]=ch2[i];
    }
}

int nombre_voyelle(char ch[])
{
    char voyelle[13]= "aeiouyAEIOUY";
    int i,c=0;
    while (*ch != '\0')
    {
     i = 0;
     while (voyelle[i] != '\0')
      if (voyelle[i++] == *ch)
       c++;
     ch++;
    }
    return c;
}
char *Remplace_premier(char ch1[],char ch2[],char aux[30])
{
    int i,j,p,k;
    char ch3[30];
    char fin[30]="";
    char len[30];

    strcpy(ch3,aux);

        p=(int) (strstr(ch3,ch1)-ch3);
        for(i=0;i<p;i++) fin[i]=ch3[i];
        for(j=0;j<strlen(ch2);j++){fin[i]=ch2[j];i++;};
        for(j=p+strlen(ch1);j<strlen(ch3);j++){fin[i]=ch3[j];i++;}
        strcpy(ch3,fin);strcpy(fin,"");

    strcpy(len,ch3);
    return (len);
}

void convertir_base(){
    int d;
    char b;

    do
	{
		gotoxy(14,8);printf("                                          ");
		gotoxy(10,8);printf("D = ");
		fflush(stdin);
		scanf("%d",&d);
	}while((d<0)||(d>100));

    int ok=0;
    do {
        gotoxy(26,9);printf("                                          ");
		gotoxy(10,9);printf("Base (B/O/H) = ");
        fflush(stdin);
        scanf("%c",&b);
        if ((toupper(b)!='B')||(toupper(b)!='O')||(toupper(b)!='H'))
            ok=1;
    }while(ok==0);

    gotoxy(10,12);
    char bin[30],oct[30],hex[30];
    switch(toupper(b)){
           case 'B':itoa (d,bin,2);printf("%d in Binaire = %s",d,bin);break;
           case 'O':itoa (d,oct,8);printf("%d in octal = %s",d,oct);break;
           case 'H':itoa (d,hex,16);printf("%d in hexa = %s",d,hex);

           }
}

int occurence(char c,char mot[]){
    int i,p=0;

    for(i=0;i<strlen(mot);i++)
        if(c==mot[i])
            p++;
    return p;

}

void crypter(char mot[]){

    int p=0;
    char motc[30],c;
    for(int i=0;i<strlen(mot);i++)
    {
        p=occurence(mot[i],mot);
        if((p%2)!=0)
        {
            p=2*p;
        }else
        {
            p=p/2;
        }
        if((mot[i]+p)<65+26)
        {
            motc[i]=mot[i]+p;
        }else
            {
                motc[i]=(mot[i]-26)+p;
            }
    }
    gotoxy(10,12);printf("le mot crypte de %s est %s",mot,motc);
}

char *Remplace_tous(char ch1[],char ch2[],char aux[30])
{
    int i,j,p,k;
    char ch3[30];
    char fin[30]="";
    char len[30];

    strcpy(ch3,aux);
        do{
        p=(int) (strstr(ch3,ch1)-ch3);
        for(i=0;i<p;i++) fin[i]=ch3[i];
        for(j=0;j<strlen(ch2);j++){fin[i]=ch2[j];i++;};
        for(j=p+strlen(ch1);j<=strlen(ch3);j++){fin[i]=ch3[j];i++;}
        strcpy(ch3,fin);strcpy(fin,"");
    }while(strstr(ch3,ch1)!=NULL);
    strcpy(len,ch3);
    return (len);
}

void verification(char ch1[],char t[10],int n1)
{
    int i,j,ok=0;

    gotoxy(10,8);printf("T = ");for(i=0;i<n1;i++){printf("%c ",t[i]);}

    for(i=0;i<strlen(ch1);i++)
    {
        if (occurence(ch1[i],t)==0)
        {
            gotoxy(10,11);printf("on ne peut pas former la chaine a partire de T");ok=1;
            break;
        }
    }

    if(ok==0)
    {
        gotoxy(10,10);printf("les indice respectivz de de T qui compose '%s' : ",ch1);

        for(i=0;i<strlen(ch1);i++)
        {
            for(j=0;j<n1;j++)
            {
                if(ch1[i]==t[j])
                    {
                        printf(" %d ",j);break;
                    }
            }
        }
    }
}

void rech_rem(char ch1[],char ch2[],char ch6[])
{
    int i;
    int n=0;
    char *pch;

    pch = strtok (ch6," ");
    while (pch != NULL)
    {
        if(strcmp(pch,ch1)!=0)
            printf ("%s ",pch);
        else
            printf ("%s ",ch2);
        pch = strtok (NULL, " ");
        n++;
    }
}
