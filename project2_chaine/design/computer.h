#include <stdio.h>
#include <stdlib.h>
#include <myconio.h>
#include <string.h>
#include <time.h>


void printText(char * text, int loops) {
    const char chars[52] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o',
                            'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k',
                            'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm', '1',
                            '2', '3', '4', '5', '6', '7', '8', '9', '-',
                            '=', '[', ']', ';', '/', '?', ':', '}', '{',
                            '+', '*', '0', '!', '@', '#', '\0'};

    int totalChars = strlen(text);
    int charCount = 0;
    int loopCount = 0;
    char newArr[totalChars];
    int i = 0;
    for (i; i <= totalChars; i++) {
        newArr[i] = text[i];
        newArr[i+1] = '\0';
        while (loopCount <= loops) {
                gotoxy(26,17);printf("%s%c\r",newArr,chars[charCount]);
            if (charCount == 51) {
                charCount = 0;
                loopCount++;
            }
            charCount++;
            int c;
            for (c = 0 ; c <= 999999; c++) {}
        }
        loopCount = 0;
    }
}
int computers()
{
	textcolor(LIGHTBLUE);
	textbackground(LIGHTGRAY);
    system("mode con: lines=38 cols=80");
    FILE *file = fopen("design\\ascii\\ascii.txt", "r" );
    FILE *file2 = fopen("design\\ascii\\projet.txt", "r" );

    char c;

    do
    {
        c=fgetc(file2);
        printf("%c",c);
    }while (c != EOF);
printf("\n");
    do
    {
      c=fgetc(file);
      printf("%c",c);
    }while (c != EOF);

    textcolor(BLACK);
    textbackground(LIGHTGRAY);

    char msj[40]="> Projet N 2 Les chaines de caracteres";

    gotoxy(20,13);
    for (int i=0;i<strlen(msj);i++)
        {
            Sleep(100);
			printf("%c",msj[i]);
		}

    textcolor(RED);
    textbackground(LIGHTGRAY);
    strcpy(msj,"Realiser Par Hosni Masnsour");
    printText(msj,1);
    textcolor(LIGHTBLUE);
	textbackground(LIGHTGRAY);
    gotoxy(1,35);
    fclose(file);
    fclose(file2);
    Sleep(1000);
    clrscr();

}
