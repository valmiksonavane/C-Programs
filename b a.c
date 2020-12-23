#include<stdio.h>
int main()
{
	int s1len,s2len;
	char str1[100],str2[100],temp;
	scanf("%s",str1);
	scanf("%s",str2);
	int i=0,j=0,b=0;
	while(str1[i] != '\0')
	{
		i++;
	}
	s1len=i;
	i=0;
	while(str2[i] != '\0')
	{
		i++;
	}
	s2len=i;
	i=0;	
	if(s1len>s2len)
	{
		int index=0;
		while(str1[index] != '\0')
		 {
		temp=str1[index];
		str1[index]=str2[index];
		str2[index]=temp;
		index++;
		}
	}
	else
	{	
	int index=0;
			while(str2[index] != '\0')
		 {
		temp=str2[index];
		str2[index]=str1[index];
		str1[index]=temp;
		index++;
		}
	}
	while(str2[i]!='\0')
	{
		if(str1[i]==str2[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
		if(j==b)
	{	
	printf("\nPresent");
	break;
		}		
		i++;
	}
	if(j!=b)
	{
	printf("\nNot Present");
	}
}
