#include<stdio.h>
int main(){
	char a[100];
	gets(a);
	int count=0;
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]!=32){
			count++;
		}
	}
	printf("Number words without spaces %d",count);
}