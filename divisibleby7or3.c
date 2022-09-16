#include<stdio.h>
int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    if(n&7==0||n%3==0)
    printf("no is divisible by 7 or 3");
    else
    printf("no is not divisible by 7 or 3");
    return 0;

}
