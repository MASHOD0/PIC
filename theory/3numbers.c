# include <stdio.h>
 
void main()
{
    int a, b, c, big ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", big) ;
}
