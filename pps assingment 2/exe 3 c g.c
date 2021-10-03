 #include<stdio.h>
main()
{
	int a,b,c,x,y,z;
	printf("Enter three angle of triangle");
	scanf("%d%d%d", &a,&b,&c);
	if(a+b+c==180)
	
	printf("valid angle for triangle");
	else
	printf("not valid");
	getch();
	return 0;
}
