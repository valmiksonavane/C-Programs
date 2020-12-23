#include<stdio.h>
int main()
{
	static int f[101];
	int u[101];
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ui=0;
	for(i=0;i<n;i++)
	{
		if(f[a[i]]==0)
			u[ui++]=a[i];
		f[a[i]]++;
	}
	for(i=0;i<ui;i++)
	{
		printf("%d is repeated %d times.\n",u[i],f[u[i]]);
	}
}
