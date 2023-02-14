#include "main_edited.c"

void menuexit() {
    system("cls");
    gotoxy(48, 10);
    printf("!!! THANK YOU !!!");
    gotoxy(50, 12);
    printf("USER :: %s", id);
    getch();
    gotoxy(0, 26);
    exit(0);
}
