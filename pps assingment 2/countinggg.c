#include<stdio.h>
main()
{
	int countz=0,countp=0,countn=0;
	char choice;
	int n,N;
		
	while(1)
{
	printf("Enter Y for contineu");
	scanf("%c",choice);
	if(choice=='y'||'Y')
{
	scanf("%d", n);
		
		if(n>0)
{
		++countp;
}
		else if(n<0)
{
		++countn;
}
	else if(n==0)
{
		++countz;
}
else if(n=(n||N))
{
	break;
}
}
}
	printf("positive= %d",countp);
	printf("negatie= %d", countn);
	printf("zero= %d", countz);
		getch();
}
