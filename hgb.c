	#include<stdio.h>
	int main()
	{
	int eng,maths,comp,phy,hindi,marks;
	printf("Enter your eng,maths,comp,phy,hindi");
	scanf("%d%d%d%d%d",&eng,&maths,&comp,&phy,&hindi);
	
	marks=(eng+maths+comp+phy+hindi)/5;
	
	
	if( marks>=90)
	{
		printf("outstanding");
	}
	else if((marks>=80) && (marks<90))
	{
		printf("E");
	}
	
	else if((marks>=60)&& (marks<80))
	{
		printf("A");
	}
	
	else if((marks>=40) && (marks<60))
	{
		printf("B");
	}
	
	/*else if(marks<40)
	{
		printf("Fail");
	}*/
	else
	printf("fail");	
	}
	
			
	
