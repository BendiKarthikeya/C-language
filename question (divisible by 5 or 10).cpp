#include<stdio.h>
int main(){
	int a;
	printf("value of a");
	scanf("%d",&a);
	if(a%10==0){
		printf("a is divisible by 5 or 10");
	}
	else{
		printf("a is not divisible by 10 or 5");
	}
	return 0;
}