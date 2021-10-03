 #include<stdio.h>
main()
{
	int x,y;
	printf("Enter co-ordinates of points = ");
	scanf("%d%d", &x,&y);
	if(x==0)
	
	
	printf("points lie on y axis");
	else if(y==0)
	printf("points lie on x axis");
	else if(x!=0 && y!=0)
	printf("invalid according to ques.");
	else
	printf("points lie on origin");
	getch();
	return 0;
}
