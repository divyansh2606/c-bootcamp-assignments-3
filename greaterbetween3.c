/******************************************************************************



Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int a,b,c;
    printf("enter values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    { if(a>c)
       printf("a is gratest");
       else
        printf("c is greatest");
    }
    else
    { if(b>c)
     printf("b is greatest");
     else
    printf("c is greatest");

    }

    return 0;
}
