/*Q44.Write a program to print the following pattern

         A
        A B
       A B C
      A B C D
     A B C D E
    A B C D E F
   A B C D E F G
  A B C D E F G H
 A B C D E F G H I
A B C D E F G H I J
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
			printf("%c ",64+j);
		printf("\n");
	}
	return 0;
}


