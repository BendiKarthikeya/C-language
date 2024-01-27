#include<stdio.h>

int main()
{
    int a[6]={1,2,3,4,5};
    printf("%d",a[2]);
    printf("\n%d",a[5]);
    printf("\n%d",a[6]);
    printf("\n%d",a[10]);
    return 0;
}


/*output is 3
		  0
		  Grabage value
		  Grabage value*/
		  	
