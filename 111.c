#include<stdio.h>
int main()
{
	char L1[100];
	char str[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n,n1,l1,l2,l3,l=0,count;
	printf("Enter the Number");
	scanf("%d",&n);
	while(n!=0)
	{
		n1=n%10;
		n=n/10;
		count++;
	}
	printf("%d",count);
	if(count==2)
	{
		l1=n;
		n1=n%10;
		n=n/10;
		printf("%c %c",str[n],str[n1]);
		printf("\n %c",str[l1]);
	}
}
