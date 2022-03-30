//PROGRAM TO FIND LCM OF TWO NUMBERS USING RECURSION
#include<stdio.h>
int lcm(int x, int y);
int main()
{
	int n1,n2,ans;
	printf("Enter the first number :");
	scanf("%d",&n1);
	printf("Enter the second number :");
	scanf("%d",&n2);
	if(n1>n2)
		ans=lcm(n2,n1);
	else
		ans=lcm(n1,n2);
	printf("\nLCM of %d and %d = %d.", n1,n2,ans);
	return 0;		
}
int lcm(int x,int y)
{
    static int p=0;
	p+=y;
	if((p%x==0)&&(p%y==0))
		return p;
	else
		lcm(x,y);
}
