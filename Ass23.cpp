/*23.WAP to print the following pattern

         0
        01
       012
      0123
     01234
    012345
   0123456
  01234567
 012345678
0123456789
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the line no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",j-1);
		printf("\n");
	}
	return 0;
}

