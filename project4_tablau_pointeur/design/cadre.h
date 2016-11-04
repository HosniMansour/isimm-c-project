#include <stdio.h>
#include <myconio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void cadremenu(const char* ch,int test)
{

    srand(time(NULL));
    int r=(rand()%3)+1;
    char str[2];sprintf(str, "%d", r);
    char extention[5]=".txt";
    char chemin[30]="design\\ascii\\";
    strcat(chemin,str);
    strcat(chemin,extention);

    if (test==1)
    {
        for(int i=0;i<83;i++)
    {
            gotoxy(i+5,1);printf("-");
            gotoxy(i+5,35);printf("-");
            if(i<33)
            {
                gotoxy(4,i+2);printf("|");
                gotoxy(88,i+2);printf("|");
            }
            Sleep(90-i);
    }
        for(int i=0;i<83;i++)
        {
            gotoxy(i+5,5);printf("-");
            Sleep(10);
        }
    }else
    {
        for(int i=0;i<83;i++)
        {
            gotoxy(i+5,1);printf("-");
            gotoxy(i+5,35);printf("-");
            if(i<33)
            {
                gotoxy(4,i+2);printf("|");
                gotoxy(88,i+2);printf("|");
            }
        }
        for(int i=0;i<83;i++)
        {
            gotoxy(i+5,5);printf("-");
        }
    }


    textcolor(RED);textbackground(LIGHTGRAY);
    gotoxy(31,3);printf(".o0~X~0o. %s .o0~X~0o.",ch);
    textcolor(LIGHTBLUE);textbackground(LIGHTGRAY);

    if(test!=3)
    {
        char c;
        FILE *file = fopen(chemin, "r" );
        do
        {
            c=fgetc(file);
            printf("%c",c);
        }while (c != EOF);
    }


}
