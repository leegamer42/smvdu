/* Name :- Vinayak Sharma
SMVDU, jammu ECE
code description - to find wether the given matrix is triangular matrix or not
*/
#include <stdio.h>
int main()
{
	int j=0;
	int i=0;
	int n;
	int a;
	int b=0;
	int req=0;
	int max=0;
	int x=0;
	int y=0;
	int z=0;
	int flag1=0;
	int flag2=0;
	int res=0;
	
	scanf("%d", &n);
	
	req = (((n*n) - n)/2);   // both the formula will help us know the number of zeroes we require for getting the triangular matrix
	max = ((n*n) - n);
	
	while (j<n)       // this loop is for numbering the rows and columns
	{
	i=0;
		while (i<n)   // Main input of the matrix will go into this loop
		{
		scanf("%d",&a);
						if (i != j)   // for detecting values outside the diagonal
						{						
							if (a == 0)
							{								
								b = b + 1;  // every time we detect a zero we will store it in the b variable 
							}
							if (!(a == 0))     // for detecting the special case bug
							{
								x = i;
								y = j;
								z = y ;
								
								if ( x > z )
								{
									flag1 = flag1 + 1;
								}
								
								if ( x < z )
								{
									flag2 = flag2 + 1;
								}

							}
						}    
		i = i + 1;	
		}
	j = j + 1;
	}
	
if ((flag1 > 0) && (flag2 > 0))
{
	printf("no");
	b = -1;
}

if (!(b==-1))
{
		if ( b >= req)
			{
				printf("yes");
			}
		if ( b < req)	
			 {
				printf("no");
	 		 }
}
	return 0;	
}
