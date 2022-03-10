/*29.WAP to print the following pattern
		 A
        BB
       CCC
      DDDD
     EEEEE
    FFFFFF
   GGGGGGG
  HHHHHHHH
 IIIIIIIII
JJJJJJJJJJ
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
			printf("%c",64+i);
		printf("\n");
	}
	return 0;
}
