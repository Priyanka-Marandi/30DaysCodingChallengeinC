#include<stdio.h>
int main()
{
    int a;
    printf("Enter a integer:");
    scanf("%d",&a);
    if(a>=0)
    printf("%d is a positive integer",a);
    else
    printf("%d is a negative integer",a);
    return 0;
}