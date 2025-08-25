// find the minimum of two numbers using if-else.

#include <stdio.h>

int main(){

    int a,b;

    printf("Enter two No : ");
    scanf("%d%d",&a,&b);

    if(a<b){
        printf("A is Minimum number");
    }else{
        printf("B is Minimum number");
    }

    return 0;
}