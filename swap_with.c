#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swaping: \nA=%d \nB=%d",a,b);
    return 0;
}
