#include<stdio.h>
int main(){
    char i;
    int a,b;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("enter operators(+,-,/,*,%)");
    fflush(stdin);
    scanf("%c",&i);

    switch(i)
    {
    case'+':
    
        printf("addition of a and b %d",a+b);
        break;
    
    case'-':
    
        printf("subtraction of a and b %d",a-b);
        break;
    
    case'*':
    
        printf("multiplication of a and b %d",a*b);
        break;
       
    case'/':
    
        printf("division of a and b%d",a/b);
        break;
     
    case'%':
    
        printf("mod is %d",a%b);
        break;
    
    default:
    
        printf("invalid output");
    }
    return 0;

}