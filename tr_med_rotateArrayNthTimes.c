#include <stdio.h>

void createArr(int* arr, int size);
void rotateArr(int* arr, int size, int k);
void display(int* arr, int size);
int main ()
{
	int size, k;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter the elements of the array: \n");
	createArr(arr, size);
	
	printf("Enter the number of positions to rotate: ");
	scanf("%d", &k);
	
	rotateArr(arr, size, k);
	printf("Rotated Array: ");
	display(arr, size);
	
	return 0;
}
void createArr(int* arr, int size)
{
	for (int i = 0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void display(int* arr, int size)
{
	for (int i = 0; i<size; i++)
	{
			printf("%d ", arr[i]);
	}

}
void rotateArr(int* arr, int size, int k)
{
	for (int rot = 1; rot<=k; rot++)
	{
		int temp;
		temp = arr[size-1];
		
		for (int i = size-1; i>0; i--)
		{
			arr[i] = arr[i-1];
		} 
		arr[0] = temp;
	}
	
}
