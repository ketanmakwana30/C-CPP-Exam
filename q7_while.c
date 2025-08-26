// print Print even no. from 1 to N using while loop.

#include <stdio.h>

int main() {
    int n,i=1;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    while (i<=n) {
        if (i % 2 == 0) {
            printf("This is Even No. %d\n",i);
        }
        i++;
    }
    return 0;
}