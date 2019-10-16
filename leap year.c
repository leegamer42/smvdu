#include<stdio.h>
/*finding weather a year is leap year or not*/
int main()
{int a,b;
printf("enter a year");
scanf ("%d",&a);
a=b%4;
if(a==0)
printf("the year is leap year");
else
printf("the year is ordinary");
return 0;
}
