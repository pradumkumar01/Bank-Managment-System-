#include "add.c"

void view() {
    int i = 7;
    struct record rec;
    FILE *f;
    //rb = reading binary
    f = fopen("record.bin", "rb");
    printf("\n\t\t\t\t===================================================");
    gotoxy(40, 3);
    printf("******** CUSTOMERS LIST ********");
    printf("\n\t\t\t\t===================================================");
    gotoxy(5, 6);
    printf("A/C No.");
    gotoxy(13, 6);
    printf("Account Name");
    gotoxy(34, 6);
    printf("UserID");
    gotoxy(49, 6);
    printf("Email Address");
    gotoxy(85, 6);
    printf("Phone No.");
    gotoxy(99, 6);
    printf("Balance");
    gotoxy(5, 7);
    
    
    while (fread(&rec, sizeof(rec), 1, f)) {
        gotoxy(7, i);
        printf("%d", rec.account);
        gotoxy(13, i);
        printf("%s", rec.name);
        gotoxy(34, i);
        for (r = 0; r < 10; r++) /// 0 to 10 random number
		 {  
            printf("%d", rec.UserID[r]);
        }
        gotoxy(49, i);
        printf("%s", rec.email);
        gotoxy(85, i);
        printf("%s", rec.phone);
        gotoxy(99, i);
        printf("Rs.%.2lf", rec.blnc);
        i++;
    }
    // close the file
    fclose(f);
    int x;
    gotoxy(42, i + 5);
    printf("Press [Enter] to return back to main menu. ");
    x = getch();
    // 13 = '\r' i.e carriage return
    if (x == 13) {
        menu();
    } else
        view();
}

