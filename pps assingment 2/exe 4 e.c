#include<stdio.h>
main()
{
float a,b,c;
printf("Enter HARDNESS,CARBON AMOUNT AND TENSILE STRENGTH respectively = ");
scanf("%f%f%f", &a,&b,&c);
if(a>50&&b<0.7&&c>5600)
printf("grade is 10");
else if(a>50&&b<0.7&&c<5600)
printf("grade is  9");
else if(a<50&&b<0.7&&c>5600)
printf("grade is 8");
else if(a>50&&b>0.7&&c>5600)
printf("grade is 7");
else if(a>50||b<0.7||c>5600)
printf("grade 6");
else if(a<50&&b>0.7&&c<5600)
printf("grade 5");
else
printf("invalid");
getch();
return 0;
}
