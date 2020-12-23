#include<stdio.h>
 
void main()
{
	int a[20], N, i, fbig, sbig, temp;
 
	printf("Enter array limit\n");
	scanf("%d", &N);
 
	printf("Enter %d array elements\n", N);
	for(i=0; i < N ; i++)
	{
		scanf("%d", &a[i]);	
	}
	fbig = a[0];
	sbig = a[1];
 
	for(i=2; i < N ; i++)
	{
		if(a[i] > fbig)
 		{
		sbig = fbig;
		fbig = a[i];
 		}
 		else if(a[i] > sbig)
		{
			sbig = a[i];		
		}
	}
 	 
 printf("First Big is %d and Second big is %d", fbig, sbig);

}		
