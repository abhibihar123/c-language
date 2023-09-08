#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the 1st value");
	scanf("%d",&a);
	printf("enter the 2nd value");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping the value %d\n",a);
	printf("swapping the value %d\n",b);
	return 0;
}
