//write a program in c to delete an element from particular position in an array
#include<stdio.h>
int main()
{
	int a[100], n, i, poss;
	printf("Enter array size: ");
	scanf("%d", &n);
	printf("\n Enter array elements: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("\nEnter index position of the element you want to delete: ");
	scanf("%d",&poss);
	for(i=poss-1; i<n-1; i++){
		a[i] = a[i+1];
	}
	a[i]=0;
	n=n-1;
	printf("\nThe new array element: ");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
	return 0;
}
