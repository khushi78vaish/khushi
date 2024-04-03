/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
//#define MAX_LENGTH 100 // Maximum length of the input string

int main() {
    char str[100];
    char substr[100];
    int i, j, found;

    // Input the string
    printf("Enter a string: ");
    //gets(str);
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Input the substring to search for
    printf("Enter the substring to search for: ");
    //gets(substr);
    fgets(substr, sizeof(substr), stdin);

    // Remove newline character from fgets
    substr[strcspn(substr, "\n")] = '\0';

    // Loop through the string to find the substring
    for (i = 0; str[i] != '\0'; i++) {
        found = 1;
        for (j = 0; substr[j] != '\0'; j++) {
            if (str[i + j] != substr[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            printf("Substring found at index %d in the string.\n", i);
            return 0;
        }
    }

    printf("Substring not found in the string.\n");
    return 0;
}

