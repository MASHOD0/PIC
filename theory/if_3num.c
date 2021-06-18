#include<stdio.h>
int main(){
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // if n1 is greater than both n2 and n3 n1 is the largest
    if(n1 >= n2 && n1 >= n3){
        printf("%.2f is the largest number", n1) ;
    }
    // if n1 is greater than both n2 and n3 n1 is the largest
    if(n2 >= n1 && n2 >= n3){
        printf("%.2f is the largest number", n1) ;
    }
    // if n1 is greater than both n2 and n3 n1 is the largest
    if(n3 >= n2 && n3>= n1){
        printf("%.2f is the largest number", n1) ;
    }
    return 0;
}