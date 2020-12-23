#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10][20],temp[20];
	int i,j,n;
	printf("How many names you want to add:");
	scanf("%d",&n);
	printf("Enter The names:\n");
	for(i=0;i<n;i++)
	{
			scanf("%s",&str[i]);
	}
	i=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<=n;i++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}		
	}
	printf("\nAfter Sorting..");
	for(i=0;i<=n;i++)
	{
		printf("\n%s",str);
	}
}

