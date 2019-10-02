/*
Name :- Vinayak Sharma
SMVDU, Jammu ECE
code description - This code runs on the logic of while looping. the loop will take input and then store it into one variable until -1 is hit. it will also keep adding and storing the variable into a seprate variable s
if only 1 variable is entered the code will exit displaying 0 , if more than 2 it will display 1.
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
 
if (sum == 1){
	printf("0");
}
if (sum > 1){
	printf("1");
}
 
 return 0;
}
