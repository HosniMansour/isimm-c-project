#include <stdio.h>
#include <stdlib.h>
#include <myconio.h>
#include <time.h>
#include <windows.h>
#include <windows.h>


void loading()
{
	char ch[256] = {0};
	char percent[7] = "0%%";
	int i, j, k;

	gotoxy(5,8);ch[0] = '[';
	for(i=0;i<45;i++)
	{
        ch[i+1]='=';
        j=i%4;
        if(j==0)
            ch[i+2]='\\';
        else if(j==1)
            ch[i+2]='|';
        else if(j==2)
            ch[i+2]='/';
        else
            ch[i+2]='-';

        for(k = i + 3; k < 46; k++)
            ch[k] = ' ';
        ch[46] = ']';

        sprintf(percent, "%3.0f%%",(i/4.4)*10.0);
        gotoxy(5,8);printf("%s%s\r", ch, percent);
        Sleep(100);

    }

	gotoxy(5,8);sprintf(percent, " %3.0f%%", (i / 4.4) * 10.0);
	printf("%s%s\r", ch, percent);
}

void splashs()

{
    textbackground(LIGHTGRAY);
    clrscr();
    system("mode con: lines=10 cols=60");
    textcolor(GREEN);
    gotoxy(25,5);printf("loading : \n\n");
	textcolor(RED);
    loading();
}
