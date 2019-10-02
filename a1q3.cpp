/* name: Vinayak Sharma
SMVDU, Jammu ECE
code description: user enters 3 numbers. the 3 numbers get compared, and displays which no. is greatest */
#include <stdio.h>
int main()
  
{
  int a, b, c;
  printf("Enter any 3 nos."); 
  scanf("%d%d%d", &a,&b,&c); //this will input a,b and c all at the same time  
  if (a>b && a>c)//checks for a
  {
    printf("%d is the greatest no.",a);
  }
  else if(b>a && b>c )//if the statement holds false then this else statement will be displayed
  { 
    printf("%d is the greatest no.",b);
  }
  else if(c>a && c>b)
  {
  	printf("%d is the greatest no.",c);
  }

  return 0;
}

