/*
Name :- Vinayak Sharma
SMVDU, jammu ECE
code description:- This code will compare the entered input numbers. if a number is repeated more than once the output will be 0 and if all the numbers are different the output will be 1.
*/
#include <stdio.h>
int main()
{
    int a, b, c,d;
    scanf("%d", &a); /*this will input the first number*/
    scanf("%d", &b); /*this will input the second number*/
    scanf("%d", &c); /*this will input the third number*/
    d=((a==b)||(b==c)||(c==a))?0:1;
    printf("%d",d);

    return 0;
}
