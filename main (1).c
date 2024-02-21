/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,f;
    printf("enter thre no.");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of no %d",f);
    if(f>25){
        printf("factorial is above 25");
    }
    else{
        printf("factorial is not above 25");
    }
    return 0;
}
int fact(int n)
{
    if(n>1){
        return n*fact(n-1);
    }
    else
        return 1;
}
