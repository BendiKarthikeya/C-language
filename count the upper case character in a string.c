//write a proramme to count the upper case character in a string and print it

#include<stdio.h>
#include<string.h>
int main(){
	int i,j,count;
	char a[1000];
	printf("Enter a string: ");
    gets(a);
    int len=strlen(a);
	for(i=0;i<=len;i++){
		if(a[i]>=65 && a[i]<=90){
			count++;
			}
	}

	printf("no of letters %d",count);
}