/*Q43. Write a program to print the following pattern

         A
        B B
       C C C
      D D D D
     E E E E E
    F F F F F F
   G G G G G G G
  H H H H H H H H
 I I I I I I I I I
J J J J J J J J J J
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
			printf("%c ",64+i);
		printf("\n");
	}
	return 0;
}



