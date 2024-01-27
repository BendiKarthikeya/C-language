#include <stdio.h>
#define NOSCAN
int  main(){
int a=0;
#ifdef NOSCAN //value be true:1
a=6;
#else
printf("Enter a:");
scanf("%d",&a);
#endif
printf("Value of a :%d\n",a);
return 0;
}


...................................................

#include <stdio.h>
#define NOSCAN
int  main(){
int a=0;
#ifndef NOSCAN //value be true:0
a=6;
#else
printf("Enter a:");
scanf("%d",&a);
#endif
printf("Value of a :%d\n",a);
return 0;
}