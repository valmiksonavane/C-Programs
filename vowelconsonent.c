#include<stdio.h>
#include<conio.h>
int main()
{
	int vowel,consonent,space,i=0;
	char str[100];
	printf("Enter the Line:\n");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowel++;
		}
		else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			consonent++;
		}
		else if(str[i]==' ')
		{
			space++;
		}
		i++;
	}
	printf("\nVowels:%d",vowel);
	printf("\nConsonent:%d",consonent);
	printf("\nSpace:%d",space);
	return 0;
}

