#include<stdio.h>
int main(){
	int a,b,m=0;
	int c[100];
	printf("Enter two elements:");
	scanf("%d%d",&a,&b);
		printf("Common factors are:");
	for(int i=1;i<=a;i++){
		if(a%i==0){
			for(int j=1;j<=a;j++){
				if(b%j==0){
					if(i==j){
					if(i>m){
				printf(" %d ",i);
				m=i;
		}		    
		}
		}
		}
		}
		}
	printf("\n The HCF of two numbers is %d",m);
    	}

		
						
			
