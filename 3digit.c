#include<stdio.h>
int main()
{
    int x=9999;
    if(x<999&x>99)
    {
        printf("no is 3 digit");
    }
    else if(x<100)
        printf("no is 2 digit");
    else
        printf("no is 4 digit");

    return 0;
}
