#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n,a=10;
	float m;
	printf("Enter the Number:");
	scanf("%f",&m);
	n=m*10;
	n1=n%10;
	n2=n/a;
	if(n1<=5)
	{
		printf("Round off number is :%d",n2);
	}
	else
	{
		printf("Round off number is :%d",n2+1);
	}
	return 0;
}

