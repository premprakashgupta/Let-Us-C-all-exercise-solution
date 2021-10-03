#include<stdio.h>
#include<conio.h>
#include<Windows.h>

main()
{
	int i,j,k,h=0,m=0,s=0;
	printf("Enter time in fornmat of HH:MM:SS\n ");
	scanf("%d%d%d",&h,&m,&s);
	SYSTEMTIME stime;
	GetSystemTime(&stime);
	while(1)
	{
	;
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			
			{
					system("cls");
					printf("\n\n\t\t%d:%d:%d   ",h,m,s);
					
					if(h<12)
					{
						printf("AM");
					}
					else
					{
						printf("PM");
					}
					 printf("\n\t\t %c %d /%d /%d ",stime.wDayOfWeek,stime.wDay,stime.wMonth,stime.wYear);
					sleep(1);
		
			}
			s=1;
		}
		m=0;
	}
	h=0;
}

	getch();
	return 0;
}
