#include "withdrawal.c"

void deposit() {
    int a;
    double b;
    FILE *x, *y;
    printf("\n\t\t\t\t======================================================================");
    gotoxy(54, 4);
    printf(" CASH DEPOSIT ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(47, 10);
    printf("Enter Your Account Number : ");
    scanf("%d", &a);
    if (chkacc(a) == 1) {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
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
                gotoxy(45, 13);
                printf("Enter The Amount To Deposit : Rs. ");
                scanf("%lf", &b);
                rec.blnc += b;
                fwrite(&rec, sizeof(rec), 1, y);
            }
        }
        fclose(x);
        fclose(y);
        x = fopen("record.bin", "wb");
        y = fopen("new.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, y))
            fwrite(&rec, sizeof(rec), 1, x);
        fclose(x);
        fclose(y);
    }
    if (chkacc(a) == 0) {
        system("CLS");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. ");
        gotoxy(41, 22);
        deposit();
    }
    gotoxy(52, 21);
    printf("CASH DEPOSIT SUCCESSFULL");
    gotoxy(50, 24);
    printf("Press any key to return back...");
    getch();
    transaction();
}
