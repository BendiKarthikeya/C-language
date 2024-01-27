/*There are three students how have taken a c programme quiz then,Find the average of marks scored and also justify
who is greater with the result among the three students */
#include <stdio.h>
int main (){
	int a,b,c,avg;
	printf("value of a\n");
	scanf("%d",&a);
	printf("value of b\n");
	scanf("%d",&b);
	printf("value of c\n");
	scanf("%d",&c);
	avg=(a+b+c)/3;
	printf("average score of students is %d\n",avg);
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("all scores are equal ");
	}
	if(a>=b&&a>=c){
		printf("%d is greater \n",c);
	}
    if(b>=a&&b>=c)
	{
		printf("%d is greater \n",b);
	}  
    if(c>=b&&c>=a)
	{
		printf("%d is greater\n ",c);
	}
	
	
	
	
}