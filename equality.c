#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a,b and c");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b)
    {
        printf("a is equal to b\n");
    }
    else 
    {
        printf("a is not equal to b\n");
    }
    if(b==c)
    {
        printf("b is equal to c\n");
    }
    else 
    {
        printf("b is not equal to c\n");
    }
    return 0;
}