#include<stdio.h>
void main()
{int i,j,k=1;
for(i=0;i<14;i++)
{for(j=0;j<i;j++)
{printf("%d\t",k);
k++;
}
printf("\n");
}
}
