#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],temp;
	int i=0,j=0;
	printf("Enter The String To be reversed:");
	gets(string);
	j=strlen(string)-1;
	while(i<j)
	{
		temp=string[i];
		string[i]=string[j];
		string[j]=temp;
		i++;
		j--;
	}
	printf("\nThe Reverse String is:%s",string);
	return 0;
}
