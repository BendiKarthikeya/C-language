// write a programme that counts number of a's in the given string
#include<stdio.h>
int main(){
	char a[100];
	printf("Enter the string a: ");
	gets(a);
	int i;
	int count;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a')
		{
			count++;
		}
	}
	printf("number of a's in the given string %d",count);
	return 0;
}