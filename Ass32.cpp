/*32.Write a program to print the following pattern

0 1 2 3 4 5 6 7 8 9 
  0 1 2 3 4 5 6 7 8 
    0 1 2 3 4 5 6 7 
      0 1 2 3 4 5 6 
        0 1 2 3 4 5 
          0 1 2 3 4 
            0 1 2 3 
              0 1 2 
                0 1 
                  0 
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the line no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<i;j++)
			printf(" ");
		for(j=1;j<=n+1-i;j++)
			printf("%d",j-1);
		printf("\n");
	}
	return 0;
}
