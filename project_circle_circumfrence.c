#include <stdio.h>
#include <math.h>

int main (){
    
    const double PI = 3.142;
    double radius;
    double circum;
    double area;
    double a;
    double b;
    double c;

    printf("enter radius of the circle: ");
    scanf("%lf", &radius);
    circum = 2 * PI * radius;
    printf("circmference is %.2lf", circum);
    area = PI * radius * radius;
    printf("\narea is %.2lf", area);
    printf("\nenter value of a: ");
    scanf("%lf", &a);
    printf("\nenter value of b: ");
    scanf("%lf", &b);
    c = sqrt ((a * a) + (b * b));
    printf("hypotenuse c is %lf", c);

    return 0;
}