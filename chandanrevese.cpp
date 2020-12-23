#include<stdio.h>
int main()
{
	char s[]="chandan";
	int i=0;
	/*while( s[i] != '\0')
	{
		i++;
	}*/
	int l=sizeof(s)/sizeof(s[0]);
//	int l=i;
	i=0;
	int j=l-2;
	while(i<j)
	{
		char c;
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		i++;
		j--;
	}
	printf("\n%s\n",s);
}
