#include<stdio.h>
#define PRINT(x,str) ({\
printf("the number %d",x);\
printf(" is ");\
printf(#str);\
printf("");\
})
int main(){
	int x=10;
}

..........................................................


#include<stdio.h>
//example with macrocontination and stringis operator
#define message_for(a,b)\
printf(#a " " #a " and " #b ": Lets have fun!\n");

int main (void){
	message_for(Carole,Debra);
	return 0;
}

......................................................
#define tokenpaster(n) printf ("token" #n " =%d", token##n)//token34 =%d,token34 
int main(void){                                           // token34 =40
	int token34 =40;
	tokenpaster(34);
	return 0;
}











