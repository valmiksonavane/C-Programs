#include<stdio.h>
int counter[10];
void splitter(int num)
{
	int i, rem, ans;
	i = 0;
	do
	{
		rem = num % 10;
		ans = num / 10;
		num = ans;
		counter[rem]++;
	} while(ans > 0);
}
void printreport()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("\nDigit: %d\t(%d)",i,counter[i]); 
	}
}
int main()
{
	int i,a[101];
	for(i=1;i<=100;i++)
	{
		a[i]=i;
	}
	for(i = 1; i <=100;i++ )
	{
		splitter(a[i]);
	}
	printreport();
}

