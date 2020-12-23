#include<stdbool.h>>
#include<stdio.h>
int smpi(int a[],int n)
{
	bool p[n];
	int i;
//	p[n+1]=false;
	for(i=0;i<n;i++)
		{
			if(a[i]>0)
			p[a[i]]=true;
		}
		
	for(i=1;i<=n;i++)
	{
		if(p[i]!=true)
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
