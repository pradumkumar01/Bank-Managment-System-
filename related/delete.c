#include "search_main.c"

void del() {
    FILE *x, *y;
    int a, c;
re:
	printf("\n\t\t\t\t======================================================================");
    gotoxy(48, 4);
    printf(" DELETE CUSTOMER ACCOUNT ");
    printf("\n\t\t\t\t======================================================================");
    gotoxy(41, 9);
    printf("Enter Your Account Number To Delete : ");
    scanf("%d", &a);
    if (chkacc(a) == 1) {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        while (fread(&rec, sizeof(rec), 1, x)) {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
        }
        fclose(x);
        fclose(y);
        x = fopen("record.bin", "wb");
        y = fopen("new.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, y))
            fwrite(&rec, sizeof(rec), 1, x);
        fclose(x);
        fclose(y);
    } else if (chkacc(a) == 0) {
        system("CLS");
        gotoxy(51, 15);
        printf("Account Doesn't Exist");
        goto re;
    }
    gotoxy(44, 15);
    printf("CUSTOMER ACCOUNT DELETED SUCCESSFULLY");
    gotoxy(42, 18);
    printf("Press any key to return back to main menu. ");
    getch();
    menu();
}
