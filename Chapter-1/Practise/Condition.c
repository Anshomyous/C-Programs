#include <stdio.h>

void main(){

    float m1,m2,m3,m4,m5,per;

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

    per=(m1+m2+m3+m4+m5)/500*100;

    if(per>=60)
        printf("First division");
    
    else{
        if(per>=50)
        printf("Second division");

        else{
            if(per>=40)
                printf("Third Division");
            else
                printf("Failed!!!");
            
        }

        }
}