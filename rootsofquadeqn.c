#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter values");
    scanf("%d%d%d",&a,&b,&c);
    int disc=b*b-4*a*c;
    if(disc>0)
    printf("roots are real and distinct");
    else if(disc<0)
    printf("roots are imaginary");
    else
        printf(" roots are real and equal");
    return 0;
}
