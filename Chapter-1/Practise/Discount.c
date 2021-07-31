#include<stdio.h>

void main(){

    float price,dis=0,total;
    int qty;

    printf("Enter the quantity :");
    scanf("%d",&qty);
    printf("Enter the price :");
    scanf("%f",&price);

    if(qty>1000)    //Condition declaration
        dis=10;     //Exection of the condition statement    

    total=(qty*price)-(qty*price*dis/100);
    printf("The total expense: %f",total);
        
}