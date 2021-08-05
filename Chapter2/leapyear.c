#include <stdio.h>

void main(){

    int yr;

    printf("Enter the year: ");
    scanf("%d",&yr);

    if(yr%4==0)
        printf("Leap Year: ");
    else
        printf("Not a Leap Year");
}