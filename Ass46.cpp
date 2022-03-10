/*Q46.Write a program to print the following pattern

1 1 1 1 1 1 1 1 1 1
 2 2 2 2 2 2 2 2 2
  3 3 3 3 3 3 3 3
   4 4 4 4 4 4 4
    5 5 5 5 5 5
     6 6 6 6 6
      7 7 7 7
       8 8 8
        9 9
         10
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
			printf("%d ",i);
		printf("\n");
	}
	return 0;
}
