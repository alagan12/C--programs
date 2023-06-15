#include<stdio.h>
int main(){
    int n,r,c,arm=0;
    printf("enter any number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("%d is  armstrong number",arm);    
    }
    else{
        printf("%d is not armstrong number",arm);
    }
    return 0;
}