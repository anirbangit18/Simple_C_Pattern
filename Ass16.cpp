/*Q16.WAP to print the following pattern

AAAAAAAAAA
BBBBBBBBB
CCCCCCCC
DDDDDDD
EEEEEE
FFFFF
GGGG
HHH
II
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
			printf("%c",64+i);
		printf("\n");
		
	}
	return 0;
}
