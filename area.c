#include<stdio.h>
int main(){
    // area of circle
    int radius;
    float pi=3.14,areaofcircle;
    printf("enter the radius of circle");
    scanf("%d",&radius);
    areaofcircle=pi*radius*radius;
    printf("area of circle%f",areaofcircle);

    // area of rectangle
    int length,width,areaofrec;
    printf("enter the length of rectangle");
    scanf("%d",&length);
    printf("enter the width of rectangle");
    scanf("%d",&width);
    areaofrec=length*width;
    printf("area of rectangle %d",areaofrec);

    // area of square
    int side,areaofsq;
    printf("enter the side of square");
    scanf("%d",&side);
    areaofsq=side*side;
    printf("area of square %d",areaofsq);
    return 0;
    }