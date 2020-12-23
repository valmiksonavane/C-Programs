#include<stdio.h>
int main()
{
	int a[],temp=0,digit=0;
	for(int i=0;i<10000000;i++)
	{
		temp=i;
		int sum=0;
		while(temp>0)
		{
			digit=temp%10;
			sum=digit*5;
			temp=temp/10;
			
		}
	}
}
