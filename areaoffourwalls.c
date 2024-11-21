#include<stdio.h>
float area(int,int,int);

int main(){
    float l,b,h;
    printf("Enter length, breadth and height of the wall: ");
    scanf("%f%f%f",&l,&b,&h);

    float a = area(l,b,h);
    printf("The area of four wall is %f",a);
    /* we can also write directly like  
    printf("The area of four wall is %f",area(l,b,h));
    l,b,h are the value which will be passed to the function for doing the calculation
    */
}

float area(int a, int b, int c){
    //the value of l,b,h will be passed in a,b and c respectively
    float area = 2 * h * (l+b);
    return area; 
    /*we can directly return only value without making a variable
     i.e return 2*h*(l+b);
    */
}
