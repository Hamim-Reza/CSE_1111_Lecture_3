#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    a=a*b;

    b=a/b;

    a=a/b;

    printf("After swaping: \nA=%d \nB=%d",a,b);
    return 0;
}
