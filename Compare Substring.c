#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[]="abate",str2[]="beat";
	int a,b=0,i=0,j=0;
	while(str2[i]!='\0')
	{
		b++;i++;
	}
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

