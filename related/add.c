#include "check_account.c"

void add() {
    char c;
    struct record rec;
    FILE *f;
    //a = append binary
    f = fopen("record.bin", "a");
    int i = 0, x,k;
    
    do {
        system("CLS");
        printf("\n\t\t\t\t======================================================================");
        gotoxy(24, 4);
        printf("\t\t\tCUSTOMER ACCOUNT REGISTRATION");
        printf("\n\t\t\t\t======================================================================");
        gotoxy(36, 8);
        printf("[1] . Enter Your Name           : ");
        scanf(" %[^\n]", rec.name);
        gotoxy(36, 9);
        printf("[2] . Enter Your Account Number : ");
        scanf(" %d", &rec.account);    
	ok:	
		gotoxy(36, 10);
        printf("[3] . Enter Your Phone Number   : ");
        // for phone number 
        
        int no=10;
        while(no<10){
        	scanf(" %[^\n]", rec.phone);
        	no++;
		}
		gotoxy(36, 11);
        printf("[4] . Enter Your Address        : ");
        scanf(" %[^\n]", rec.address);
        gotoxy(36, 12);
        printf("[5] . Enter Your E-mail         : ");
        scanf(" %[^\n]", rec.email);
        gotoxy(36, 13);
        printf("[6] . Enter Your Adhar Number   : ");
        // for adhar number 
        scanf(" %[^\n]", rec.citiz);
        gotoxy(36, 14);
        printf("[7] . Enter Amount To Deposit   : Rs.");
        scanf(" %lf", &rec.blnc);
        for (r = 0; r < 10; r++) {
            rec.UserID[r] = rand() % 10;
        }
	
        fwrite(&rec, sizeof(rec), 1, f);
        gotoxy(38, 17);
        printf("CUSTOMER ACCOUNT REGISTRATION SUCCESSFULL");
        i++;
        gotoxy(36, 19);
        printf("Do You Want To Add Another Record ? (Y/N) : ");
        scanf(" %c", &c);
    } while (c == 'Y' || c == 'y');
    fclose(f);
    gotoxy(40, 22);
    printf("Press any key to return back to main menu. ");
    char z = getch();
    if (z == 13) {
        menu();
    }
}

