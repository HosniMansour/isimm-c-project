#include <stdio.h>
#include <math.h>
#include <conio.h>

int recherche_distincts(int t[],int n)
{
	int i,j,k=0,ok=0;
    for(i=0;i<n;i++)
    {
		ok=0;
        for(j=i;j<n-1;j++)
		{
			if(t[i]==t[j+1])
                {ok=1;
				break;}
		}
		if(ok==0)
				k++;
    }
	return k;
}

void recherche_elements_sup(int t[],int n)
{
	int a,min=0,ok=0;

    gotoxy(10,12);printf("A = ");scanf("%d",&a);

	gotoxy(10,14);printf("les element superieurs a A : ");
    for(int i=0;i<n;i++)
    {
		if(t[i]>a)
		{
		    if (ok=0)
                min=t[i];
		    ok=1;
			printf(" %d ",t[i]);
			if(t[i]<min)
				min=t[i];
		}

    }
    if (ok==0)
        {gotoxy(10,14);printf("Il ne'existe pas des element superieur a A");}
    if(min!=0)
    {gotoxy(10,16);printf("l'element plus petit des element superieurs a A : %d",min);}

}

void recherche_div_multiples(int T[],int n)
{
	int ind_inf,ind_sup,i,val;
	int cp=0;
	do{
		 gotoxy(10,12);printf("donner l'indice inferieur  : ");
         scanf("%d",&ind_inf);
		 gotoxy(10,13);printf("donner l'indice superieur : ");
		 scanf("%d",&ind_sup);;
	}while(!(ind_inf>0 && ind_inf < ind_sup && ind_sup <n));
	do{
		 gotoxy(10,14);printf("val : ");
		scanf("%d",&val);
	}while(val<=0);

    gotoxy(10,16);printf("les diviseur de  %d sont :",val);
	for (i=ind_inf;i<=ind_sup;i++)
    {
		if (val%T[i]==0)
			{printf(" %d ",T[i]);cp++;}
    }

	if (cp==0)
		{gotoxy(10,16);printf("il n'existe aucun diviseur de  %d\n",val);}
	cp=0;
	gotoxy(10,18);printf("les Multipe de  %d sont :",val);
	for (i=ind_inf;i<=ind_sup;i++)
    {
		if (T[i]%val==0)
			{printf(" %d ",T[i]);cp=1;}
    }
	if (cp==0)
		{gotoxy(10,18);printf("il n'existe aucun diviseur de  %d\n",val);}
}


void recherche_consecutifs(int t[],int n)
{
	int pos,i,s=0;
	do
    {
        gotoxy(10,12);printf("pos = ");
        scanf("%d",&pos);
    }while(!(pos>0)&&(pos<n));

	i=pos;
	do{
		i--;
		s+=t[i];
	}while(!((s>=t[pos])||(i<0)));

	if(s==t[pos])
	{
		gotoxy(10,14);printf("condition verifier les element consecutifs : ",t[i]);
		for(;i<pos;i++)
			printf(" %d ",t[i]);
	}else
	{
		gotoxy(10,14);printf("Condition non verifier");
	}
}

int position(int t[],int n,int val,int ind)
{
    for(int i=ind;i<n;i++)
		if(val==t[i])
			return i;
	return 0;
}

void recherche_blocs(int t[],int n)
{
	int a,b,i=0;

	gotoxy(10,12);printf("A = ");
    scanf("%d",&a);

	gotoxy(10,13);printf("B = ");
	scanf("%d",&b);
    gotoxy(10,15);

	if((position(t,n,a,i)!=0)&&(position(t,n,b,i)!=0))
	{
		do
		{
			for(i=position(t,n,a,i)+1;i<position(t,n,b,i);i++)
				printf(" %d ",t[i]);
            i+=2;
		}while(!((position(t,n,a,i)!=0)||(position(t,n,b,i)!=0)));
		printf(" %d %d ",100,50);
	}else
		{gotoxy(10,15);printf("il n'existe pas des bloc");}

}

int nb_occ(int t[],int n , int x)
{
	int k=0;
    for(int i=0;i<n;i++)
    {
		if(t[i]==x)
			k++;
    }
	return k;
}

void recherche_el_frequent(int T[],int n)
{
	int i,val=T[0],f=nb_occ(T,n,T[0]) ;
	for (i=1;i<n;i++)
		if (nb_occ(T,n,T[i])>f)
		{
			f=nb_occ(T,n,T[i]);
			val=T[i];
		}
	gotoxy(10,12);printf("l'element qui apparait le plus est %d et son nb d'occurence = %d",val,f);
}

int somme(int t[],int p1,int p2)
{
	int s=0;
    for(int i=p1;i<p2;i++)
    {
		s+=t[i];
    }
	return s;
}

void rech_ecart(int t[],int n)
{
    int ok=0;
    for(int i=1;i<n;i++)
    {
		if(somme(t,0,i+1)==somme(t,i+1,n))
			{
				gotoxy(10,13);printf(" s1 = %d s2 = %d et ind = %d",somme(t,0,i+1),somme(t,i+2,n),i+1);ok=1;break;
			}
    }
    if (ok==0)
    {
        gotoxy(10,13);printf("Pas d'equivalance !");
    }
}


void recherche_tab_max(int T[],int n)
{
	int im_f=0 , im_s=1, smax=T[im_f]+T[im_s],i,j,s=0;
	for (i=0; i<n-1;i++)
	{	s=0 ;
		for(j=i;j<n;j++);
		{	s+=T[j];
			if (s>smax)
			{	smax=s ;
				im_f=i ;
				im_s=j;
			}
		}
	}
	gotoxy(10,12);printf("le sous_tableau maximum est le sous tableau compris entre %d et %d \n", im_f,im_s);
	gotoxy(10,14);printf("sa somme maximale est = %d ",smax );
}

void rech_sequentielle(int T[],int n)
{
	int val,i,x;
	gotoxy(10,12);printf("donner un valeur : ");scanf("%d",&val);
	for(int i=0;i<n;i++)
    {
		if(val==T[i])
            {x=i;break;}
    }

	x=-1;

	gotoxy(10,16);printf("Resulta : %d",x);
}

int recherche_dichotomique (int t[],int n)
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
void recherche_permutation(int T[],int n)
{
	int i ,t, maxi=T[0];
	for(i=1;i<n;i++)
		if(T[i]>maxi)
			maxi=T[i];
	gotoxy(10,14);printf("le maximum est : %d",maxi);
	t=0;
	gotoxy(10,16);printf("les elements dont permutation donne %d sont :\n",maxi);
	for (i=0;i<n;i++)
		if(permute(T[i],maxi) && T[i]!= maxi)
		{	t=1;
			printf("%d",T[i]);
		}
	if (t==0)
		gotoxy(10,16);printf("aucun resultat trouvé\n ");
};
void median(int t1[],int t2[],int n1, int n2)
{
	int i, j;
	if(n1>n2)
        j=n2 ;
    else j=n1 ;
	for (i=0;i<j;i++)
		if (t1[i]==t2[j-i-1])
		{
			gotoxy(10,16+i);printf("l'element median est %d \n",t1[i]);
			return ;
		}
	gotoxy(10,16);printf("il n'existe aucun element median \n");
}

void recherche_nb_sequences(int T[], int n)
{
	int i,nb=1;
	gotoxy(10,12);printf("les sequences strictement croissantes sont : %d\t",T[0]);
	for (i=1;i<n;i++)
		if (T[i]>T[i-1])
			{gotoxy(10+i,14);printf(" %d ",T[i]);}
		else
		{	nb++;
			gotoxy(10+i,14);printf(" %d ",T[i]);
		}
	gotoxy(10,16);printf("Le nombre de seqence= %d",nb);
}
