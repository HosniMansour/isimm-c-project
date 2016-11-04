
void cadre()
{

    FILE *file = fopen("design\\cpr.txt", "r" );
    char c;
    do
    {
        c=fgetc(file);
        printf("%c",c);
    }while (c != EOF);
}

void spl()
{
    cadre();
    textcolor(GREEN);
    gotoxy(28,20);printf("Liste Simplement et Doublement");
    gotoxy(53,22);printf("Chainees");
    textcolor(RED);
    gotoxy(32,33);printf("Realiser Par Hosni Mansour");
    textcolor(WHITE);
    gotoxy(66,28);
}

