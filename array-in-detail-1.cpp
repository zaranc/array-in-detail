#include<stdio.h>
int main()
{
	int row,column;
	
	printf(".....ENTER THE ROW SIZE.....\n");
	scanf("%d",&row);
	printf("\n.....ENTER THE COLUMN SIZE.....\n");
	scanf("%d",&column);
	
	int a[row][column];
	
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("POSITION OF ROW AND COLUMN a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
}
