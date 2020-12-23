#include<stdio.h>
int main()
{
	int result=0;
	for(int i=2;i<355000;i++)
	{
			int number=i,sumOfpowers=0;
			while(number>0)
			{
				int d=number%10;
				number=number/10;
				
				int temp=d;
				for(int j=1;j<5;j++)
				{
					temp=temp*d;
				}
				sumOfpowers=sumOfpowers+temp;
			}
			if(sumOfpowers==i)
			{
				printf("%d\n",i);
				result=result+i;
			}
	}
	printf("%d\n",result);
	return 0;
}
