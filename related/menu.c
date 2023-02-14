#include "option.c"

void menu() { 
    system("CLS");
    printf("\n\n\t\t\t\t======================================================================");
    gotoxy(48, 4);
    printf("********** WELCOME TO MAIN MENU **********");
    printf("\n\t\t\t\t======================================================================\n\n");
    gotoxy(44, 8);
    printf("[1]. View Customer Accounts");
    gotoxy(44, 9);
    printf("[2]. Customer Account Registration");
    gotoxy(44, 10);
    printf("[3]. Edit Customer Account");
    gotoxy(44, 11);
    printf("[4]. Delete Customer Account");
    gotoxy(44, 12);
    printf("[5]. Search Customer Account");
    gotoxy(44, 13);
    printf("[6]. Transaction");
    gotoxy(44, 14);
    printf("[7]. Log Out !!! ");
    gotoxy(44, 15);
    printf("[8]. About US ");
    gotoxy(43, 20);
    printf("Please Enter Your Choice : ");
    printf("\n\t\t\t\t======================================================================\n\n");
    gotoxy(70,20);
	option();
    
}

