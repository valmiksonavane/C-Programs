#include<stdio.h>
int main()
{S
	int n;
	static int f[101];
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		f[a[i]]++;
	}
	int max=0;
	int o;
	for(int i=0;i<n;i++)
	{
		if(f[a[i]]>max)
		{
			max=f[a[i]];
			o=a[i];
		}
	}
	printf("%d",o);
}
