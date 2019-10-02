/*

Name :- Vinayak Sharma

SMVDU, Jammu ECE

code description - To find the moving average of 3 numbers

*/
#include <stdio.h>
 float avg(float a,float b,float c){
 	float x;
 	x= (a + b + c)/3;
 	return x;
 }
 int main()
 {
 	float a;
 	float b;
 	float c;
 	float n;
 	float result;
 	
 	scanf("%f %f %f", &a,&b,&c);
 	
 	result = avg(a,b,c);
 	printf("%.1f", result );
 	
 	scanf("%f", &n);
 	
 	while(n != -1){
 		a=b;
 		b=c;
 		c=n;
 		
 			result = avg(a,b,c);
 			printf(" %.1f", result );
 		
 		scanf("%f", &n);
	 } 
	 return 0;
 }
