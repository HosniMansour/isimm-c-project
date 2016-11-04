#include <string.h>

void ajout_underscore(char ch[])
{
    int i;
    for(i = 0 ; ch[i] != '\0' ; i++)
    if(ch[i] == ' ')
        ch[i] = '_';

}

void supp_underscore(char ch[])
{
    int i;
    for(i = 0 ; ch[i] != '\0' ; i++)
    if(ch[i] == '_')
        ch[i] = ' ';

}



liste mnenregistrement(liste l)
{
    int x;

    FILE  *fiche;
    personne pe;
    char chaine[100] = "";
    int i=0;
    liste p=l;

    enr_charg();
    do
    {
        clrscr();
        enr_charg();
        gotoxy(36,26);printf("Donner Votre Choix SVP : ");
        scanf("%d",&x);
    }while(x<1||x>3);

     switch(x)
    {
        case 1:
                fiche=fopen("data//data.txt","w");
                while(p!=NULL)
                {
                    ajout_underscore((p->info).nom);
                    ajout_underscore((p->info).prenom);
                    ajout_underscore((p->info).adresse);
                    fprintf(fiche,"\n%ld %s %s %s %s %d/%d/%d %d",(p->info).tel,(p->info).adr_mail,(p->info).nom,(p->info).prenom,(p->info).adresse,(p->info).date_naiss.j,(p->info).date_naiss.m,(p->info).date_naiss.a,(p->info).code);
                    p=p->suiv;
                }
                fclose(fiche);
                return l;

        break;
        case 2:clrscr();
            fiche=fopen("data//data.txt","r");

                if(l!=NULL)
                {
                     gotoxy(15,2);printf("===================================================");
                    gotoxy(30,4);  printf("~~~~ Confirmation ! ~~~~");
                    gotoxy(15,6);printf("===================================================\n\n");
                    int rep;
                    printf("Attention la liste n'est pas vide ! \nsi vous continuer vous aller retourner au derniere sauvegarde de la liste\n\n");
                    printf("- 0 pour retourner et enregistrer votre modification\n- 1 pour continuer \n\n");
                    do
                    {
                        printf("Rep = ");
                        scanf("%d",&rep);
                    }while(!(rep==1)||(rep==0));

                  switch(rep)
                  {
                    case 0:break;
                    case 1:
                        if (fiche != NULL)
                        {
                            free(l);l=NULL;
                            while (!feof(fiche))
                            {
                                fscanf(fiche, "%ld %s %s %s %s %d/%d/%d %d",&pe.tel,pe.adr_mail,pe.nom,pe.prenom,pe.adresse,&pe.date_naiss.j,&pe.date_naiss.m,&pe.date_naiss.a,&pe.code);
                                supp_underscore(pe.nom);
                                supp_underscore(pe.prenom);
                                supp_underscore(pe.adresse);
                                l=ajout_queue(l,pe);
                            }
                            fclose(fiche);
                            return l;
                        }
                        break;
                    }

                }else
                {
                    if (fiche != NULL)
                        {
                            free(l);l=NULL;
                            while (!feof(fiche))
                            {
                                fscanf(fiche, "%ld %s %s %s %s %d/%d/%d %d",&pe.tel,pe.adr_mail,pe.nom,pe.prenom,pe.adresse,&pe.date_naiss.j,&pe.date_naiss.m,&pe.date_naiss.a,&pe.code);
                                supp_underscore(pe.nom);
                                supp_underscore(pe.prenom);
                                supp_underscore(pe.adresse);
                                l=ajout_queue(l,pe);
                            }
                            fclose(fiche);
                            return l;
                        }
                }


        getch();break;
        case 3: break;
    }
}
