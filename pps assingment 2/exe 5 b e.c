#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,i,number;
	scanf("%d", &i);
	b=i%10;
	c=i/10;
	d=c%10;
	e=c/10;
	if(i=((e*e*e)+(d*d*d)+(b*b*b)))
	printf("valid");
	else
	printf("not");
	getch();
	return 0;
}
