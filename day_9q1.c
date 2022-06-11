#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the first side of the triangle:");
    scanf("%d",&a);
    printf("Enter the second side of the triangle:");
    scanf("%d",&b);
    printf("Enter the third side of the triangle:");
    scanf("%d",&c);
    int d = sqrt(pow(a,2)+pow(b,2));
    printf("the value of d is %d",d);
    if(a==b && a==c && b==c)
    {
        printf("the triangle is equilateral");
    }
    else if(a==b && a==c && b!=c)
    {
        printf("the triangle is isosceles");
    }
    else if(c == d)
    {
        printf("the triangle is right angled");
    }
    else
    {
        printf("the triangle is scalene");
    }
    return 0;
}