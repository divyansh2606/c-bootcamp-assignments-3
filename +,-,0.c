/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    if(n>0)
    printf(" %d is positive no",n);
    else if(n<0)
    printf("%d is negative no",n);
    else
    printf("%d is zero no",n);
return 0;
}
