#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,mul.division,mod;
    printf("Enter the first integer:");
    scanf("%d",a);
    printf("Enter the second integer:");
    scanf("%d",b);
    sum = a+b;
    printf("sum is %d\n",sum);
    sub = a-b;
    printf("difference is %d\n",sub);
    mul = a*b;
    printf("multiplication is %d\n",mul);
    division = a/b;
    printf("division is %d\n",division);
    mod = a%b;
    printf("remainder is %d\n",mod);
    return 0;
}