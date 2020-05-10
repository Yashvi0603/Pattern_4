/*
	Name: C Program for Print Pattern
	INPUT = 5
		*
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter Number : "); 
	scanf("%d",&n);
	n*=2;
	for(i=1;i<=n;i+=2)
	{
		for(j=i+1;j<n;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
}
