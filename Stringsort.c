#include<stdio.h>
#include<conio.h>
int main()
{
	char a[]={'r','g','b','g','b','r'};
	int i,l=0,t=0;
	l=sizeof(a)/sizeof(a[0]);
	for(i=1;i<l;i++)
	{
		if(a[i]<a[i-1])	
		{
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
			i=0;
		}
		if(a[i]==a[i-1])
		{
			continue;
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%c\t",a[i]);
	}
	return 0;
}

