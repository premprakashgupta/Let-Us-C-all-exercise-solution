#include<stdio.h>
#include<conio.h>
main()
{

int num,sum,a,b,c,d,e,d1,d2,d3,d4,d5;
printf("Enter any five digit number");
scanf("%d", &num);
a=num/10;
d5=num%10;
b=a/10;
d4=a%10;
c=b/10;
d3=b%10;
d=c/10;
d2=c%10;
e=d/10;
d1=d%10;
printf("\nreverse number is %d%d%d%d%d", d5,d4,d3,d2,d1);
getch();
return 0;
}
