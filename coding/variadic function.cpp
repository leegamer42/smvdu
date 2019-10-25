#include <stdarg.h>
#include <stdio.h>

int add(int agrs,...)
{
	va_list ap;
	va_start(ap,agrs);
	
	// main process
	int i=0,sum=0;
	for(i=0;i<agrs;i++)
	{
		sum+=va_arg(ap, int);
	}
	
	va_end(ap);
	return sum;
}
int main()
{
	printf("%d",add(3,1,2,3));
	return 0;
}
