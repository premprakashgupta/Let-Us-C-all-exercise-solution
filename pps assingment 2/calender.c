#include<stdio.h>
#include<conio.h>
main()
{
	int d,y,i,j=1;
	int m;
	printf("Enter date = ");
	scanf("%d%d",&d,&m);
	if(m==1)
	{
		for(i=1;i<=d;i++)
		{
			if(i=(1||8||15||22||29))
			printf("WEDNESDAY");
			else if(i=(2||9||16||23||30))
			printf("THURSDAY");
			else if(i=(3||10||17||24||31))
			printf("FRIDAY");
			else if(i=(4||11||18||25))
			printf("SATURDAY");
			else if(i=(5||12||19||26))
			printf("SUNDAY");
			else if(i=(6||13||20||27))
			printf("MONDAY");
			else
			printf("TUESDAY");
		}
	}
	
	/*else if(m=3)
	{
		for(j+4;j<=d;j++)
		{
		if(j=(1||8||15||22||29))
			printf("WEDNESDAY");
			else if(j=(2||9||16||23||30))
			printf("THURSDAY");
			else if(j=(3||10||17||24||31))
			printf("FRIDAY");
			else if(j=(4||11||18||25))
			printf("SATURDAY");
			else if(j=(5||12||19||26))
			printf("SUNDAY");
			else if(j=(6||13||20||27))
			printf("MONDAY");
			else
			printf("TUESDAY");	
		}
	}*/
}
