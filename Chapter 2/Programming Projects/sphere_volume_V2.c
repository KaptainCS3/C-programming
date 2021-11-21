#include<stdio.h>
#define PI 3.14
int main(){
    double n, v;
    int r;
    printf("enter a radius r:\n");
    scanf("%d", &r);
    n = 4.00f / 3.00f;
    v = (n * PI * r * r * r);
    printf("%.2f\n", v);
    return 0;
}