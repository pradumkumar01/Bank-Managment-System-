#include "delete.c"

void edit() {
    FILE *x, *y;
    int a, c;
// colon i.e ":" acts as id for goto function
re:
	printf("\n\t\t\t\t======================================================================");
    gotoxy(48, 4);
    printf(" EDIT CUSTOMER ACCOUNT ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(43, 7);
    printf("Enter Your Account Number To Edit : ");
    scanf("%d", &a);
    if (chkacc(a) == 1) {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        while (fread(&rec, sizeof(rec), 1, x)) {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
            else if (rec.account == a) {
                gotoxy(52, 21);
                printf("Account Number Matched. ");
                gotoxy(51, 10);
                printf("Enter Your Details");
                gotoxy(31, 12);
                printf("[1] . Enter Your Name           : ");
                scanf(" %[^\n]", rec.name);
                gotoxy(31, 13);
                printf("[2] . Enter Your Account Number : ");
                scanf(" %d", &rec.account);
                gotoxy(31, 14);
                printf("[3] . Enter Your Phone Number   : ");
                scanf(" %[^\n]", rec.phone);
                gotoxy(31, 15);
                printf("[4] . Enter Your Address        : ");
                scanf(" %[^\n]", rec.address);
                gotoxy(31, 16);
                printf("[5] . Enter Your E-mail         : ");
                scanf(" %[^\n]", rec.email);
                gotoxy(31, 17);
                printf("[6] . Enter Your Adhar Number   : ");
                scanf(" %[^\n]", rec.citiz);
                fwrite(&rec, sizeof(rec), 1, y);
            }
        }
        fclose(x);
        fclose(y);
    }
    if (chkacc(a) == 0) {
        system("CLS");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. ");
        goto re;
    }
    remove("record.bin");
    rename("new.bin", "record.bin");
    gotoxy(45, 21);
    printf("CUSTOMER ACCOUNT UPDATE SUCCESSFULL");
    gotoxy(42, 24);
    printf("Press any key to return back to main menu . ");
    getch();
    menu();
}
