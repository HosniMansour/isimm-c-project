liste madr(liste l)
{
    liste p=l;
	long int num ;
	do{
		printf("Donner le numero de telephone: ");
		scanf("%ld",&num);
	 }while(verif1(num)==0);
	while(p!= NULL && num !=(p->info).tel)
			p=p->suiv ;
	if (p==NULL)
		{gotoxy(30,15);printf("%ld n'existe pas !",num);}
	else
	{
		printf("Donner la nouvelle adresse: ");
		scanf("%s",(p->info).adresse);
	}
	return l;
}

liste mtel(liste l)
{
	long int num ;
	liste p=l;
	do{
		printf("Donner le numero de telephone: ");
		scanf("%ld",&num);
	 }while(verif1(num)==0);

	while(p!= NULL && num !=(p->info).tel)
			p=p->suiv ;
	if (p==NULL)
		{gotoxy(30,15);printf("%ld n'existe pas !",num);}
	else
		{
			do{
				printf("Nouveau numero de telephone : ");
				scanf("%ld",&num);
			 }while(verif1(num)==0);
			(p->info).tel=num ;
		}
    return l;
}


