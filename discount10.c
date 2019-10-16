#include<stdio.h>
void main()
{int quantity ,discount;
float rate,total;
printf("enter quantity and rate");
scanf("%d%f",&quantity,&rate);
if(quantity>1000)
discount=10;
else discount=0;
total=(quantity*rate)-(quantity*rate*total*1/100);
printf("total expense=%f",total);
}
