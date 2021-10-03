#include<stdio.h>
float fx(float x)
{
	float res=x*x*x-27;
	return res;
}
main()
{
	float a=-100,b=100;;
	
	float c;
	
	
	
	while((b-a)>0.00000001)
	{
	c=(a+b)/2.0;
	
	if(fx(c)==0)
	break;
	
	
	else if(fx(c)>0)
	{
		b=c;
	}
	else
	{
		a=c;
	}
	}
	printf("root is %f",c);
	
getch();
return 0;
	
	
}
