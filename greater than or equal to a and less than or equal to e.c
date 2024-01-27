//write a c programme to scan a string and print those characters of string where the character lies greater than or equal to a 
//and less than or equal to e

#include<stdio.h>
int main(){
	char a[100];
	printf("Enter the string: ");
	gets(a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='a'&&a[i]<='e'){
			printf("%c",a[i]);
		}
	}
	
	
}

..................................................

#include<stdio.h>
int main(){
	char a[100];
	printf("Enter the string: ");
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]>=97&&a[i]<=101){
			printf("%c",a[i]);
		}
	}
	
	
}