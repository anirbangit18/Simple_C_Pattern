/*Q19.WAP to print the following pattern

10987654321
1098765432
109876543
10987654
1098765
109876
10987
1098
109
10
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
			printf("%d",n+1-j);
		printf("\n");
		
	}
	return 0;
}
