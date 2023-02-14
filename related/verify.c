#include "menu.c"

int verify() {
    char a;
    if (m == 1) {
        if ((strcmp(id, "admin") == 0 && strcmp(password, "admin") == 0)) {
            gotoxy(38, 16);
            printf("You Have Successfully Logged In : \" %s \" ", id);
            gotoxy(44, 20);
            printf("Press any key to continue .... ");
            getch();
            return 1;
        } else
            return 0;
    } else if (m == 2) {
        if (strcmp(id, "user") == 0 && strcmp(password, "user01") == 0) {
            gotoxy(38, 16);
            printf("You Have Successfully Logged In : \" %s \" ", id);
            gotoxy(44, 20);
            printf("Press any key to continue .... ");
            getch();
            return 1;
        } else
            return 0;
    }
    else if (m == 3) {
        if (strcmp(id, "user") == 0 && strcmp(password, "user02") == 0) {
            gotoxy(38, 16);
            printf("You Have Successfully Logged In : \" %s \" ", id);
            gotoxy(44, 20);
            printf("Press any key to continue .... ");
            getch();
            return 1;
        } else
            return 0;
    }
    else if (m == 4) {
        if (strcmp(id, "user") == 0 && strcmp(password, "user03") == 0) {
            gotoxy(38, 16);
            printf("You Have Successfully Logged In : \" %s \" ", id);
            gotoxy(44, 20);
            printf("Press any key to continue .... ");
            getch();
            return 1;
        } else
            return 0;
    }
		
        
    return 0;
}

