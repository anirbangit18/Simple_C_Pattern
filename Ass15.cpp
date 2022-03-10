/*Q15.WAP to print the following pattern

12345678910
123456789
12345678
1234567
123456
12345
1234
123
12
1
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
			printf("%d",j);
		printf("\n");
		
	}
	return 0;
}
