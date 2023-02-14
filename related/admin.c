
#include "login.c"

void admin() {
    system("color 2");
    printf("\n\n\t\t\t\t======================================================================");
    gotoxy(43, 4);
    printf(" WELCOME TO OUR BANKING SYSTEM ");
    printf("\n\t\t\t\t======================================================================");
    login();
    if (verify() == 1) {
        if (m == 1)
            menu();
        else
            transaction();
    } else if (verify() == 0) {
        system("CLS");
        gotoxy(43, 16);
        printf("Incorrect Username / Password !!!!");
        admin();
    }
}

