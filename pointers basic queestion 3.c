#include<stdio.h>
void main(){
	char a[]="quiz";
	
	int *p;
	int len=strlen(a);
	
	p=&len;
	
	printf("%c",a[*p-2]);//(*p=4)-2=2 , a[2]=i
}