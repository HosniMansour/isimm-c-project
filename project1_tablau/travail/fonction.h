void transfere(int t[],int a[],int n)
{
	int i,p=0,imp=n-1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
		{
				a[p]=t[i];
				p++;
		}else
		{
			a[imp]=t[i];
			imp--;
		}
    }
}

int symetrique(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(t[i]!=t[n-i-1])
		{
				return 0;
		}
    }
	return 1;
}

int affiche(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",t[i]);
    }
	return 1;
}

void insertion(int t2[], int n2)
{
	int pos,i,val;
	do
	{
		gotoxy(10,12);printf ("donner la position : ");
		scanf("%d",&pos);
	}while(!(pos>=0&&pos<=n2));
	gotoxy(10,13);printf("donner la valleur a inserer  : ");
	scanf("%d",&val);
	if(n2<50)
	{
		if(pos<n2)
			for(i=n2;i>pos;i--)
				t2[i]=t2[i-1];
		t2[pos]=val;
	}
	else
		{gotoxy(10,14);printf("insertion impossible            ");}
}
