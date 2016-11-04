#include <stdlib.h>


int test(int t[] ,int n,int x)
{
	int ok=0,i;
	for(i=0;i<n;i++)
		if(t[i]==x)
		{
			ok=1;
			break;
		}
	return ok;
}

int presents(int t1[],int t3[], int t13[],int n1,int n3)
{
	int i,n13=0 ;
	for(i=0;i<n1;i++)
		if (test(t3,n3,t1[i])==1&& test(t13,n3,t1[i])==0)
		{
			t13[n13]=t1[i];
			n13++;
		}
      return n13;
}

int absent(int t1[],int t3[], int t14[],int n1,int n3)
{
	int i ,n14=0;
	for(i=0;i<n1;i++)
		if (test(t3,n3,t1[i])==0 && test(t14,n3,t1[i])==0)
		{
			t14[n14]=t1[i];
			n14++;
		}
   return n14;
}

void rotation(int t9[], int n9)
{
	int aux,i ;
	aux=t9[n9-1];
	for(i=n9-1;i>0;i--)
		t9[i]=t9[i-1];
	t9[0]=aux;
}

void inverse(int t9[], int n9)
{
	int aux,i ;
	for(i=0;i<n9/2;i++)
	{
		aux=t9[i];
		t9[i]=t9[n9-i-1];
		t9[n9-i-1]=aux;
	}
}


