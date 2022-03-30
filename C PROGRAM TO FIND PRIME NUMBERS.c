//PROGRAM TO FIND WHETHER A NUMBER IS PRIME OR NOT USING RECURSION
#include<stdio.h>
//function declaration
int prime(int, int);
int main()
{
	int num,value;
	printf("Enter a number :");
	scanf("%d",&num);
	//function call
	value=prime(num,num/2);
	if(value==1)
		printf("\n%d is a prime number.",num);
	else
		printf("\n%d is not a prime number.", num);
	return 0;
}
//function definition
int prime(int num, int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(num%i==0)
		{
			return 0;
		}
		else
		{
			return prime(num, i-1);
		}
	}
}
