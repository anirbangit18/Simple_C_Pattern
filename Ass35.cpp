/*35.Write a program to print the following pattern

9 9 9 9 9 9 9 9 9 9 
  8 8 8 8 8 8 8 8 8 
    7 7 7 7 7 7 7 7 
      6 6 6 6 6 6 6 
        5 5 5 5 5 5 
          4 4 4 4 4 
            3 3 3 3 
              2 2 2 
                1 1 
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
			printf("%d",n-i);
		printf("\n");
	}
	return 0;
}
