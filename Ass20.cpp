/*Q20.WAP to print the following pattern

JJJJJJJJJJ
IIIIIIIII
HHHHHHHH
GGGGGGG
FFFFFF
EEEEE
DDDD
CCC
BB
A
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
			printf("%c",'K'-i);//75-i
		printf("\n");
		
	}
	return 0;
}
