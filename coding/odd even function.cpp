#include <stdio.h>

int find_even(int k){
	int res;
	int c=0;
	res = k%2;
	if (res == 0){
		c = 1;
	}
	return c;
}
int main()
{
	int a=0;
	int b=0;
	int flag=0;
	int final=0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	while (b != -1){
		
		flag = flag + find_even(b);
		
		if (flag == a){
			final = b;
		}
		
		scanf("%d", &b);
	}
	
	if (final == 0){
		printf("%d", b);
	}else{
		printf("-1");
		
	}
	return 0;
}
