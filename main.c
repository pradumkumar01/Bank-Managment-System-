#include "related\admin.c"

int main() {
    system("color 1");
    printf("\n\n\n\t\t\t\t======================================================================");
    gotoxy(43, 4);
    printf(" ******** WELCOME TO OUR BANKING SYSTEM ******** ");
    printf("\n\t\t\t\t======================================================================\n\n");
    gotoxy(50, 8);
    printf("\t ACCOUNT TYPE");
    gotoxy(54,9);
    printf("------------------");
    gotoxy(44, 11);
    printf("[1]. ADMINISTRATOR ");
    gotoxy(44, 12);
    printf("[2]. USER 1");
    gotoxy(44, 13);
    printf("[3]. USER 2");
    gotoxy(44, 14);
    printf("[4]. USER 3");
    gotoxy(44, 17);
    printf("Enter Your Choice :  ");
    printf("\n\t\t\t\t======================================================================\n\n");
	gotoxy(64,17);   
    scanf("%d", &m);
    if (m != 1 && m != 2 && m!=3 && m!=4) 
		{
        system("cls");
        main();
    	}
    system("cls");
    admin();
    return 0;
}

