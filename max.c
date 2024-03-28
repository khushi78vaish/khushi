/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,m;
    printf("enter no of rows");
    scanf("%d",&n);
    printf("enter no of column");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");   
        
    }
    int i = 0, j;
    int max = 0;
    int res[m];
    while (i < n)
    
    {
        for(j=0;j<m;j++)
        {
         if(a[i][j]>max)
            max=a[i][j];   
        }
        
        res[i] = max;
        max = 0;
        i++;    
    }
    
    for(int i = 0; i < n; i++)      
    {
       printf("Largest element in row %d is %d \n", i, res[i]);
    }
    return 0;
}
