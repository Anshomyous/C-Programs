#include <stdio.h>

void main(){

    char x;
    

    printf("Enter the value: ");
    scanf("%c",&x);



    if(x>=65 && x<=90)
    printf("Capital letter\n");

    else if(x>=97 && x<=122)
    printf("Lower letter\n");

    else if(x>=48 && x<=57)
    printf("Number\n");

    else
    printf("Special character\n");
    system("pause");
    
    
}