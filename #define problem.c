#include<stdio.h>
#define h 10
#define sq(a) (a*a)
int main(){
	int x;
	printf("Enter the value of x");
	scanf("%d",&x);
	printf("Square is %d\n\n ",sq(x));//in place of sq(x) it will come only a*a it becomes a*a.
	printf("value of res:%d",h*5);// if it is sq(x)/x	then it is x*x/x
}

...........................................