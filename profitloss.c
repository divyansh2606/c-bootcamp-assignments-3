#include<stdio.h>
int main()
{
   int c,s,profit;
    printf("enter cost price");
    scanf("%d",&c);
    printf("enter selling price");
    scanf("%d",&s);
    profit=(s-c*100)/c;
    if(profit>0)
    printf("profit is %d %",profit);
    else if(profit<0)
    printf("loss is %d % ",profit);
    else
    printf("no profit no loss");
    return 0;

}
