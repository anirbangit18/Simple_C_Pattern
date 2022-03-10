/*Q18.WAP to print the following pattern

10101010101010101010
999999999
88888888
7777777
666666
55555
4444
333
22
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
			printf("%d",n+1-i);
		printf("\n");
		
	}
	return 0;
}
