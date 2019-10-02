/*
Name :- Vinayak Sharma
SMVDU, Jammu ECE
code description - finding the bigger increasing or decreasing sequence
*/
#include <stdio.h>
int main()
{
 int curr;
 int prev;
 int sum=0;
 
 scanf("%d", &prev);
 
if (prev != -1)  // if the first number is -1 we will exit the loop
{
  sum = 1;
  
    scanf("%d", &curr);
    
 while (curr != -1)  // again if the 2nd number is -1 we will exit the loop
 {
  if (prev==curr){
  	sum = sum - 1;
  }	
  sum++;
  prev = curr;
  scanf("%d", &curr);
 }
} else
  {
   sum = 1;
  }
 
 printf("%d", sum);
 
 return 0;
}
