#include<stdio.h>
main()
{
	int ram,syam,ajay,x,y,z;
	printf("Enter age of ram,syam and ajay");
	scanf("%d%d%d", &ram,&syam,&ajay);
	if(ram<syam&&ram<ajay)
	printf("youngest is ram");
	else if(syam<ram&&syam<ajay)
	printf("youngest is syam");
	else
	printf("youngest is ajay");
	getch();
	return 0;
}
