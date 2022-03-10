/*Q8.WAP to print the following pattern
 
J 
J I 
J I H 
J I H G 
J I H G F 
J I H G F E 
J I H G F E D 
J I H G F E D C 
J I H G F E D C B 
J I H G F E D C B A 
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
			printf("%c ",75-j);//'J'-j+1// 75-j
		printf("\n");
		
	}
	
	return 0;
}
