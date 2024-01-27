/*write a program which scan n element of array and as a resusts print elements that are
  greater or equal to scannned variable in a array.*/

#include<stdio.h>
int main(){
	int n,i;
	printf("value of n :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of n");
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	 }
	printf("Enter the value of a ");
		scanf("%d",&a);
	for (i=0;i<n;i++){
			if(a[i] >= a){
				printf("%d",a[i]);
			}
			else{
				printf("it is not %d\n",a[i]);
			}
		}
	 
	 
 		 
}