#include<stdio.h>

void main(){

    float m1,m2,m3,m4,m5,agg,perc;

    printf("Enter the Science marks: \n");
    scanf("%f",&m1);
    printf("Enter the Maths marks: \n");
    scanf("%f",&m2);
    printf("Enter the Computer marks: \n");
    scanf("%f",&m3);
    printf("Enter the SST marks: \n");
    scanf("%f",&m4);
    printf("Enter the English marks: \n");
    scanf("%f",&m5);

    agg = (m1+m2+m3+m4+m5)/5;
    perc = (m1+m2+m3+m4+m5)/500 * 100;
    printf("The aggerate marks: %f\n",agg);
    printf("The percentage obtained: %f",perc);

}