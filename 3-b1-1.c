/*2056011 计科 李书瑶*/
#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14159
#include <stdio.h>

int main()
{
    printf("Please enter radius and height: \n");
    double radius, height, c, s1, s2, v1, v2;
    scanf("%lf %lf", &radius, &height);

    c = 2 * pi * radius;
    s1 = pi * radius * radius;
    s2 = 4 * pi * radius * radius;
    v1 = (4 * pi * radius * radius * radius) / 3;
    v2 = s1 * height;

    printf("Circumference:              %0.2lf \n", c);
    printf("Area of a circle:           %0.2lf \n", s1);
    printf("Surface area of a sphere:   %0.2lf \n", s2);
    printf("Volume of a sphere:         %0.2lf \n", v1);
    printf("Volume of a cylinder:       %0.2lf \n", v2);

    return 0;
}