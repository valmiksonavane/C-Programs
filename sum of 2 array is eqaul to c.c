#include<stdio.h>
int main()
{
	int a[10];
	int n,flag=0,i=0,j=0,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	
	while(i<n)
	{
		if(a[i]+a[j]==k && i!=j)
		{
			flag=1;
			break;
		}
		else
		{
			j++;
			if(j==n)
			{
				j=0;
				i++;
			}
		}
	}
	if(flag==1)
	printf("present");
	else printf("not present");
	return 0;
}

