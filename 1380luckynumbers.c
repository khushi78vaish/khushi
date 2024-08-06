/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, m;
    printf("enter no of rows");
    scanf("%d",&m);
    printf("enter no of column");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int  min, mim[m];
    for(int i=0;i<m;i++)
    {
        min=a[i][0];
        for (int j = 1; j < n; j++) {
            if (a[i][j]<min) {
                min = a[i][j];
            }
        }
        mim[i]=min;
        min=0;
        
    }
    /*for(int i = 0;i<m;i++)
        printf("%d\n",mim[i]);*/
        
    
    int  max, maxm[n];
    for(int j=0;j<n;j++)
    {
        min=a[0][j];
        for (int i = 1; i < m; i++) {
            if (a[i][j]>max) {
                max = a[i][j];
            }
        }
        maxm[j]=max;
        max=0;
        
    }
    /*for(int i = 0;i<n;i++)
        printf("\n%d",maxm[i]);*/
    
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(mim[i]==maxm[j]){
              printf("%d",mim[i]);
          }
        
        }
    }
    
    
    return 0;
}