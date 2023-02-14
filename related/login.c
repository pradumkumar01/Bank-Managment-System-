#include "verify.c"

void login() {
    int i = 0;
    char ch;
    gotoxy(44, 10);
    printf("Enter The Username : ");
    gotoxy(44,13);
    printf("\n\t\t\t\t======================================================================");
    gotoxy(65,10);
	scanf(" %[^\n]", id);
    gotoxy(44, 12);
    printf("Enter The Password : ");
    while((ch=_getch())!=13)
    {
    	password[i]=ch;
    	i++;
    	printf("*");
	}
    
}
