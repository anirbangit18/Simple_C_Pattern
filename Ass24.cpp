/*24.WAP to print the following pattern

         9
        98
       987
      9876
     98765
    987654
   9876543
  98765432
 987654321
9876543210
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
			printf("%d",n-j);
		printf("\n");
	}
	return 0;
}
