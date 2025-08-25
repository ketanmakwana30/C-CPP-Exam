// check if a given number is Positive, Negative or Neutral using ladder if-else.

#include <stdio.h>

int main(){

    int a;

    printf("Enter A : ");
    scanf("%d",&a);

    if(a>0)
    {
        printf("A is Positive");
        
    }
    else if(a==0)
    {   
        printf("A is neutral");
        
    }
    else
    {
        printf("A is nagitive"); 
    }
   
    return 0;
}