#include<stdio.h>
main()
{
	float a,b,c,d,e;
	printf("distance(k.M) between city A and city B is = ");
	scanf("%f", &a);
	b=a*1000;
	c=a*1000*3.28084;
	d=a*39.37*1000;
	e=a*100000;
	printf("in metre %f m\n in feet %f feet\n in inches %f inch\n in centimetre %f cm", b,c,d,e);
	getch();
	return 0;
}
