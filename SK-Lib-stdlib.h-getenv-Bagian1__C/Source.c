#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* pPath;
    pPath = getenv("PATH");

    if (pPath != NULL) {
        printf("The current path is: %s", pPath);
    }
        
    _getch();
    return 0;
}