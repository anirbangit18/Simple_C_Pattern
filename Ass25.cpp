/*25.WAP to print the following pattern

         0
        11
       222
      3333
     44444
    555555
   6666666
  77777777
 888888888
9999999999
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
			printf("%d",i-1);
		printf("\n");
	}
	return 0;
}
