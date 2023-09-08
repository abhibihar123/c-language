#include<stdio.h>
#include <conio.h>
int main()
{
	int i, n, j, c;
	printf("Enter any integer: ");
	scanf("%d",&n);
	for(j=1; j<=n; j++){
		c=0;
		for(i=1; i<=j; i++){
			if(j%i==0){
				c = c+1;
			}
		}
		if(c==2){
			printf("%d\n",j);
		}
	}
	return 0;
}
