#include<stdio.h>
int main(){
int n;
	printf("Number of elements:");
	scanf("%d",&n);
	 int a[n-1];
	 for(int i=0;i<6;i++){
	 
	 scanf("%d",&a[i]);
	 }
	int max,min;
	max=a[0];
	for(int i=0;i<6;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Maximum element is : %d\n",max);
		min=a[0];
	for(int i=0;i<6;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Minimum element is : %d\n",min);
	
}