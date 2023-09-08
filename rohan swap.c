#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 1st value");
	scanf("%d",&a);
	printf("enter the 2nd value");
	scanf("%d",&b);
	c=a;
	a=b;
	a=c;
	printf("swaping the value of %d\n",b);
	printf("swaping the value of %d\n", a);
	return 0;
}
