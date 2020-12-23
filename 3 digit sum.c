#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={10,20,100,300,56,7,8888,200};
	int i=0,sum=0;
	while(a[i]!='\0')
	{
		if(a[i]>=100 && a[i]<=999)
		{
			sum=sum+a[i];
		}
		i++;
	}
	printf("%d",sum);
	return 0;
}
