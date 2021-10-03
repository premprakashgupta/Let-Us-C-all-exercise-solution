#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabate or digit or symbol -");
	scanf("%c", &ch);
	if(ch>=65&&ch<=90)
	printf("Capital letter");
	else if(ch>=97&&ch<=112)
	printf("small letter");
	else if(ch>=48&&ch<=57)
	printf("digit");
	else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
	printf("symbol");
	else
	printf("invalide a/c question");
	getch();
	return 0;
}
