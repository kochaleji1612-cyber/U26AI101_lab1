#include<stdio.h>
int main()
{
	float basic , da , hra, gross;
	printf("Enter basic salary=");
	scanf("%f",&basic);
	da=basic*0.40;
	hra=basic*0.20;
	gross=basic+da+hra;
	printf("gross salary=%f",gross);
	
}
