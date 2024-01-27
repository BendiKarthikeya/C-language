#include<stdio.h>
void main(){
	int a[]={1,2,3,4};
	char b[]={'q','u','i','z'};
	int *p;
	char *q;
	p=a;
	q=&b;
	printf("%d\n",*(p+2));// a[0]+2=1+2=3
	printf("%c\n",*(q+3));//a[(q=0)+3]=a[3]=z
}