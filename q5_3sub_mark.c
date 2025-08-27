// Find the average of three subject marks of a student (out of 100).

#include <stdio.h>

int main(){
            
    float math, english, science ,average;

    printf("Enter math mark : ");
    scanf("%f",&math);

    printf("Enter english mark : ");
    scanf("%f",&english);

    printf("Enter science mark : ");
    scanf("%f",&science);

    average= ( math + english + science ) / 3;

    printf("Average mark is : %0.2f",average);

    return 0;
}