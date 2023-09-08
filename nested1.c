#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter three number: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Max no: %d", a);
		}else{
			printf("Max no: %d", c);
		}
	}else{
		if(b>c){
			printf("Max no: %d", b);
		}else{
			printf("Max no: %d", c);
		}
	}
	return 0;
}
