


#include <stdio.h>

int main()
{ int h,m,s,ss,e;
 printf("enter marks of 5 subjects");
 scanf("%d%d%d%d%d",&h,&m,&s,&ss,&e);
 if(h>32&&e>32&&s>32&&m>32&&ss>32)
 printf("candidate is passed");
   else
   printf("candidate is failed");
    return 0;
}
