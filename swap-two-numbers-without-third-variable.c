#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers = ");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping a = %d and b = %d\n", a, b);
    a = a + b;
    b = a- b;
    a = a - b;
    printf("\nAfter swapping a = %d and b = %d\n\n", a, b);
    return 0;
}
