#include<stdio.h>
int main()
{
	int row,column;
	
	printf(".....ENTER THE ROW SIZE.....\n");
	scanf("%d",&row);
	printf("\n.....ENTER THE COLUMN SIZE.....\n");
	scanf("%d",&column);
	
	int a[row][column];
	int b[row][column];
	int sum[row][column];
	
	int i,j;
	
	printf(".....ENTER THE FIRST ARRAY ELEMNET......\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("POSITION OF ROW AND COLUMN a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf(".....ENTER THE SECOND ARRAY ELEMNET......\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("POSITION OF ROW AND COLUMN a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
			
		}
		printf("\n");
	}
	
	printf(".....SUM OF BOTH ARRAY ELEMNET......\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d",sum[i][j]);
			
		}
		printf("\n");
	}
}
