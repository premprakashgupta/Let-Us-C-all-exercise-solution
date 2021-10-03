#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabate = ");
	scanf("%c", &ch);
	if(ch>=65&&ch<=90)
	printf("capital letter");
	else
	printf("not capital letter");
	getch();
	return 0;
}
