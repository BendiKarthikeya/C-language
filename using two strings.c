#include<stdio.h>
#include<string.h>
int main(){
	char a[]="pwioi";
	printf("%s",a);
	char b[]=" hello";
	printf("%s",b);
}


//both are differently print because string in combined has default end \0

#include<stdio.h>
#include<string.h>
int main(){
	char a[]="pwioi";
	printf("%s",a);
	char b[]={'h','e','l','l','o'};
	printf("%s",b);
}