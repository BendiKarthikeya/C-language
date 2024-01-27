#include<stdio.h>
int main(){
int a,x,sum=0,b;
printf("enter the number: ");
scanf("%d",&a);
b=a;
while(b>0){
    x=b%10;
    sum=(sum*10)+x;
    b=b/10;
}
if(a==sum){
printf("It is a palindrome");
    
}
else{
    printf("it is not palindrome");
}
    return 0;
}