void tri_selection(int t[],int n)
{
    int i,j,iMin,aux;

    for (j = 0; j < n-1; j++)
    {
        iMin = j;
        for ( i = j+1; i < n; i++)
            if (t[i] < t[iMin])
                iMin = i;

        if ( iMin != j )
        {
            aux=t[j];
            t[j]=t[iMin];
            t[iMin]=aux;
        }
    }
}

void tri_bulle(int t[],int n)
{
    int ok,j,aux;
    do
    {
        ok=1;
        for(j=0;j<n-1;j++)
        {
            if (t[j]>t[j+1])
            {
                aux=t[j];
                t[j]=t[j+1];
                t[j+1]=aux;
                ok=0;
            }
        }
    }while(ok==0);
}

void tri_insertion(int t[],int n)
{
	int i,j,aux;
	for(i=1;i<n;i++)
	{
		j=i-1;
		while((j>=0) && (t[j]>t[j+1]))
		{
			aux=t[j];
			t[j]=t[j+1];
			t[j+1]=aux;
			j--;
		}
	}
}


int maximum(int t5[],int n5)
{
	int max=t5[0],i,pos=0;
   for(i=0;i<n5;i++)
   	if(t5[i]>max)
      {
      	pos=i;
      	max=t5[i];
      }
         return pos;
}

void tri_remplacer(int t5[],int B[],int n5)
{
	int i,pos ;
   for(i=0;i<n5;i++)
   {
   	pos=maximum(t5,n5);
      B[i]=t5[pos];
      t5[pos]=-1;
   }
}

int nbr_grand(int t5[],int n5,int pos)
{
	int i,cp=0 ;
	for(i=0;i<n5;i++)
		if(t5[i]<t5[pos])
			cp++;
	return cp ;
}

void tri_position(int t5[], int n5,int R[])
{
	int i,x ;
	for(i=0;i<n5;i++)
	{
		x=nbr_grand(t5,n5,i);
		R[x]=t5[i];
	}
}
