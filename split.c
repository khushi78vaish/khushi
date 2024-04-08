/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


void splitString(char *str) {
    int i, j, start = 0;
    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ' ') {
            for (j = start; j < i; j++) {
                printf("%c", str[j]);
            }
            printf("\n");
            start = i + 1;
        }
    }
    
    for (j = start; str[j] != '\0'; j++) {
        printf("%c", str[j]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    printf("Words in the string:\n");
    splitString(str);
    
    return 0;
}
