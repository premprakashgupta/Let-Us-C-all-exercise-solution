#include<stdio.h>
#include<math.h>
main()
{
	int n,g,a,b,c,d,e,f,h,i,j,z;
	printf("Enter any amount = ");
	scanf("%d", &n);
	z=n/100;
	a=n%100;
	b=a/50;
	c=a%50;
	d=b/10;
	e=b%10;
	f=d/5;
	g=d%5;
	h=f/2;
	i=f%2;
	j=n-(z*100+b*50+d*10+f*5+h*2);
	
	printf("rs.1= %d rs.2= %d rs.5= %d rs.10= %d rs.50= %d rs.100= %d", j,h,f,d,b,z );
	getch();
	return 0;
}
