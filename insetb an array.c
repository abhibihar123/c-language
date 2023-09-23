 //Write a program in c to insert an element
 //(a) At the begining of an array
 //(b) At the given position of an array
 //(c) At the end of an array
#include <stdio.h>
int main(){
	int a[100],n,i,pos,item;
	printf("How many array number you want to insert: ");
	scanf("%d",&n);
	printf("\nEnter the array elements: \t");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	pos=n;
	printf("\nEnter the new number: ");
	scanf("%d",&item);
	n=n+1;
	for(i=n-1; i>pos; i--){
		a[i]=a[i-1];
	}
	a[i]=item;
	printf("\nThe new array element are: ");
		for(i=0; i<n;i++){
			printf("%d", a[i]);
		}
return 0;
}
        
