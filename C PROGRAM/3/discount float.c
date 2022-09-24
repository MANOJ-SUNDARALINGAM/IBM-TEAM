#include <stdio.h>
float main()
{
	float amt,damt,pamt;
	printf("Enter the amount for your purchase:");
	scanf("%f",&amt);
	printf("Total amount:%f\n",amt);
	if(amt>=10000)
	{
		damt=amt*0.15;
		printf("your discount amount is:%f\n",damt);
	}
	else if(amt>=5000 && amt<=10000)
	{
		damt=amt*0.10;
		printf("your discount amount is:%f\n",damt);
	}
	else if(amt<=5000)
	{
		damt=amt*0;
		printf("sry discount is only above 1000:%f\n",damt);
	}
	pamt=damt-amt;
	printf("you have to pay:%f",pamt);

}
