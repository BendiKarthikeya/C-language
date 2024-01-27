#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int tempt = a[4];
    int i;
    for(i=4;i>0;i--){
        a[i]=a[i-1];
        
    }
        a[0]=tempt;
    for(int j=0;j<=4;j++){
        printf("%d\n",a[j]);
    }
    return 0;
    }
   
