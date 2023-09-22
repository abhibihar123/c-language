//write a program in c to delete an element from the last location of an array
#include<stdio.h>
int main()
{
	int a[100], n, i, pass;
	printf("Enter array size: ");
	scanf("%d", &n);
	printf("\n Enter array elements: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	pass=n;
	for(i=pass; i<n-1; i++){
		a[i]= a[i+1];
	}
	a[i]=0;
	n=n-1;
	printf("\n The new array elements: ");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
	return 0;
}

