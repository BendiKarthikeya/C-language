/*#include<stdio.h>
//write program 11+22+33+---------n(n not greater than 100) 
int main(){
int a=1,b,sum=0;
while(a<10){               
	b=a+a*10;
	sum=sum+b;
	a++;
	}
	printf("%d",sum);
}*/

#include<stdio.h>
//111+211+311+411+511+---------------n(n not greater than 1000)
int main (){
	int n;
	printf("value of n");
	scanf("%d",&n);
	int i,sum=0;
	if(n<1000){
		for(i=111;i<=n,i+=100){
			sum+=i;
		}
		printf("%d",sum);
	}
	
	
}