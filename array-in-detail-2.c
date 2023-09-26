#include<stdio.h>
int main()
{
    int a[5][6];  
	int row,column;
	row= sizeof (a)/ sizeof (a[0]);
    column = sizeof (a[0])/ sizeof(a[0][0]);
    
    printf("row size = %d\n",row);
    printf("column size = %d",column);
 
}
