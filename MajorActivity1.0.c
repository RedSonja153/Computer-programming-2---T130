#include<stdio.h>
int main()
{
	float bill, units;

	printf("Enter the units consumed=");
	scanf("%f",&units);

	if(units<=50 && units>=0)
	{
		bill=units*3.50;
		printf("Electricity Bill=%f Rupees",bill);
	}
	else if(units<=199 && units>200)
	{
		bill=50*3.50+(units-50)*4;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else if(units<=250 && units>400)
	{
		bill=50*3.50+100*4+(units-150)*5.20;
		printf("Electricity Bill=%f Rupees",bill);
	}
	else if(units <=450 && units>600)
	{
	    bill=50*3.50+100*4+(units-200)*6.20;
	    printf("Electricty Bill=%fRupees",bill);
	}

	else if(units>600)
	{
		bill=50*3.50+100*4+100*5.20+(units-250)*6.50;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return 0;
}
