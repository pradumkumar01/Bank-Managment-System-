#include "view.c"

void option() {
    int i;
    scanf("%d", &i);
    system("CLS");
    switch (i) {
        case 1:
            view();
            break;
        case 2:
            add();
            break;
        case 3:
            edit();
            break;
        case 4:
            del();
            break;
        case 5:
            search();
        case 6:
            transaction();
            break;
        case 7:
            menuexit();
            break;
        case 8:
            about();
            break;
        default:
            menu();
    }
}

