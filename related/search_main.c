#include "search_account.c"

void search() {
    system("cls");
    int a;
    printf("\n\t\t\t\t======================================================================");
    gotoxy(55, 4);
    printf(" SEARCH MENU ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(49, 10);
    printf("[1] . Search By Account Number ");
    gotoxy(49, 12);
    printf("[2] . Search By Customer Name ");
    gotoxy(47, 17);
    printf("Enter Your Choice [1-2] : ");
    scanf("%d", &a);
    system("cls");
    if (a == 1) {
        search_acc();
    } else if (a == 2) {
        search_name();
    } else
        menu();
}
