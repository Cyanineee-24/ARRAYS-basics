#include<stdio.h>
//matrix diagonal sum1

int matrixSum( int rows, int columns,int arr [rows] [columns]);
void createArr( int rows, int columns, int arr [rows] [columns]);
void display ( int rows, int columns, int arr [rows] [columns]);

int main ()
{
	int rows, columns;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	printf("Enter the number of columns: ");
	scanf("%d", &columns);
	

	int arr[rows][columns];
	
		createArr(rows, columns, arr);
		display(rows, columns, arr);
		
	printf("The diagonal sum of the matrix is %d", matrixSum(rows, columns, arr));
	
	
	return 0;
}
int matrixSum( int rows, int columns,int arr [rows] [columns])
{
	int sum = 0;
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
		{
			if (j == i)
			{
				sum += arr[i][j];
			}
		}
	}
	return sum;
}
void createArr( int rows, int columns, int arr [rows] [columns])
{
	for (int i = 0; i<rows; i++)
	{
		for(int j = 0; j<columns; j++)
		{
				scanf("%d", &arr[i][j]);
		}
	
	}
} 
void display (int rows, int columns, int arr [rows] [columns])
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
