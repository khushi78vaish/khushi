/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,s;
    printf("enter a digit");
    scanf("%d",&n);
    s=sum(n);
    printf("sum of digits %d",s);
    return 0;
}
int sum(int n)
{
    int num =0,s=0;
    while (n!=0){
        num =n%10;
        s=s+num;
        n=n/10;
    }
    return s;
}



