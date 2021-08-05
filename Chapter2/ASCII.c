#include <stdio.h>

void main(){

    char x;
    int a=0;

    printf("Enter the value: ");
    scanf("%c",&x);



    if(a>65 && a<90)
    printf("Capital letter");

    elif(a>97 && a<122)
    printf("Lower letter");

    elif(a>48 && a<57)
    printf("Number");

    elif(a=90)
    printf("Special characters");
}