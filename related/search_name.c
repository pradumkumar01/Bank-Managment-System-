#include "transaction.c"

void search_name() {
    int i = 0, b, x;
    char nam[30];
    printf("\n\t\t\t\t======================================================================");
    gotoxy(48, 4);
    printf(" SEARCH CUSTOMER ACCOUNT ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(43, 7);
    printf("Enter Your Full Name To Search : ");
    scanf(" %[^\n]", nam);
    FILE *f;
    f = fopen("record.bin", "rb");
    while (fread(&rec, sizeof(rec), 1, f)) {
        b = 0;
        strupr(rec.name);
        strupr(nam);
        if (strcmp(rec.name, nam) == 0) {
            gotoxy(52, 21);
            printf("Account Number Matched. User is Active.");
            gotoxy(45, 10);
            printf("Detail Information of %s", rec.name);
            gotoxy(37, 12);
            printf("[1] . Account Number : %d", rec.account);
            gotoxy(37, 13);
            printf("[2] . Name           : %s", rec.name);
            gotoxy(37, 14);
            printf("[3] . UserID         : ");
            for (r = 0; r < 10; r++) {
                printf("%d", rec.UserID[r]);
            }
            gotoxy(37, 15);
            printf("[4] . Phone Number   : %s", rec.phone);
            gotoxy(37, 16);
            printf("[5] . Address        : %s", rec.address);
            gotoxy(37, 17);
            printf("[6] . E-mail         : %s", rec.email);
            gotoxy(37, 18);
            printf("[7] . Adhar Number   : %s", rec.citiz);
            gotoxy(37, 19);
            printf("[8] . Current Balance: Rs.%.2lf", rec.blnc);
            break;
        } else
            b = 1;
    }
    fclose(f);
    if (b == 1) {
        system("cls");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. User is Inactive.");
        search_name();
    }
    gotoxy(42, 24);
    printf("Press [ENTER] to return back to main menu. ");
    char z = getch();
    if (z == 13)
        menu();
    else
        search();
}
