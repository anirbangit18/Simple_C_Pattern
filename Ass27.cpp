/*27.WAP to print the following pattern

         A
        AB
       ABC
      ABCD
     ABCDE
    ABCDEF
   ABCDEFG
  ABCDEFGH
 ABCDEFGHI
ABCDEFGHIJ
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
			printf("%c",64+j);
		printf("\n");
	}
	return 0;
}
