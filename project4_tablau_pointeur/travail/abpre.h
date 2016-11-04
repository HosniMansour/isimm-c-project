#include <stdlib.h>


int test(int *t ,int n,int x)
{
	int ok=0,*pi;
	for(pi=t;pi<t+n;pi++)
		if(*pi==x)
		{
			ok=1;
			break;
		}
	return ok;
}

int presents(int *t1,int *t3, int *t13,int n1,int n3)
{
	int *pi,n13=0,*p13 ;
	for(p13=t13,pi=t1;pi<t1+n1;pi++)
		if (test(t3,n3,*pi)==1 && test(t13,n3,*pi)==0)
		{
			*p13=*pi;
         p13++;
			n13++;
		}
      return n13;
}

int absent(int *t1,int *t3, int *t14,int n1,int n3)
{
	int *pi ,n14=0,*p14;
	for(pi=t1,p14=t14;pi<t1+n1;pi++)
		if (test(t3,n3,*pi)==0 && test(t14,n3,*pi)==0)
		{
			*p14=*pi;
         p14++;
			n14++;
		}
   return n14;
}

void rotation(int *t9, int n9)
{
	int aux,*pi ;
	aux=*(t9+n9-1);
	for(pi=t9+n9-1;pi>t9;pi--)
		*pi=*(pi-1);
	*(t9+0)=aux;
}

void inverse(int *t9, int n9)
{
	int aux,*pi,*pj ;
	for(pi=t9,pj=t9+n9-1;pi<pj;pi++,pj--)
	{
		aux=*pi;
		*pi=*pj;
		*pj=aux;
	}
}