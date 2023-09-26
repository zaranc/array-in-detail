#include<stdio.h>
int main()
{
	int row,column,sum=0,sum2=0,total=0;
	
	printf(".....ENTER THE ROW SIZE.....\n");
	scanf("%d",&row);
	printf("\n.....ENTER THE COLUMN SIZE.....\n");
	scanf("%d",&column);
	
	int a[row][column];
	
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
	
	printf(".....ROW WISE SUM OF ELEMNET......\n");  
	for(i=0;i<row;i++)
	{
		
		for(j=0;j<column;j++)
		{
			if(i==j)
			{
			sum = sum  +  a[i][j];
			}
			if(i+j==2)
			{
			sum2 = sum2  +  a[i][j];
			}
		}
			
		printf("\n");
	}
	total = sum + sum2;
	printf("SUM OF CROSS DIOGNOAL IS %d = ",total);
}
