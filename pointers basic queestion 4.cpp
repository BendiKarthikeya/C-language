#include<stdio.h>
 const int MAX=3;
 
 int main(){
 	int var[]={10,100,200};
 	int i,*ptr[MAX];
 	
 	for(i=0 ;i<MAX;i++){
 		ptr[i]=&var[i];// assign the address of integer.
	 }
	 for(i=0 ;i<MAX;i++){
 		printf("Value of var[%d]=%d\n",i,*ptr[i]);// assign the address of integer.
	 }
	 return 0;
 }
 
 
 ......................................................................
 
 
#include<stdio.h>
const int MAX=3;
 
 int main(){
 	int var[]={10,100,200};
 	int i,*ptr[MAX];
 	
 	for(i=0 ;i<MAX;i++){
 		ptr[i]=var;// assign the address of integer.(her "var" means 0th index means &var[0])
	 }
	 for(i=0 ;i<MAX;i++){
 		printf("Value of var[%d]=%d\n",i,*ptr[i]);// assign the address of integer.
	 }
	 return 0;
 }