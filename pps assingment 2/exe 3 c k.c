 #include<stdio.h>
main()
{
	int x,x1,x2,x3,y1,y2,r;
	printf("Enter co-ordinates of centre of circle and radius respectively = ");
	scanf("%d%d%d%d%d", &x1,&y1,&x2,&y2,&r);
	x=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)-r*r);
	if(x>0)
	
	
	printf("points out of circle");
	else if(x==0)
	printf("points on circle");
	else
	printf("points inside the circle");
	getch();
	return 0;
}
