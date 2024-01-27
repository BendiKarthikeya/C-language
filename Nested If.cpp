#include<stdio.h>
int main(){
	int a;
	printf("value of a ");
	scanf("%d",&a);
	if(a<10)
	{
		printf("%d is less than 10\n",a);
		if(a==5){
			printf("\nIt is 5 ");
		}
	}
	else {
		printf("it is greater than 10");
	}
}