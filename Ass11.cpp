/*Q11.Write a program to print the following pattern.

1
2 3
3 4 5
4 5 6 7
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the line no :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//row
	{
		k=i;//k=1
		for(j=1;j<=i;j++)//col
			printf("%d",k++);//
		printf("\n");
		
	}
	return 0;
}
