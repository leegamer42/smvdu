/* name: vinayak sharma
smvdu, jammu ECE
code description: user enters 3 numbers. the 3 numbers get compared, if a>b>c then result is diplayed as 1 or else 0. */
#include <stdio.h>
int main()
  
{
  int a, b, c;
  scanf("%d", &a); //this will input a
  scanf("%d", &b); //this will input b
  scanf("%d", &c); //this will input c
  
  if (( a>b ) && ( b>c ) && ( a>c )) // logical operation comparing the 3 numbers
  {
    printf("1");
  }
  else //if the statement holds false then this else statement will be displayed
  { 
    printf("0");
  }
  return 0;
}

  
