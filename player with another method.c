#include<stdio.h>

int main(){
	char a[1000];
	char r[1000];

     
     printf("Number of runs :");
     gets(r);
     int len= strlen(r);
     int i;
     for(i=0;r[i]<='\0';i++){
	 
     	if(r[i]>=49&&r[i+1]>=48){
     	printf("%s has scored century\n",a);
     break;
	 }
	 else{
	 		printf("%s has not scored century\n",r);
	 		 break;
	 	
	 }
}
}
 