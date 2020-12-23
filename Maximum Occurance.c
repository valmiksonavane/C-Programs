#include<stdio.h>
#include<conio.h>
int main()
{	int i,lg,c1=0,c2=0,cn=0,n=0;
	int  a[]={1,5,3,6,7,8,2,3,4,5,8,5,5,8,8,8,8,4,5,6,7,8,1,1,1,1,1,1};
//	int n=sizeof(a)/sizeof(a[]);
	while(a[i]!='\0')
	{
		i++;
		n++;
	}
	printf("Length of Array is:%d\n",n);
	for(i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			int t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
			i=0;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	i=0;
	while(i<n)
	{
		if(a[i]==a[i+1])	
		{
			c2++;
		}
		else
		{	
			if(c2>c1)
			{
				c1=c2;
				cn=a[i];
			}
			c2=0;
		}
		i++;
	}
	printf("\n%d is :%d times",cn,c1+1);
	return 0;
}

