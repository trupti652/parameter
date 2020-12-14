#include<stdio.h>
#include<stdlib.h>
void sum(int a,int b)
{
    int sum=a+b;
    printf("the sum of number is %d\n",sum);
}
int main()
{
    int x,y;
    printf("Enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);


    sum(x,y);
}
