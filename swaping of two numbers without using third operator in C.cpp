#include<stdio.h>
int main()
{
	int a, b;
	printf("enter the first number a: ");
	scanf("%d",&a);
	printf("\n enter the se ond number b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
    printf("\nAfter Swapping numbers are:");
    printf("\n a = %d",a);
    printf("\n b = %d",b);
    return 0;
}
