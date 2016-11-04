void rech_num_tel(liste l)
{
	long int tel ;
	do{
			printf("Donner ue numero de telephone: ");fflush(stdin);
			scanf("%ld",&tel);
	 }while(verif1(tel)==0);
	while(l!= NULL && tel !=(l->info).tel)
			l=l->suiv ;
	if (l==NULL)
		{gotoxy(30,15);printf("%ld n'existe pas !",tel);}
		else
		affiche_info(l);
}

void rech_indice(liste l)
{
	long int ind,tmp ;
	int test=0 ;
	do{
		printf("Donner indice de tel : ");fflush(stdin);
		scanf("%ld",&ind);
	}while (!((ind>10)&&(ind<100)));
	printf("\n---------------------\n");

	while (l!=NULL)
	{
		tmp=(l->info).tel ;

		if((tmp/1000000)==ind)
		{
			affiche_info(l);
			printf("\n---------------------\n");
			test=1;
		}
		l=l->suiv ;
	}
	if(test==0)
		printf("Aucun numero trouvee ! ");
}

void rech_nom(liste l)
{
	char nom[20];
	printf("Donner le nom: ");fflush(stdin);
	scanf("%s",nom);
	while(l!= NULL && strcmp(nom,(l->info.nom)) !=0)
			l=l->suiv ;
	if (l==NULL)
		printf("%s n'existe pas",nom);
		else
		affiche_info(l);
}

void rechcd(liste l)
{
	int code,test=0 ;
	do{
		printf("Code de departement : ");fflush(stdin);
		scanf("%d",&code);
	}while (code <= 0);
    printf("\n---------------------\n");
	while (l!=NULL )
	{
		if((l->info).code==code)
		{
			affiche_info(l);
			printf("\n---------------------\n");
			test =1 ;
		}
		l=l->suiv ;
	}
	if(test==0)
		printf("Aucun resultat trouvee");
}

/******************************************************************************/

liste tri1(liste l)
{
    int test;
    liste p;
    personne pe;

    if(l==NULL)
        {gotoxy(30,12);printf("Liste Vide !");}
    else
    {
          do{
        test=0;
        for (p=l;(p->suiv)!=NULL;p=p->suiv)
        {
            if((p->info).tel<((p->suiv)->info).tel)
            {
                 pe=(p->info);
                (p->info)=((p->suiv)->info);
                ((p->suiv)->info)=pe;
                test=1;
            }
        }

    }while(test!=0);
    }
    return l;
}

liste tri2(liste l)
{
    int test;
    liste p;
    personne pe;

    if(l==NULL)
        {gotoxy(30,12);printf("Liste Vide !");}
    else
    {
          do{
        test=0;
        for (p=l;(p->suiv)!=NULL;p=p->suiv)
        {
            if((p->info).tel<((p->suiv)->info).tel)
            {
                 pe=(p->info);
                (p->info)=((p->suiv)->info);
                ((p->suiv)->info)=pe;
                test=1;
            }
        }

    }while(test!=0);
    }
    return l;
}
