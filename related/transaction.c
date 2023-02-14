#include "check_balance.c"

void transaction() {
    system("CLS");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(48, 4);
    printf(" TRANSACTION MENU ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(49, 9);
    printf("[1] . Balance Inquiry");
    gotoxy(49, 10);
    printf("[2] . Cash Deposit");
    gotoxy(49, 11);
    printf("[3] . Cash Withdrawal");
    if (m == 1) {
        gotoxy(49, 12);
        printf("[4] . Main Menu");
    } else {
        gotoxy(49, 12);
        printf("[4] . Exit");
    }
    gotoxy(45, 17);
    printf("Please Enter Your Choice [1-4] : ");
    printf("\n\t\t\t\t======================================================================");
    int a;
    gotoxy(78,17);
    scanf("%d", &a);
    switch (a) {
        case 1:
            system("cls");
            chkblnc();
            break;
        case 2:
            system("cls");
            deposit();
            break;
        case 3:
            system("cls");
            withdrawl();
            break;
        case 4:
            if (m == 1)
                menu();
            else
                menuexit();
            break;
        default:
            transaction();
    }
}
