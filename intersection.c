#include<stdio.h>
void intersection(int a[],int b[])
{
	int i=0,j=0;
	while(i<6 && j<6)
	{
		if(a[i]==b[j])
		{
			printf("%d ",a[i]);
			i++;
			j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
}
int main()
{
	int a[6]={1,3,4,6,7,9};
	int b[6]={1,2,4,5,9,10};
	intersection(a,b);
	return 0;
}
