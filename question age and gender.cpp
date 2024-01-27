#include<stdio.h>
int main(){
	char g;
	char M,F,T;
	int age;
	printf("value of age ");
	scanf("%d",&age);
	printf("\nthe gender is");
	scanf("%c",&g);
	if('g'=='M'||'g'=='F'||'g'=='T'){
		if(age>=58)
		{
			if(age>=58){
				printf("After Disc :%f",0.9*M);
			}
			else{
				printf("Age is less than 58");
			}
		}
		else
		printf("Gender Invalid");
	}
	return 0;
}