/* 
Name :- Vinayak Sharma
SMVDU, jammu ECE
code description:- This code will compare the entered input numbers. if a number is repeated more than once the output will be 0 and if all the numbers are different the output will be 1.
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a); /*this will input the first number*/
    scanf("%d", &b); /*this will input the second number*/
    scanf("%d", &c); /*this will input the third number*/
    
    if ((a == b) || (b == c) || (a == c)) /*if statement with OR operator which will check if 2 or more numbers are same*/
                                         {
                                            printf("0"); /* this will print 0 */
                                         }
    else   /* if no number is identical this else statement will run and display the result as 1 */
            {
                printf("1"); /* this will print 1 */
            }
    return 0;
}
