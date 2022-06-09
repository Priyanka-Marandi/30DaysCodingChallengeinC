#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,multi,division,modulus;
    printf("Enter the first integer:");
    scanf("%d\n",a);
    printf("Enter the second integer:");
    scanf("%d\n",b);
    sum = a+b;
    printf("sum is %d\n",sum);
    sub = a-b;
    printf("difference is %d\n",sub);
    multi = a*b;
    printf("multiplication is %d\n",multi);
    division = a/b;
    printf("division is %d\n",division);
    modulus = a%b;
    printf("remainder is %d\n",modulus);
    return 0;
}