/* fibonacci series */
#include <stdio.h>
void main()
{
int i,t1=0,t2=1,nexterm;
printf("fibonacci series");
for(i=1;i<=50;i++)
{ printf("%d",t1);
nexterm=t1+t2;
t1=t2;
t2=nexterm;
}
}
