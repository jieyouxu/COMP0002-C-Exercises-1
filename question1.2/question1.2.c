// Written by Jieyou Xu on 2018-10-04
// This program displays the address of the CompSci department.

#include <stdio.h>
#include <string.h>

void printReverseString(char*);

int main(void) {
    char departmentName[] = "Dept. of Computer Science";
    char address_line_1[] = "Malet Place Engineering Building";
    char address_line_2[] = "University College London";
    char address_line_3[] = "Gower Street, London, WC1E 6BT";
    printf("The address of the %s is:\n", departmentName);
    printf("%s\n", address_line_1);
    printf("%s\n", address_line_2);
    printf("%s\n", address_line_3);

    printReverseString(address_line_3);
    printReverseString(address_line_2);
    printReverseString(address_line_1);
    printReverseString(departmentName);

    return 0;
}

void printReverseString(char* str) {
    int index = strlen(str) - 1;
    while (index > -1) {
        printf("%c", str[index]);
        index--;
    }
    printf("\n");
}