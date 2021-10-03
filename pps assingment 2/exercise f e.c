#include<stdio.h>
main()
{
	float A,a,b,p,c,q,P;
	
	printf("Enter length,width of reactangle and radius of circle respectively =");
	scanf("%f%f%f", &a,&b,&c);
	p=2*(a+b);
	q=a*b;
	A=6.28*c;
	P=3.14*c*c;
	printf(" perimetere = %f\n area of reactangle = %f\n perimeter of circle = %f\n area of circle = %f", p,q,A,P); 
	getch();
	return 0;
}
	
