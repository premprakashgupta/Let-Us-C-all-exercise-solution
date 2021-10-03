#include<stdio.h>
main()
{
	char a;
	printf("Enter any alphabate = ");
	scanf("%c", &a);
	if('a'>97&&'a'<122)
	printf("capital letter");
	else
	printf("not capital letter");
	getch();
	return 0;
}
