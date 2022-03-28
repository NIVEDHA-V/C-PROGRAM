//PROGRAM TO FIND SUM OF A NUMBER USING RECURISION
#include<stdio.h>
int sum(int num);
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	printf("\nThe sum is %d",sum(num));
	return 0;
}

//Recursion function
int sum(int num)
{
	if(num==0)
		return 0;
	else
		return (num%10+sum(num/10)); 
}
