/* write a c programme which scan the integer variable it the value is divisible by 2 incriment that value by 1 if not 
sutract the value by 1*/
#include <stdio.h>
int main(){
	int a;
	printf("value of a :");
	scanf("%d",&a);
	if(a%2==0){
		a=a+1;
		printf("value of a is %d ",a);
	}
	else{
		a=a-1;
		printf("value of a is %d ",a);
	}
	
}