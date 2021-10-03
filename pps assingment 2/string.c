#include<stdio.h>
#include<string.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
main()
{

{
	char str[100];
	printf("Enter the word");
	scanf("%s", str);
	int ler,i;
	ler=strlen(str);
	printf("%s", str);
	for(i=0;i<ler/2;i++)
	{
	swap(&str[i], &str[ler-i-1]);
	}
}
getch();
return 0;
}
