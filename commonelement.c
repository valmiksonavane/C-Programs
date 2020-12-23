#include<stdio.h>
int main()
{
	int a[20];
	int b[20];
	int c[20];
	int m,n;
	printf("Enter size of first array: ");
	scanf("%d",&m);
	int i;
	printf("Enter elements of first array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter size of second array: ");
	scanf("%d",&n);
	
	printf("Enter elements of second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	int j=0;
	int k=0;
	while(i<m && j<n)
	{
		if(a[i]==b[j])
		{
			if(k-1==-1)
				c[k++]=a[i];	
			else if(c[k-1]!=a[i])
				c[k++]=a[i];
			i++;
			j++;
		}
		else if(a[i]>b[j])
		j++;
		else 
		i++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
}
