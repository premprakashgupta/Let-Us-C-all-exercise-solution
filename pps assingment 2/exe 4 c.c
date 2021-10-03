#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three side of triangle");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b+c||c>a+b||b>c+a)
	printf("triangle is valid");
	else
	printf("not valid");
	getch();
	return 0;
}
