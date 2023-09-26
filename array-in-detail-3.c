#include<stdio.h>
int main()
{
	int r,c;
	
	printf(".....ENTER THE ROW SIZE.....\n");
	scanf("%d",&r);
	printf("\n.....ENTER THE COLUMN SIZE.....\n");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum =0,ave;
	int size;
	printf("Enter Array Element\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	size =sizeof(a)/sizeof(a[0]);
	printf("Size of Array = %d\n",size);
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
			sum = sum  +  a[i][j];
		}		
	}
	printf("SUM OF 2D array = %d\n",sum);
	
	ave = sum/size;
	printf("Average of Array = %d",ave);
}
