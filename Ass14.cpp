/*Q14.WAP to print the following pattern

1111111111
222222222
33333333
4444444
555555
66666
7777
888
99
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
			printf("%d",i);
		printf("\n");
		
	}
	return 0;
}

