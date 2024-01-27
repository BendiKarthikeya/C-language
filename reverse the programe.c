#include<stdio.h>
int sd();
int dig;
int main(){
	int a,x,b,sum=0,z;
	printf("Take three digit numbers: ");
	scanf("%d",&a);
	b=a;
while(b>0){
    x=b%10;
    sum=(sum*10)+x;
    b=b/10;
}
printf("Reverse of the digit is :%d\n",sum);
if(sum>a){
	z=sum-a;
	printf("Value of difference %d\n",z);
	}
	else{
		z=a-sum;
		printf("Value of difference %d",z);
	}
	dig = sd(z);
	printf("\nMagic number is : %d",dig);
}
int sd(int z){
	int s=0;
	while(z>0){
		s=s+z%10;
		z=z/10;
	}
	return s;
}