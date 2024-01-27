//if it is dublilicate print it 
#include<stdio.h>
int main(){
	int n,i,b,c;
	printf("value of n :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	 }
	 for(b=0;b<=n;b++){
	   for(c=b+1;c<n;c++){
	 		if(a[b]==a[c])
			 {
	 			printf("the value is %d\n",a[b]);
	 			break;
	 			
				 }
	 			
				 }
			 }
		 }
	 
