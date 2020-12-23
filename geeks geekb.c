#include<stdio.h>
int compare(char a,char b)
{
	if((int)a>(int)b)
	return 1;
	else if ((int)a<(int)b)
	return -1;
	else
	return 0;
}
int main(){
	char s1[20];
	char s2[20];
	scanf("%s %s",s1,s2);
	int s1len,s2len;
	int i=0;
	while(s1[i] != '\0')
	{
		i++;
	}
	s1len=i;
	i=0;
	while(s2[i] != '\0')
	{
		i++;
	}
	s2len=i;
	i=0;
	while(i<s1len && i<s2len)
	{
		int c=compare(s1[i],s2[i]);
		if(c==1)
		{
			printf("%s is greater than %s or : 1",s1,s2);
			return 0;
		}
		else if(c==-1)
		{
			printf("%s is smaller than %s or : -1",s1,s2);
			return 0;
		}
		i++;
	}
	if(s1len==s2len)
	printf("%s is equal to %s or : 0",s1,s2);
	else if(s1len>s2len)
	printf("%s is greater than %s : 1",s1,s2);
	else printf("%s is smaller than %s : -1",s1,s2);	
}
