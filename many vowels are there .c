//write a c programming scan a string and find how many vowels are there 

#include <stdio.h>

int main() {
    char a[1000];
    printf("Enter a string: ");
    gets(a);

    int count = 0, i, j;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};

    for (i = 0; a[i] != '\0'; i++) {
        for (j = 0; vowels[j] != '\0'; j++) {
            if (a[i] == vowels[j]) {
                count++;
                break;  // Break the inner loop as soon as a vowel is found
            }
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}