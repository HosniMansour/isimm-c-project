#include<stdio.h>

int tpascal(int,int);
void space(int,int);

void trianglepascal()
{
    int num,i,j;
    gotoxy(10,10);printf("N = ");scanf("%d",&num);
    gotoxy(10,12);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
            printf("%5d",tpascal(i,j));
        gotoxy(10,12+i);
    }
}

int tpascal(int row,int column)
{
    if(column==0)
        return 0;
    else if(row==1&&column==1)
        return 1;
    else if(column>row)
        return 0;
    else
        return (tpascal(row-1,column-1)+tpascal(row-1,column));
}

void hanoi(int n,int A,int B,int C)
{
    if(n==1)
    {printf("   |        deplacer %d vers %d\n",A,C);}
    else
    {
      hanoi(n-1,A,C,B);
      printf("   |        deplacer %d vers %d\n",A,C);
      hanoi(n-1,B,A,C);
    }
}

void Mhonoi()
{
  int a=1,b=2,c=3;
  int n;

    do{gotoxy(10,10);printf("                ");gotoxy(10,10);printf("N (1..4) = ");scanf("%d",&n);}while(n>4);
    hanoi(n,a,b,c);
}

