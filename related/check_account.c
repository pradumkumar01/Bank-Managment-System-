#include "edit.c"

int chkacc(int a) {
    FILE *f;
    f = fopen("record.bin", "rb");

    while (!feof(f)) {
        fread(&rec, sizeof(rec), 1, f);

        if (a == rec.account) {
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

