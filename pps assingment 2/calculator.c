#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	
	}
	return fact;
}

main()
{
	

	int n;
	char z,c;
	float a,b,r1;
	printf("Mini Calculator\n");
	printf("Enter any number\n");
		while(1)
	{
	scanf("%f%c",&a,&z);
	
	
	if(z==43)
	{
		scanf("%f",&b);
		r1=a+b;
		
	}
	else if(z==45)
	{
		scanf("%f",&b);
		r1=a-b;
	}
	else if(z==42)
	{
		scanf("%f",&b);
		scanf("%c",&c);
		if(c==37)
		{
			r1=(a*b)/100;
		}
		else
		r1=a*b;
	}
	else if(z==47)
	{
		scanf("%f",&b);
		r1=a/b;
	}
	else if(z==94)
	{
		scanf("%f",&b);
		r1=pow(a,b);
	}
	else if(z==33)
	{
	
	r1=factorial(a);
	
	}
	else
	printf("invalide\n");

	printf("%f\n", r1);
	
}
	getch();
	return 0;
	
	
	
	
}
