 #include<stdio.h>
main()
{
	int x,x1,x2,x3,y1,y2,y3;
	printf("Enter co-ordinates of three points respectively = ");
	scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
	x=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	if(x==0)
	
	
	printf("points lie on straight line");
	else
	printf("not lie on straight line");
	getch();
	return 0;
}
