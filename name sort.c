#include<stdio.h>
#include<conio.h>
int main()
{
	int t,i;
	char str[]={'aaa','ccc','bbbb'};
	for(i=1;i<=;i++)
	{
		if(str[i]<str[i-1])
		{
			t=str[i];
			str[i]=str[i-1];
			str[i-1]=t;
			i=0;
		}
	}
	for(i=1;i<='\0';i++)
	{
		puts(str);
		//prinf("%s",str);	
	}
	return 0;
}
