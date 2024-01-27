#include<stdio.h>
int main(){
		int a,b,max,m=0;
		if(a>b){
			max=a;
		}
		else{
			max=b;
		}
	printf("Enter two elements:");
	scanf("%d%d",&a,&b);
	printf("Common factors are:");
	for(int i=1;i<max;i++){
		if(a%i==0 && b%i==0){
			if(i>m){
				printf(" %d ",i);
				m=i;
			}
		}
	}
	printf("\n The HCF of two numbers is %d",m);
}