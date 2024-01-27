#include<stdio.h>
int main(){
	int a=10,b=20;
	add(&a,&b);
	}
	
void add(int *x,int *y){
	int res;
	res=*x+*y;
	printf("The addition is %d",res);
	}