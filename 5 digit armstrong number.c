#include<stdio.h>
#include<conio.h>
#include<math.h>
int arm5(int n)
{
	int d,t=n,ar=0;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		ar=ar+pow(d,5);
	}
	if(ar==t)
	{
		printf("%d\n",ar);
		return ar;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int sum=0,i;
	for(i=10000;i<99999;i++)
	{
		sum=sum+arm5(i);
	}
	printf("%d",sum);
	return 0;
}
