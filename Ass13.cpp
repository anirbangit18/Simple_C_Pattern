/*Q13.WAP to print the following pattern

**********
*********
********
*******
******
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the line no :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
			printf("*");
		printf("\n");
		
	}
	return 0;
}

