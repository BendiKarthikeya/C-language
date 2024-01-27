#include<stdio.h>
const int MAX=4;
int main(){
	char *names[] ={"Zara Ali","Hna Ali","Nuha Ali","abhi"};
	int i;
	int len=strlen(*names);//(*(names+3))=*names[3]
	printf("\n%d\n",len);//the length of 0th index is 8
	for(i=0;i<MAX;i++){
		printf("Valueof name [%d]=%s\n",i,names[i]);
	}
	return 0;
}