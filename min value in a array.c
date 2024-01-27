//minmum value in array

#include<stdio.h>
int minarry(int arr[],int size){
int min=arr[0];
	int i;
	for(i=1;i<size;i++){
		if(min>arr[i]){
			min=arr[i];
}
}
	return min;
}
	int main(){
	int i=0,min=0;
	int numbers[]={4,5,7,3,8,9};
		
	min=minarry(numbers,6);
	printf("The min value is %d",min);
	return 0;
	
}