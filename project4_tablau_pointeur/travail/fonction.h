void transfere(int *t1,int *A, int n1)
{
	int *pk,*pi,*pj;
	for(pi=t1,pj=A,pk=A+n1-1;pi<t1+n1;pi++)
			if ((pi-t1)%2==0)
			{
				*pj=*pi;
				pj++;
			}
			else
			{
				*pk=*pi;
				pk--;
			}
}

int symetrique(int *t1, int n1)
{
	int sym,*pi,*pj;
	for(pi=t1,pj=t1+n1-1,sym=1;pi<pj;pi++,pj--)
			if (*pi!=*pj)
			{
				sym=0;
				break;
			}
	return sym;
}

void insertion(int *t2, int n2)
{
	int pos,*pi,val;
	do
	{
		gotoxy(10,12);printf ("donner la position	:	");
		scanf("%d",&pos);
	}while(!(pos>=0&&pos<=n2));
	gotoxy(10,13);printf("donner la valleur a inserer  :  ");
	scanf("%d",&val);

   if(pos<n2)
			for(pi=t2+n2;pi>t2+pos;pi--)
				*pi=*(pi-1);
   *(t2+pos)=val;
}
