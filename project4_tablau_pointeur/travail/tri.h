int indice_min1(int *t3,int d,int n3)
{
	int posmin=d;
   int *pj;
	for(pj=t3+d+1; pj<t3+n3;pj++)
		if(*pj<*(t3+posmin) )
			posmin=pj-t3;
	return posmin;
}

void tri_selection(int *t3,int n3)
{
	int posmin,aux;
   int *pi;
	for(pi=t3; pi<t3+n3-1;pi++)
	{
		posmin= indice_min1(t3,pi-t3,n3);
		aux=*pi;
      *pi=*(t3+posmin);
      *(t3+posmin)=aux;
   }

}

void tri_bulle(int *t3,int n3 )
{
	int *pi,*pj,ok,aux;
   do
   {
   	ok=0;
      for(pi=t3; pi<t3+n3-1;pi++)
      	if(*pi>*(pi+1))
         {
         	aux=*pi;
				*pi=*(pi+1);
				*(pi+1)=aux;
            ok=1;
			}
      n3--;
	}while(n3 && ok);
}


void tri_insertion(int *t3,int n3)
{
	int *pi,*pj,aux;
   for(pi=t3+1; pi<t3+n3;pi++)
   {
   	aux=*pi;
      pj=pi;
      while(aux<*(pj-1) && pj>t3)
      {
      	*pj=*(pj-1);
         pj--;
      }
      *pj=aux;
	}
}


int *maximum(int *t5,int n5)
{
	int max,*pi,*ppos;
   for(pi=t5,max=*pi,ppos =t5;pi<t5+n5;pi++)
   	if(*pi>max)
      {
      	ppos=pi;
      	max=*pi;
      }
      return ppos;
}


void tri_remplacer(int *t5,int *B,int n5)
{
	int *pi,*pb,*ppos ;
   for(pi=t5,pb=B;pi<t5+n5;pi++,pb++)
   {
   	ppos=maximum(t5,n5);
      *pb = *ppos;
      *ppos=-1;
   }
}

int nbr_grand(int *t5,int n5,int pos)
{
   int *pi,cp=0 ;
	for(pi=t5;pi<t5+n5;pi++)
		if(*pi<*(t5+pos) )
			cp++;
	return cp ;
}

void tri_position(int *t5, int n5,int *R)
{
	int *pi,*pr,x ;
	for(pr=R,pi=t5;pi<t5+n5;pi++)
	{
		x=nbr_grand(t5,n5,(int)(pi-t5));
		*(pr+x)=*pi;
	}
}