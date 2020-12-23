#include<stdio.h>
#include<conio.h>
int occ(int n)
{
	int count = 0,n1=100;
	while (n1 > 0)
	{
		if (n % 10 == 1)
		{
			count++;
		}
		n = n / 10;
	}
	return count;
	while (n1 > 0)
	{
		if (n % 10 == 2)
		{
			count++;
		}
		n = n / 10;
	}
	return count;
}
int count_in_range(int n)
{
	int count = 0 ;
	int i;
	for(i = 0; i <= n; i++)
	{
		count += occ(i);
	}

return count;
}
int main()
{
int n;
printf("\nEnter the end value :");
scanf("%d", &n);
printf("\nTotal occurrences of 3 from 0 to %d is %d\n", n,count_in_range(n));
return 0;
}

