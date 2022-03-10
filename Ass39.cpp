/*39.Write a program to print the following pattern

J J J J J J J J J J 
  I I I I I I I I I 
    H H H H H H H H 
      G G G G G G G 
        F F F F F F 
          E E E E E 
            D D D D 
              C C C 
                B B 
                  A 
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
			printf("%c",75-i);
		printf("\n");
	}
	return 0;
}
