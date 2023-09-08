#include<stdio.h>
char main()
{
	char ch;
	printf("Put your character: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("The given number is vowel");
	}else{
		printf("The given number is consonent");
	}
	return 0;
}
