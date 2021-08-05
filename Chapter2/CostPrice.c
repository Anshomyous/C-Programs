#include <stdio.h>

void main(){

    float cp,sp,profit,loss;

    printf("Enter the cost price: ");
    scanf("%f",&cp);
    printf("Enter the sell price: ");
    scanf("%f",&sp);

    if(cp>sp){
        loss=cp-sp;
        printf("Loss is: %f",loss);
    }
    else{
        profit=sp-cp; 
        printf("You earned profit: %f",profit);
    }
}