/* Write a c programme to print i am anilising programme properly only if the number is 7 if not display
 i have to practice more*/
#include<stdio.h>
int main(){
	int a;
	printf("value of a is ");
	scanf("%d",&a);
	if(a%2==0&&a%3==0){
		printf("It is divisible by both 2 and 3");
	}
	else{
		printf("I have to practice more");
	}
}