/*Q5.WAP to print the following pattern
0 
1 1 
2 2 2 
3 3 3 3 
4 4 4 4 4 
5 5 5 5 5 5 
6 6 6 6 6 6 6 
7 7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 8 
9 9 9 9 9 9 9 9 9 9 
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the line no :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",i-1);
		printf("\n");
		
	}
	
	return 0;
}


