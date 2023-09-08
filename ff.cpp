#include<stdio.h>
int main()
{
	 int a[20],s,i,n;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the  %d \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
  printf("Enter a number to search :");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
  if(a[i]==s)
  {
  	printf("%d is present %d.\n",s,i+1);
  }
  }
  if(i==n)
  printf("%d isnot present of array %d.\n",s);
  
  return 0;
}
