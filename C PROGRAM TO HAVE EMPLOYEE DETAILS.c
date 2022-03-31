#include<stdio.h>
struct employee
{
    int num,age,salary;
    char name[25];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name , phone number , age , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",&emp[i].name,&emp[i].num,&emp[i].age,&emp[i].salary);
    }
    printf("\nEMP_NAME\tEMP_PHONE NUMBER\tEMP_AGE\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].num,emp[i].age,emp[i].salary);
    }
}
