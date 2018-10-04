// Written by Jieyou Xu on 2018-10-04
// This program displays my name.

#include <stdio.h>
#include <string.h>

int main(void) {
    char myName[] = "Joe";
    printf("Hello, my name is %s\n", myName);

    int index = strlen(myName) - 1;
    while (index > -1) {
        printf("%c", myName[index]);
        index--;
    }
    printf("\n");

    return 0;
}