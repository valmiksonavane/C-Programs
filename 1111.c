#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char L1[100];
	char str[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n,n1,n2,n3,n4,n5;
	printf("Enter The Number:");
	scanf("%d",&n);
	n1=n/100;
	n2=n%10;
	n3=n%100;
	n4=n/10;
	if(n3<=26)
	{
		printf("%c%c\n",str[n1],str[n3]);	
	}
	if(n4<=26)
	{
		printf("%c%c\n",str[n4],str[n2]);		
	}
	n1=n/100;
	n3=n%100;
	n5=n3/10;
	n2=n%10;
	printf("%c\t%c\t%c",str[n1],str[n5],str[n2]);	
	return 0;
}

