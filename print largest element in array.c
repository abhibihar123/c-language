//1. Write a program in c to insert an element
//2............a. at the beginning of an array
//


//4. Write a program in c to find largest element in a user given array
//5. write a c program to calculate the frequency of each element from an array

#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("\nEnter the number of an element: ");
	scanf("%d", &n);
	printf("\nEnter the array element: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(a[0]<a[i]){
			a[0]=a[i];
		}
	}
	printf("\The largest element is: %d", a[0]);
}
