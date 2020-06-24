#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers = ");
    scanf("%d%d", &a, &b);
    printf("\nFirst method................................\n\n");
    printf("Before swapping a = %d and b = %d\n", a, b);
    temp = a ;
    a = b;
    b = temp;
    printf("\nAfter swapping a = %d and b = %d\n\n\n\n", a, b);
    printf("\nSecond method...............................\n\n");
     printf("Before swapping a = %d and b = %d\n", a, b);
    temp = a * b;
    a = temp / a;
    b = temp / b;
     printf("\nAfter swapping a = %d and b = %d\n", a, b);
    return 0;
}
