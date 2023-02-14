#include "about.c"

void withdrawl() {
    FILE *x, *y;
    int a;
    double b, z;
    printf("\n\t\t\t\t======================================================================");
    gotoxy(54, 4);
    printf(" CASH WITHDRAWAL ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(45, 10);
    printf("Enter Your Account Number : ");
    scanf("%d", &a);
    if (chkacc(a) == 1) {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        gotoxy(42, 13);
        printf("Enter The Amount To Withdraw : Rs. ");
        scanf("%lf", &b);
        while (fread(&rec, sizeof(rec), 1, x)) {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
            else if (rec.account == a) {
                rec.name;
                rec.account;
                rec.phone;
                rec.address;
                rec.email;
                rec.citiz;
                z = rec.blnc;
                if (b <= rec.blnc) {
                    rec.blnc -= b;
                    gotoxy(44, 21);
                    printf("    CASH WITHDRAWAL SUCCESSFULL     ");
                }
                fwrite(&rec, sizeof(rec), 1, y);
            }
        }
        fclose(x);
        fclose(y);
        remove("record.bin");
        rename("new.bin", "record.bin");
        if (z < b) {
            system("CLS");
            gotoxy(48, 21);
            printf("Current Balance is $%.2lf", z);
            gotoxy(42, 24);
            printf("Entered amount exceeds current balance");
            withdrawl();
        }
    }
    if (chkacc(a) == 0) {
        system("CLS");
        gotoxy(50, 21);
        printf("Account Doesn't Exist.");
        gotoxy(39, 22);
        withdrawl();
    }
    gotoxy(42, 24);
    printf("     Press Any Key To Continue ....   ");
    getch();
    transaction();
}
