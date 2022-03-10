/*26.WAP to print the following pattern

         10
        99
       888
      7777
     66666
    555555
   4444444
  33333333
 222222222
1111111111
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
			printf("%d",n-i+1);
		printf("\n");
	}
	return 0;
}
