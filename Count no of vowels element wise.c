//Count no of vowels element wise


#include<stdio.h>
int main() {
    char a[1000];
    int counta= 0,counte= 0,counti= 0,counto= 0,countu= 0,i,count;
    printf("Enter a string: ");
    gets(a);
 for (i = 0; a[i] != '\0'; i++) {
        (a[i]=='a'||a[i]=='A') ? ++counta:
		(a[i]=='e'||a[i]=='E') ? ++counte:
		(a[i]=='i'||a[i]=='I')? ++counti:
		(a[i]=='o'||a[i]=='O')? ++counto:
		(a[i]=='u'||a[i]=='U')? ++countu : 0;
		 }
            
        

    printf("Number of a: %d\n", counta);
     printf("Number of e: %d\n", counte);
      printf("Number of i: %d\n", counti);
       printf("Number of o: %d\n", counto);
        printf("Number of u: %d\n", countu);

    return 0;
}