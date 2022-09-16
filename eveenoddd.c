#include<stdio.h>
 int main()
 {
     int n,result;
     printf("enter no");
     scanf("%d",&n);
     result=n&1;

     if(result==0)
        printf("even no");
     else
        printf("odd no");
     return 0;
 }

