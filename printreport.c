#include<stdio.h>
int counter[10];
void init()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		counter[i] = 0;
	}
}
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
	int a[20] ={45, 76, 25, 33, 847, 325,943, 540, 11, 4, 76, 3, 2, 543, 122, 554, 123, 54, 22, 5};
	int i;

	for(i = 0; i < 20;i++ )
	{
		splitter(a[i]);
	}
	printreport();

}

