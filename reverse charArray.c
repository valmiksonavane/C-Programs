#include<stdio.h>
void rev(char a[])
{
int i=0,l=0;
	
	while(a[i]!='\0')
	{
		l++;i++;
	}
	//printf("%d\n",l);
	for(i=l-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}	

}

int main()
{
	char a[]="valmik";
	rev(a);
	
	return 0;
}


