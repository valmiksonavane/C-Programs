#include<stdio.h>
#include<conio.h>
void main()
{
//	char str1[]="abate",str2[]="beat";
	char str1[10],str2[10];
	int a,b=0,i=0,j=0,c=0;
	printf("Enter first String:	");
	scanf("%s",&str1);
	printf("Enter Second String:	");
	scanf("%s",&str2);
	while(str2[i]!='\0')
	{
		b++;i++;
	}
	
	printf("%d",i);
	while(str1[i]!='\0')
	{
		c++;i++;
	}
	printf("%d",c);
//	printf("Length of String 2:%d",b);
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

