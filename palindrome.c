/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int palindrome(int)
int check(int[], int)
int main()
{
    int a[5]={121,55, 33.848,89},c;
    c=check(a,5);
    printf("the no of alindrome are %d",c);
    return 0;
}
int check(int b[], int n)
{
    int i,c;
    for (i=0;i<n;i++)
    {
        if(palindrome(b[i]))
            c++;
    }
    return c;
}
int palindrome(int x)
{
    int a, rev=0;
    a=x;
    while(x!=0)
    {
        rev= rev*10+x%10;
        x=x/10;
    }
    if(rev==a)
        return 1;
    else
        return 0;
}

