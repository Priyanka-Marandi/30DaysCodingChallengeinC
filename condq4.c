#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
    printf("person is eligible to vote");
    return 0;
}