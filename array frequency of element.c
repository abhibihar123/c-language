//Write a c program to  calculate the frequency of each element from an array.
#include<stdio.h>
int main(){
	int a[100], i,n,x, count=0;
	printf("Enter the array of elements: ");
	scanf("%d", &n);
	printf("\nEnter array of elements: ");
	for(i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("\nEnter your desire element: ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==a[i]){
			count = count + 1;
		}
		continue;
	}
	printf("\nThe frequency of %d is: %d", x,count);
	return 0;
}
