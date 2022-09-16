/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i;
   printf("enter the no of month");
   scanf("%d",&i);
   if(i==1)
   printf("31");
   else if(i==2)
      printf("28 and 29 in leap years");
   else if(i==3)
   printf("31");
   else if(i==4)
   printf("30");
   else if(i==5)
   printf("31");
   else if(i==6)
   printf("30");
   else if(i==7)
   printf("31");
   else if(i==8)
   printf("31");
   else if(i==9)
   printf("30");
   else if(i==10)
   printf("31");
   else if(i==11)
   printf("30");
   else if(i==12)
   printf("31");
   else
   {
       printf("you have entered wrong no");
   }

    return 0;
}
