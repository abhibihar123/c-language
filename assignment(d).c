//(d)write a program in c to delete an element form the beginning of an array
#include<stdio.h>
void main(){
	int arr[100];
	int size, i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter %d elements : \n", size);
	for(i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
		for(i=0; i<size-1; i++)
			{
				arr[i] = arr[i+1];
			}
			arr[i]=0;

	size--;
	printf("updated array is: ");
	for(i=0; i<size; i++){
		printf(" %d ",arr[i]);
	}
}
