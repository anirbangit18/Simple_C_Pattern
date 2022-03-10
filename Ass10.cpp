/*Q10.WAP to print the following pattern

J 
I I 
H H H 
G G G G 
F F F F F 
E E E E E E 
D D D D D D D 
C C C C C C C C 
B B B B B B B B B 
A A A A A A A A A A 
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
			printf("%c ",75-i );//'J'-i+1
		printf("\n");
		
	}
	
	return 0;
}

