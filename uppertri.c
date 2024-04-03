/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,k=0,temp=0;
    printf("enter value of n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                v[k]=a[i][j];
                k++;
            }
            
        }
    }
    
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
        if(v[i]>v[j])
        {
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
        }
    }
    printf("%d",v[k-1]);

    return 0;
}
