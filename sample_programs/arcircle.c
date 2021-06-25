/*program to find area of circle */
#include<stdio.h>
#define PI 3.14
void main()
{
int radius ,area;
printf("enter radius");
scanf("%d",&radius);
area = PI* radius*radius;
printf("area = %d", area);
}