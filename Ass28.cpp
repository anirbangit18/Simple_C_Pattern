/*28.WAP to print the following pattern

         J
        JI
       JIH
      JIHG
     JIHGF
    JIHGFE
   JIHGFED
  JIHGFEDC
 JIHGFEDCB
JIHGFEDCBA
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
			printf("%c",75-j);
		printf("\n");
	}
	return 0;
}
