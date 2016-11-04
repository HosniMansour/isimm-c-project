int recherche_distincts(int *t1,int n1)
{
	int *pi,*pj,nd=0,nr;
	for(pi=t1;pi<t1+n1;pi++)
	{
		for(pj=pi,nr=0;pj<t1+n1;pj++)
			if(*pi==*pj)
				nr++;
		if (nr==1)
			nd++;
	}
	return nd;
}

void recherche_elements_sup(int *t1, int n1)
{
	int a,min,*pi,ok;
	    gotoxy(10,12);printf("A = ");scanf("%d",&a);
		for(pi=t1,ok=0;pi<t1+n1;pi++)
			if (*pi>a)
			{
				ok=1;
				break;
			}
		if(ok)
		{
			gotoxy(10,14);printf("les element superieurs a A : ");
			min=*pi;
			for(;pi<t1+n1 ; pi++)
				if (*pi>a)
				{
					printf("%d ",*pi);
						if(*pi<min)
						min=*pi;
				}
			gotoxy(10,16);printf("l'element plus petit des element superieurs a A : %d",min);
		}
		else
			{gotoxy(10,14);printf("Il ne'existe pas des element superieur a A");}
}


void recherche_div_multiples(int *t1,int n1)
{
	int *pi,cp1=0,cp2=0,ind_inf,ind_sup,val;
	do{
		 gotoxy(10,12);printf("donner l'indice inferieur  : ");
         scanf("%d",&ind_inf);
		 gotoxy(10,13);printf("donner l'indice superieur : ");
		 scanf("%d",&ind_sup);;
	}while(!(ind_inf>0 && ind_inf < ind_sup && ind_sup <n1));

	do{
		 gotoxy(10,14);printf("val : ");
		scanf("%d",&val);
	}while(val<=0);

	 gotoxy(10,16);printf("les diviseur de  %d sont :",val);
	for(pi=t1+ind_inf;pi<=t1+ind_sup;pi++)
		if(val%(*pi)==0)
		{
			printf("%d",*pi);
			cp1++;
		}
	gotoxy(10,16);printf("les Multipe de %d sont :",val);
	for(pi=t1+ind_inf;pi<=t1+ind_sup;pi++)
			if((*pi)%val==0)
			{
				printf("%d ",*pi);
				cp2++;
			}
	if(cp1==0&&cp2==0)
		{gotoxy(10,18);printf("il n'existe aucun diviseur de  %d",val);}
	else
		if(cp1==0)
			{gotoxy(10,18);printf("il n'existe aucun diviseur de  %d",val);}
	else
		if(cp2==0)
				{gotoxy(10,18);printf("il n'existe aucun diviseur de  %d",val);}

}

void recherche_consecutifs(int *t1,int n1)
{
	int *pi,s=0,*pj,pos;
   	do
	{
		gotoxy(10,12);printf("pos = ");
		scanf("%d",&pos);
	}while(!(pos>0	&&	pos<n1));
   pi=t1+pos;
	do
	{
		pi--;
		s+=*pi;
	}while(s<*pi);
	if(s==*pi)
	{
		gotoxy(10,14);printf("condition verifier les element consecutifs : ");
		for(pj=t1+pos-1;pj>=pi;pj--)
		printf("%d ",*pj);
	}
	else
		{gotoxy(10,14);printf("condition non verifiée");}
}

int position(int t[],int n,int val,int ind)
{
	int *pi;
    for(pi=t+ind;pi<t+n;pi++)
		if(val==*t)
			return (pi-t);
	return 0;
}

void recherche_blocs(int *t,int n)
{
	int a,b;
	int *pi=t;

	gotoxy(10,12);printf("A = ");
    scanf("%d",&a);

	gotoxy(10,13);printf("B = ");
	scanf("%d",&b);
    gotoxy(10,15);

	if((position(t,n,a,pi-t)!=0)&&(position(t,n,b,pi-t)!=0))
	{
		do
		{
			for(pi=t+position(t,n,a,pi-t)+1;pi-t<position(t,n,b,pi-t);pi++)
				printf(" %d ",*t);
            pi+=2;
		}while(!((position(t,n,a,pi-t)!=0)||(position(t,n,b,pi-t)!=0)));

	}else
		{gotoxy(10,15);printf("il n'existe pas des bloc");}

}

int nb_occ(int *t,int n , int x)
{
	int k=0;
    for(int i=0;i<n;i++)
    {
		if(t[i]==x)
			k++;
    }
	return k;
}

void recherche_el_frequent(int *T,int n)
{
	int val=*T,f=nb_occ(T,n,*T) ;
	int *pi;
	for (pi=T+1;pi<T+n;pi++)
		if (nb_occ(T,n,*T)>f)
		{
			f=nb_occ(T,n,*T);
			val=*T;
		}
	gotoxy(10,12);printf("l'element qui apparait le plus est %d et son nb d'occurence = %d",val,f);
}

int somme(int *t,int p1,int p2)
{
	int s=0;
	int *pi;
    for(pi=t+p1;pi<t+p2;pi++)
    {
		s+=*t;
    }
	return s;
}

void rech_ecart(int *t,int n)
{
    int ok=0;
	int *pi;
    for(pi=t+1;pi<t+n;pi++)
    {
		if(somme(t,0,(pi-t)+1)==somme(t,(pi-t)+1,n))
			{
				gotoxy(10,13);printf(" s1 = %d s2 = %d et ind = %d",somme(t,0,(pi-t)+1),somme(t,(pi-t)+2,n),(pi-t)+1);ok=1;break;
			}
    }
    if (ok==0)
    {
        gotoxy(10,13);printf("Pas d'equivalance !");
    }
}


void recherche_tab_max(int *t,int n)
{
	int im_f=0 , im_s=1, smax=t[im_f]+t[im_s],s=0;
	int *i,*j;
	for (i=t; i<t+n-1;i++)
	{	s=0 ;
		for(j=t+(i-t);j<t+n;j++);
		{	s+=*t;
			if (s>smax)
			{	smax=s ;
				im_f=(i-t);
				im_s=(j-t);
			}
		}
	}
	gotoxy(10,12);printf("le sous_tableau maximum est le sous tableau compris entre %d et %d \n", im_f,im_s);
	gotoxy(10,14);printf("sa somme maximale est = %d ",smax );
}

void rech_sequentielle(int *t,int n)
{
	int val,i,x;
	gotoxy(10,12);printf("donner un valeur : ");scanf("%d",&val);
	for(int i=0;i<n;i++)
    {
		if(val==*t)
            {x=i;break;}
    }

	x=-1;

	gotoxy(10,16);printf("Resulta : %d",x);
}

int recherche_dichotomique (int *t,int n)
{
    int val,d=0,f=n,m,ok=0,x;

    gotoxy(10,12);printf("val = ");
    scanf("%d",&val);

    while((d <= f)&&(ok==0))
    {
           m=(d+f)/2;
           if(t[m]==val) ok =1;
           else
                 {
                 if(t[m]>val) f = m -1;
                 else d = m +1;
                 }
    }
        if(!ok)
            x=-1;
        else
            x=m;
    gotoxy(10,16);printf("Resulta : %d",x);
}

int permute(int a,int b)
{
	int tmp=(a%100)*10+a/100;
	while(tmp!=a)
		if(tmp==b)
			return 1 ;
	return 0 ;
}
void recherche_permutation(int *T,int n)
{
	int t, maxi=*T;
	int *i;
	for(i=T+1;i<T+n;i++)
		if(*T>maxi)
			maxi=*T;
	gotoxy(10,14);printf("le maximum est : %d",maxi);
	t=0;
	gotoxy(10,16);printf("les elements dont permutation donne %d sont :\n",maxi);
	for (i=T;i<T+n;i++)
		if(permute(*T,maxi) && *T!= maxi)
		{	t=1;
			printf("%d",*T);
		}
	if (t==0)
		gotoxy(10,16);printf("aucun resultat trouvé\n ");
};
void median(int *t1,int *t2,int n1, int n2)
{
	int *i;
	int j;
	if(n1>n2)
        j=n2 ;
    else j=n1 ;
	for (i=t1;i<t1+j;i++)
		if (*t1==(*t2))
		{
			gotoxy(10,16);printf("l'element median est %d \n",*t1);
			return ;
		}
	gotoxy(10,16);printf("il n'existe aucun element median \n");
}

void recherche_nb_sequences(int *T, int n)
{
	int nb=1;
	int *i;
	gotoxy(10,12);printf("les sequences strictement croissantes sont : %d\t",*T);
	for (i=T;i<T+n;i++)
		if (*T>*T-1)
			{gotoxy(10,14);printf(" %d ",*T);}
		else
		{	nb++;
			gotoxy(10,14);printf(" %d ",*T);
		}
	gotoxy(10,16);printf("Le nombre de seqence= %d",nb);
}
