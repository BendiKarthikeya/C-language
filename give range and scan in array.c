#include<stdio.h>

void fun(int arr[],int n){
	int i;
	printf("Scan array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	printf("Result after scanning is \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n;
	printf("Enter the numbers of elements to be there in an array :");
	scanf("%d",&n);
	int arr[n];
	fun(arr,n);
	return 0;
	}