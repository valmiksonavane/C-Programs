#include<stdio.h>
int main()
{
	int a[10];
	int n,flag=0,i=0,j=0,k;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter k value:");
	scanf("%d",&k);
	
	while(i<n)
	{
		if(a[i]+a[j]==k && i!=j)
		{
			printf("%d+%d=%d\n",a[i],a[j],k);
		
		}
		j++;
		if(j==n)
		{
			j=0;
			i++;
		}
	}
	return 0;
}
