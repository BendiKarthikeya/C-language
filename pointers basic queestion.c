#include<stdio.h>
void main(){
	int a[]={1,2,3,4};
	int *p,*q;
	p=a;//means p=a[0]=1
	q=&a;//means q=a[0] address
	printf("%d\n",*(p+2));// a[0]+2=1+2=3
	printf("%d\n",*(q+3));//a[(q=0)+3]=a[3]=4

}