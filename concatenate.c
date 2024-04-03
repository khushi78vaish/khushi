/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void concatenateStrings(char str1[],  char str2[]) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int i, j = 0;

    // Find the end of str1
    for (i = 0; str1[i] != '\0'; i++) {}

    // Copy str2 to the end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    // Add null terminator to mark end of concatenated string
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);
    //fgets(str1, sizeof(str1), stdin);
    //str1[strcspn(str1, "\n")] = '\0'; // remove trailing newline character

    printf("Enter the second string: ");
    gets(str2);
    //fgets(str2, sizeof(str2), stdin);
    //str2[strcspn(str2, "\n")] = '\0'; // remove trailing newline character

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}


