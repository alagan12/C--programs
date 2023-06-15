#include<stdio.h>
int main(){
    // circumference of circle
    int radius,circumference;
    float pi=3.14;
    printf("enter the radius of circle");
    scanf("%d",&radius);
    circumference=2*pi*radius;
    printf("circumference of circle %d",circumference);
    return 0;
}