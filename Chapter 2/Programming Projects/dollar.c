#include<stdio.h>
int main(){
    float n, tax;
    printf("Enter an amount:\n");
    scanf("%f", &n);
    tax = ((5 * n) / 100) + n;
    printf("With tax added: \n$%.2f", tax);
    return 0;
}