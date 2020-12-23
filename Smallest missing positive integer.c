#include<stdio.h>
int smpi(int a[],int n)
{
	int p[n];
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		p[a[i]]=1;
	}
	for(i=1;i<=n;i++)
	{
		if(p[i]!=1)
		return i;
	}
	return n+1;
}
int main()
{
	int a[20];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("%d ",smpi(a,n));
}

