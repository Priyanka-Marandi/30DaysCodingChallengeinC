# 30DaysCodingChallengeinC
This repository is been created in order to keep record of daily practice of code  in C programming.
Write hello world
#include<stdio.h>
int main()
{
    printf("\n Hello World");
    return 0;
}
TO convert fahrenheit degrees to centigrade degrees
#include<stdio.h>
#include<conio.h>
int main()
{
    float fahrenheit,celsius;
    printf("\nEnter the temperature in fahrenheit");
    scanf("%f ",&fahrenheit);
    celsius=((fahrenheit-32)*5)/9;
    printf("\n the centigrade degrees =  %f",celsius);
    return 0;
}
To find the perimeter of rectangle and area and circumference of the circle.
#include<stdio.h>
#include<conio.h>
int main()
{
    double length,breadth,radius;
    printf(" enter the length, breadth and radius");
    scanf("%lf %lf %lf",&length,&breadth,&radius);
    double perimeter= 2*(length+breadth);
    double area = 3.14 *radius*radius;
    double circumference= 2* 3.14 * radius;
    printf("perimeter of the rectangle %lf\n",perimeter);
    printf("area of the circle  %lf\n",area);
    printf("circumference of the circle %lf\n",circumference);
    return 0;
}


