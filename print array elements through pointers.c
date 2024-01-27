#include<stdio.h>
int main(){
int number[3]={1,2,3};
int *p1,*p2,*p3;
p1=&number[0];
p2=&number[1];
p3=&number[2];
printf("%d ",*p1);
printf("%d ",*p2);
printf("%d ",*p3);
}

............................................

#include<stdio.h>
int main(){
    int number[3]={1,2,3};
    int *p;
    for(int i=0;i<3;i++){
     p=&number[i];
     printf("%d ",*p);
    
}
}