/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) 
                break;
        }
        if (i == j) 
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printUniqueElements(arr, size);

    return 0;
}
