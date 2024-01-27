//caluculate number of spaces
#include<stdio.h>
#include<string.h>
int main(){
	
	char a[1000];
	int count=0;
	printf("Enter the string");
	gets(a);
	int  len=strlen(a);
	for (int i=0;i<=len;i++){
		if(a[i]==32){
			count++;
		}
	}
	
	printf("no of spaces %d",count);
}