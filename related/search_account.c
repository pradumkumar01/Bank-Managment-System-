#include "search_name.c"

void search_acc() {
    FILE *f;
    int a, x;
re:
	printf("\n\t\t\t\t======================================================================");
    gotoxy(48, 4);
    printf(" SEARCH CUSTOMER ACCOUNT ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(43, 7);
    printf("Enter Your Account Number To Search : ");
    scanf("%d", &a);
    if (chkacc(a) == 1) {
        f = fopen("record.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, f)) {
            if (rec.account == a) {
                gotoxy(52, 21);
                printf("Account Number Matched. User is Active.");
                gotoxy(45, 10);
                printf("Detail Information of %s", strupr(rec.name));
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
            }
        }
        fclose(f);
    }
    if (chkacc(a) == 0) {
        system("CLS");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. User is Inactive. ");
        goto re;
    }
    gotoxy(42, 24);
    printf("Press [ENTER] to return back to main menu. ");
    char z = getch();
    if (z == 13)
        menu();
    else
        search();
}

