/*Q21.WAP to print the following pattern

JIHGFEDCBA
JIHGFEDCB
JIHGFEDC
JIHGFED
JIHGFE
JIHGF
JIHG
JIH
JI
J
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
			printf("%c",75-j);//75-i
		printf("\n");
		
	}
	return 0;
}
