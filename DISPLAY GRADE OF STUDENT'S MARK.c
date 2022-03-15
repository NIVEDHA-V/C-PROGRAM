//program to display the grade of student's mark
#include<stdio.h>
int main()
{
	int mark;
	//read the mark of student
	printf("Enter your mark :");
	scanf("%d",&mark);
	//check for the grade
	
	//mark=85-100 -> GRADE A
	if(mark>=85)
	{
		printf("\nYou have got Grade A.");
	}
	//mark= 70-84 -> GRADE B
	else if(mark>=70)
	{
		printf("\nYou have got Grade B.");
	}
	
	//mark= 55-69 -> GRADE C
	else if(mark>=55)
	{
		printf("\nYou have got Grade C.");
	}
	
	//mark= 40-54 -> GRADE D
	else if(mark>=40)
	{
		printf("\nYou have got Grade D.");
	}
	
	//mark below 40 -> GRADE F
	else
	{
		printf("\nYou have got Grade F.");
	}
}
