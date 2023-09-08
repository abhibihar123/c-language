#include<stdio.h>
int main(){
	
	int arr[3][3],i,j,sum=0;
	printf("enter the value of array:\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("sum of numbers of array rows:\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
			printf("%d\t",arr[i][j]);
		}
		printf("=\t%d\n",sum);
		sum=0;
	}
	
	
	return 0;
}

