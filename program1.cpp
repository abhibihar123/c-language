#include<stdio.h>
int main()
{
	int a,b,c,d;                   
	int pant;
	int shirt;
	int shoes;
	printf("Enter the quantity of pant\n");
	scanf("%d",&pant);
	printf("Enter the quantity of shirt\n");
	scanf("%d",&shirt);
	printf("Enter the quantity of shoes\n");
	scanf("%d",&shoes);
	a=pant*1005;
	b=shirt*855;
	c=shoes*650;
	d=a+b+c;
	printf("the total value of pant is %d\n",a);
	printf("the total value of shirt is %d\n",b);
	printf("the total value of shoes is %d\n",c);
	printf("the total bill is %d",d);
	}
