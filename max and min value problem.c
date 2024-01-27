/*write a c program which provides  max and min value among four integers variables scanned using function*/
#include <stdio.h>
int main(){
	int a,b,c,d,max,min;
	
	scanf("%d%d%d%d",&a,&b,&c,&d);
    max=a;
     
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	printf("max is %d",max);
	
	min=a;
     
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	printf("\n13min is %d",min);
	
	
	return 0;

}
