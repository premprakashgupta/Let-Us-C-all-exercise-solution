 #include<stdio.h>
main()
{
	int a,b,c,x,y,z;
	printf("Enter length and width of reactangle");
	scanf("%d%d", &a,&b);
	if((2*a+2*b)>(a*b))
	
	printf("greater is perimeter %d", 2*a+2*b);
	else
	printf("greater is area %d", a*b);
	getch();
	return 0;
}
