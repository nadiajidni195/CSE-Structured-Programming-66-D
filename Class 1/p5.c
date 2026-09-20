#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    int sum=a+b;
    if(sum%2==0)
    {
    printf("sum is even\n");
    }
    else
    {
    printf("sum is odd\n");
    }
    return 0;
}