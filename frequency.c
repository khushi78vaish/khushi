/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
void HighestFrequency(char *str);
int main() 
{
    char str[20];
    fgets(str,20,stdin);
    HighestFrequency(str);
    return 0;
}
    void HighestFrequency(char *str)
    {
    int c,c1=0,l=0,i,j;
    char ch;
    l = strlen(str);
    for(i=0;i<l;i++)
    {
        c = 0;
        if(str[i]!=' ') 
        { 
            for(j=i+1;j<l;j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                }
            }
            if(c>c1)
            { 
                c1=c;
                ch=str[i];
            }
        }
    }
    printf("Highest frequency character appers in a string is %c", ch);
}