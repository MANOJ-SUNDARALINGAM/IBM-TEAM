#include <stdio.h>
int main()
{
	int opt,cd=4,xd;
	printf("Enter the xd:");
	scanf("%d",&xd);
	opt=(cd+xd)%7;
	switch(opt)
	{
		case 0:printf("sun");break;
		case 1:printf("mon");break;
		case 2:printf("tue");break;
		case 3:printf("wed");break;
		case 4:printf("thus");break;
		case 5:printf("fri");break;
		case 6:printf("sat");break;
	
		}
	return 0;
}
