#include <stdio.h>

void main(){

    float har,car,ten,x,y,z;

    printf("Enter the hardness: ");
    scanf("%f",&har);
    printf("Enter the carbon content: ");
    scanf("%f",&car);
    printf("Enter the tensile strength: ");
    scanf("%f",&ten);

    x=har>=50; //Codition (i)
    y=car<=0.7; //Condition (ii)
    z=ten>=5600; //Condition (iii)

    if(x && y && z)
    printf("Grade 10\n");
    
   else if(x && y && !z)
    printf("Grade 9\n");
   else if(y && z && !x)
    printf("Grade 8\n");
   else if(x && z && !y)
    printf("Grade 7\n");
   else if(x || y || z)
    printf("Grade 6\n");
   else  
    printf("Grade 5\n");

    syatem("pause");


    
}