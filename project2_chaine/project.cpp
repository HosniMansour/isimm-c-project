#include <stdio.h>
#include <myconio.h>
#include "design/splash.h"
#include "design/computer.h"
#include "design/menu.h"

/**
* Hosni Mansour 
* https://hosni.me
* version: 1
*/

int main()
{
    splashs();clrscr();
    computers();clrscr();
    system("mode con: lines=35 cols=90");
    menu();
    return 0;
}
