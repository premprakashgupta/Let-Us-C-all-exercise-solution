#include<stdio.h>


main()
{
	int b,c,sum,n,i;
	float d,e,f,t;
	printf("Enter consumer id : ");
	scanf("%d",&n);
	if(n>=1000 && n<=9999)
	{
			
			
			
			printf("Enter consumed electricity in unit : ");
			scanf("%d",&b);
		
		if(b>0 && b<200)
		{
			d=b*4.20;
			if(d>800)
			{
				e=d-800;
				f=e*0.18;
				t=f+d;	
			printf("Total Bill = %f",t);	
			}
			else{
				printf("%f",d);
			}
		}
		else if(b>=200 && b<400)
		{
			d=b*5.50;
			if(d>800)
			{
				e=d-800;
				f=e*0.18;
				t=f+d;	
			printf("Total Bill = %f",t);	
			}
			else{
				printf("%f",d);
			}
		}
	   	else if(b>=400 && b<600)
		{
			d=b*7.20;
			if(d>800)
			{
				e=d-800;
				f=e*0.18;
				t=f+d;	
			printf("Total Bill = %f",t);	
			}
			else{
				printf("%f",d);
			}
		}
		else if(b>=600)
		{
			d=b*8.20;
			if(d>800)
			{
				e=d-800;
				f=e*0.18;
				t=f+d;	
			printf("Total Bill = %f",t);	
			}
			else{
				printf("%f",d);
			}
		}
		else
		printf("invilide");
	}
	else
		printf("invilide id");
}

	

