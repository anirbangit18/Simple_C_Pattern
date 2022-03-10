/*37.Write a program to print the following pattern

J I H G F E D C B A 
  J I H G F E D C B 
    J I H G F E D C 
      J I H G F E D 
        J I H G F E 
          J I H G F 
            J I H G 
              J I H 
                J I 
                  J 
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
			printf("%c",75-j);
		printf("\n");
	}
	return 0;
}

