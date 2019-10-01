#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the kangaroo function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
int kangaroo(int x1, int v1, int x2, int v2) {
for(;;)
{
    x1=x1+v1;
    x2=x2+v2;
    if(x1==x2){
        printf("No");

    }
    if((x1<x2)&&(v1<v2)){
        printf("No");

    }
        if((x1>x2)&&(v1>v2)){
        printf("Yes");
    }
}

}

int main()
{
    int x1,v1,x2,v2;
    printf("enter the starting point of 1st kangaroo:");
    scanf("\n%d", &x1);
        printf("enter the speed of first kangaroo:");
    scanf("\n%d", &v1);
        printf("enter the starting point of 2nd kangaroo:");
    scanf("\n%d", &x2);
        printf("enter the speed of second kangaroo:");
    scanf("\n%d", &v2);
    kangaroo(x1,v1,x2,v2);
    return 0;
}
