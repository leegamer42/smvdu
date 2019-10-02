#include <stdio.h>
int collatz(int n, int count)
{
	if(n==1){
		return count;
	}
	if(n%2==0){
		n=n/2;
		count++;
	}else if(n%2!=0){
		n=3*n+1;
		count++;
	}
    return collatz(n,count);
}
int main()
{
	int n,flag;
	scanf("%d", &n);
	flag=collatz(n,0);
	printf("%d", flag);
	return 0;
}
