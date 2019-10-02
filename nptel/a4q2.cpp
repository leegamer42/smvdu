#include <stdio.h>
int copy(int n){
    int ptr[n];
	int i=0;
	int j=0;
	int flag=0;
	flag=n;
	while(i<n){
		scanf("%d", &ptr[i]);
	j=0;
		while(j<i){	
			if(*(ptr+j)==*(ptr+i)){
				flag--;
				break;
			}
			j++;
		}
		i++;
	}

	return flag;
}			
int main()
{
	int n;
	scanf("%d", &n);
	int b;
	b=copy(n);
	printf("%d", b);
	return 0;
}
