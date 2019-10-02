#include <stdio.h>
int main()
{
	char string[100];
	
	int i;
	for(i=0;i<100;i++)
	{
		scanf("%c", &string[i]);
		}
	int flag=0;
	int a=0;
	for(i=1;i<100;i++){
	    if (*(string + a)==*(string+i))
	    {
	    	a++;
	    	i++;
	    	flag++;
	    	for(;*(string+a)==*(string+i);i++,a++)
	    	{
	    		flag++;
			}
			if(*(string+a)==*(string+i)){
				break;
			}
	    	
		}
		if (i==100){
			a++;
			i=a+1;
			continue;
		}
	}
	if(flag==0){
		printf("NO");
	}else{
	for(i=0;i<flag;i++)
	{
		printf("%c", string[i]);
	}}
	return 0;
}
