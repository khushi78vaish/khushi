/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int Alphabet(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}


void removealpha(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        
        if (Alphabet(str[i])) {
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    removealpha(str);
    
    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
