#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int l=0,i=0,j=0;
	char str1[1000],str2[100];
	printf("Enter The Line:\n");
	gets(str1);
	printf("Enter the Word to be Searched:\n");
	gets(str2);
	while(str2[i]!='\0')
	{
		l++;
		i++;
	}
	i=0;
		while(str1[i]!='\0')
		{
			if(str1[i]==str2[j])
			{
				j++;
			}
			else
			{
				j=0;
			}
			if(j==l)
			{	
				printf("\nPresent");
				break;
			}		
		i++;
		}
	if(j!=l)
	{
	printf("\nNot Present");
	}
	return 0;
}

