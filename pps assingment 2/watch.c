#include<stdio.h>
#include<conio.h>
main()
{
	int h,m,s;
	printf("Enter time");
	scanf("%d%d%d", &h,&m,&s);
	while(1)
	{
	for(h;h<24;h++)
	{
		
			for(m;m<=60;m++)
		{
	
	
	
				for(s;s<=60;s++)
			{
					system("cls");
					printf("%d:%d:%d", h,m,s);
					sleep(1);
			}
			s=1;
		
		}
		m=1;
	
		
	}
	h=1;
}
	
	
	
	
	
	
	
	
	
}
