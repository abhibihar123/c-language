#include<stdio.h>
#include <conio.h>
int main()
{
	int i, n, count=0;
	printf("Enter any integer: ");
	scanf("%d",&n);
	for(i=1; i<=i;i++){
		if(n%i==0){
			count = count + 1;
		}
	}
	if(count == 2){
		printf("Prime no: %d", n);
	}else{
		printf("Not prime no: %d", n);
	}
	return 0;
}
