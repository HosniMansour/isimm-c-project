liste supp_tete(liste l)
{
    if(l!=NULL)
    {
        liste p=l;
        l=l->suiv;
        free(p);
    }

	return (l);
}

liste supp_queue(liste l)
{
	liste p=l;

    clrscr();
    gotoxy(15,2);printf("===================================================");
    gotoxy(30,4);  printf("~~~~ Supprime ~~~~");
    gotoxy(15,6);printf("===================================================\n\n");

    if(p==NULL)
        {gotoxy(30,15);printf("Liste Vide !");}
	else
	{
		while(p->suiv !=NULL)
			p=p->suiv ;
            free(p);
	}
	return l ;
}

liste supp_pos(liste l,int pos)
{
	liste p=l,q=NULL;

	clrscr();
    gotoxy(15,2);printf("===================================================");
    gotoxy(30,4);  printf("~~~~ Supprime ~~~~");
    gotoxy(15,6);printf("===================================================\n\n");

	if(l==NULL)
		 {gotoxy(30,15);printf("Liste Vide !");}
	else
	{
		if (pos == 1)
			return(supp_tete(l));
		while(pos> 2)
		{
			p=p->suiv;
			pos--;
		}
		q=p->suiv ;
		p->suiv=p->suiv->suiv;
		free(q);
	}
	return l ;
}

liste supp_tel(liste l)
{
	long int tel;
	liste p=NULL,q=NULL;
		do{
			printf("Donner le numero de telephone : ");fflush(stdin);
			scanf("%ld",&tel);
		}while(tel<=0);

		if((l->info).tel==tel)
			return supp_tete(l);
		p=l;
		while(p->suiv != NULL && ((p->suiv)->info.tel)!=tel)
            p=p->suiv ;
		if(p->suiv==NULL)
			{gotoxy(30,15);printf("%ld n'existe pas dans cette liste",tel);}
		else
		{	q=p->suiv;
			p->suiv=p->suiv->suiv ;
			free(q);
		}
	return l ;
}

liste supp_dep(liste l)
{
	int code;
	liste p=NULL,q=NULL ;

		do{
			printf("Donner le code de departement : ");fflush(stdin);
			scanf("%d",&code);
		}while(code<=0);
		while((l->info).code==code)
			l=supp_tete(l);
		p=l;
		while(p!=NULL && p->suiv !=NULL )
			if(((p->suiv)->info.code)==code)
			{
				q=p->suiv;
				p->suiv=p->suiv->suiv ;
				free(q);
			}
			else
				p=p->suiv ;

	return l ;
}


