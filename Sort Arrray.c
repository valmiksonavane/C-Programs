#include<stdio.h>
int main()
{	int t,l=0,i=0;
	int a[]={4,6,12,9,8,5,7,3,11};
	
	while(a[i]!=NULL)
	{
		l++;
		i++;
		}	
	for(i=1;i<=l;i++)
	{
		if(a[i]<a[i-1])
		{
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
			i=0;
		}
	}
		printf("%d\n",l);
	for(i=l-1;i>=l-2;i--)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}

