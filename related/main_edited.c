#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



void admin();// for admin
void login();//for login
void menu();//for menu
void transaction(); //for transcation
void option(); // for option
void menuexit(); // for menuexit
void chkblnc(); //for chkblnc
void deposit(); // for deposit
void withdrawl(); // for withdrawl
void search(); // for search
void search_acc(); // for search account
void search_name(); // for search name
void view();  /// for view account
void add(); // add account
void edit(); // for edit account
void del();
void about();

int verify(); //for verifying admin and user
int chkacc();

COORD coord = {0, 0};
int m,r; //m in main and r in record

char id[20], password[15];

struct record {
    char name[25];
    int account;
    char phone[15];
    char address[25];
    char email[35];
    char citiz[20];
    double blnc;
    char UserID[10];
} rec;

void gotoxy(int a, int b) {
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main();
void admin(); 
void login(); 


int verify();
void menu();

void option();
// function for viewing account details
void view();

void add();

int chkacc(int a);

void edit(); 
//function for deleting account
void del();


void search();

void search_acc();

void search_name();


void transaction();



void chkblnc();


// function for adding amount to a account
void deposit();

// function to withdraw amount from account
void withdrawl(); 

// function for logging out of the program.
void menuexit() ;
    

void about();
