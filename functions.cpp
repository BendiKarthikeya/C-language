/* #include <stdio.h>
int main(){
	printf("i am main\n");
	
	main();
	return 0;
} 

output is i am main infinite times

*/ 

#include <stdio.h>
int main(){
	//Declare a static variable 
	static int a=10;
	//means a will decrease
	
	if (a>0){
		printf("%d\t",a);
		a--;
		main();
	}
}