#include<stdio.h>
void main()
{
    int a[100][100];
    int i, n, sum=0;

	printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("Sum of all elements of array = %d", sum);
    return 0;
}
