#include<stdio.h>
int main()
{
    char n;
    printf("enter no");
    scanf("%c",&n);
    if(n>='a' && n<='z')
    printf("lower case");
    else if(n>=65&&n<=90)
    printf("upper case");
    else if(n>='0'&&n<='9')
    printf("digit");
    else
    printf("special character");
    return 0;
}
