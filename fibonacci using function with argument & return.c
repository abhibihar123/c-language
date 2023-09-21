//fibonacci using function with argument & return
#include <stdio.h>
void fibonacci (int n)
{
	int a=0, b=1, c,i=0;
	while(i<n){
		printf(" %d ", a);
		c=a+b;
		a=b;
		b=c;
		i=i+1;
	}
}
void main(){
	int n;
	printf("Enter the nth term: ");
	scanf("%d",&n);
	printf("The fibonacci series is: ");
	fibonacci(n);
}
