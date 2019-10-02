#include <stdio.h>

int word_test(char a){
	int count=0;
   	if ((a != ' ') && (a != ',') && (a != '\t') && (a != '.') && (a != ';')){
   		count=1;
	   }
	   return count;
}

int main()
{
    int c;
    int flag=0;
    int i=0;
   
    c = getchar();
    
    while ( c != EOF ) {
    	flag = flag + word_test(c);
    	
    	   	if ((c == ' ') || (c == ',') || (c == '\t') || (c == '.') || (c == ';')){
   		if (flag > 0){
   			i++;
   			flag=0;
		   }
	   }
    	
       c = getchar();
    }
    printf("%d", i);
    return 0;
}

