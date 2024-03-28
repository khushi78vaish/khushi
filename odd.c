/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,even[100],odd[100],j,k;
    printf("enter no of elemnts");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of arrays");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    printf("the even elements are");
    for(int i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("the odd elements are");
    for(int i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    
    return 0;
}
