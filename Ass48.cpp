/*Q48.Write a program to print the following pattern

1 2 3 4 5 6 7 8 9 10
 1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 8
   1 2 3 4 5 6 7
    1 2 3 4 5 6
     1 2 3 4 5
      1 2 3 4
       1 2 3
        1 2
         1
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
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}

