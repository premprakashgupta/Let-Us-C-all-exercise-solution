#include<stdio.h>
main()
{
	struct student
	{
		int roll_number[],years[];
		char Name,department,Course;
	}
		printf("Enter roll number,Name,department,course and joining years ");
		
		for(i=0;i<450;i++)
	{
		scanf("%d %c %c %c %d ", &roll_number[i],&Name[i],&department[i],&course[i],&years[i]);
		printf("%d %c %c %c %d\n ", roll_number,Name,department,course,years);
	}
	
	}
}
