//write a c programe to scan a string and as a restult skip the vowels while printing the string

#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("Enter the string: ");
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'){
			printf("%c",a[i]);
		}
	}
}