#include<stdio.h>
void main()
{
	int a[100][100], i, r,c,j;
	printf("Enter the row and colomn size: \n");
	scanf("%d %d", &r,&c);
	printf("Enter the array element: \n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Array elements are: \n |");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf(" %d | ", a[i][j]);
		}
		sum+= [i][j];
		printf("\n |", sum);
		
	}
	
}
