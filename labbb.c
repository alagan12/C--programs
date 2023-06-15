#include<stdio.h>
#include<time.h>
int main(){
    int a,b,sum;
    double time_spent=0.0;
    clock_t begin=clock();
    printf("enter two integers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is:%d",sum);
    clock_t end=clock();
    time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("the elapsed time is %f seconds",time_spent);

    return 0;
}
