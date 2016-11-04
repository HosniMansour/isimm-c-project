#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SOMME1(int n)
    {
        if(n==0)
                return 0;
        else
            return n+SOMME1(n-1);
}
float SOMME2(float n)
    {
           if(n==0)
                return 0;
            else
                return 1/n+SOMME2(n-1);
}
int fact(int n)
    {
        if(n==0)
            return 1;
        else
            return n*fact(n-1);
}
float SOMME3(int n)
    {
           if(n==0)
                return 0;
            else
                return 1/(double)(fact(n)) + SOMME3(n-1);
}

int PGCD_EUC(int a,int b)
    {
    if (b==0)
        return a;
    else
        return PGCD_EUC(b,a%b);
        }
int PGCD_DIFF(int a, int b)
{
        if(a==b)
            return a;
        else if(a>b)
            return PGCD_DIFF(a-b,b);
        else
            return PGCD_DIFF(a,b-a);

        }
float racine_carre(int n,int a)
{
      float f;
        if(n==0)
            return 1;
        else
            return (1/2*((a/racine_carre(n-1,a))+(racine_carre(n-1,a))));

}
float CARRE(int x,int i)
{
   if(i>x*2)
        return 0;
    else
        return i+CARRE(x,i+2);

}
int FIBONACCI (int n)
   {
    if(n==1 || n==0)
        return 1;
    else
        return FIBONACCI(n-1)+FIBONACCI(n-2) ;

    }
float polynome(float x,int n)
{
    if (n==0)
        return 1;
    else
        return x*polynome(x,n-1);
}

