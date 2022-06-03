#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int c;
    FILE* fp;

    fp = fopen("file.txt", "r");

    if (fp) {
        while (feof(fp) == 0) {
            c = getc(fp);
            putchar(c);
        }
    } else {
        perror("File opening failed");
    }
        
    fclose(fp);

    _getch();
    return 0;
}