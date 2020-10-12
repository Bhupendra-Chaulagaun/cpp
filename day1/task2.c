#include<stdio.h>

struct Student{
	char name[20], add[20];
	int roll, marks;
}; 
int main()
{
	struct Student s[50];
	int i, n;
	printf("Enter the number of students: ");
	scanf ("%d" , &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter name: ");
		scanf("%s", s[i].name);
		printf("Enter address: ");
		scanf("%s", s[i].add);
		printf("Enter roll: ");
		scanf("%d", &s[i].roll);
		printf("Enter marks: ");
		scanf("%d", &s[i].marks);
		
	}
	printf("The details is\n");
	for ( i= 0; i<n; i++)
	{
		printf("%s\t%s\t%d\t%d\n", s[i].name, s[i].add, s[i].roll, s[i].marks);
	}
	return 0;
}
