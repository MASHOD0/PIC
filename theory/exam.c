#include<stdio.h>



int main()
{
    int height;
    int breadth;
   
    printf("what is height of triangle of the triangle\n");
    scanf("%d", &height);

    printf("what is base of triangle of the triangle\n");
    scanf("%d", &breadth);

    printf("the area is givem as %.2f", 0.5 * height * breadth);
    
    return 0;
}