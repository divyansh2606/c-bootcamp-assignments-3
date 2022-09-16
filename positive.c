#include<stdio.h>
int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    if(n>0)
     printf("positive no");
     else if(n<0)
        printf("negative no");
     else
     {
         printf("no is zero");
     }
     return 0;
}
