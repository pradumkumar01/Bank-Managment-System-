#include "menu_exit.c"
void about() {
    gotoxy(48,10);
    printf("!!! ABOUT US !!!");
    gotoxy(48,11);
    printf("----------------");
    gotoxy(32,12);
    printf("This project has been created by Shivam , Nainsi Gupta , Pradum Yadav \n\t\t\t\t\t Pranav Singh Solanki , Riddhi Gupta & Shivam Dubey.");
    gotoxy(10,14);
    printf("It is a Simple Bank Management System Project for our 2st Semester based on C programming language.");
    gotoxy(40, 23);
    printf("Press any key to return back to main menu. ");
    char z = getch();
    if (z == 13) {
        menu();
    }

}
