#include <stdio.h>

//find the second maximum element!
void createArr(int* arr,int size);
void display(int* arr, int size);
int findSecondMax(int* arr, int size);
int findThirdMax(int* arr, int size);
int main ()
{
	int size;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter the elements: ");
	createArr(arr, size);
	
	int result = findSecondMax(arr, size);
	printf("The second maximum value in the array is %d\n", result);
	
	int result2 = findThirdMax(arr, size);
	printf("The third maximum value in the array is %d\n", result2);
	return 0;
}
void createArr(int* arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void display(int* arr, int size)
{
	for (int i = 0; i<size; i++)
	{
		printf("%d", arr[i]);
	}
}
int findSecondMax(int* arr, int size)
{
	if (size<2)
	{
		return NULL;
	}
	int* max = &arr[0];
	int* secondmax = NULL;
	
	for (int i = 1; i<size;i++)
	{
		if (arr[i] > *max)
		{
			secondmax = max;
			max = &arr[i];
		}
		if (secondmax == NULL || arr[i] > *secondmax)
		{
			if (arr[i] < *max)
			{
				secondmax = &arr[i];
			}
		}
	}
	
	return *secondmax;
}
//what if third max anf pangitaon?
int findThirdMax(int* arr, int size)
{
	int* max = &arr[0];
	int* secondmax = NULL;
	int* thirdmax = NULL;
	
	for (int i = 1; i<size; i++)
	{
			if (arr[i] > *max) 
			{
				thirdmax = secondmax;
				secondmax = max;
				max = &arr[i];
			}
			else if (secondmax == NULL || arr[i]>*secondmax)
			{
				if (arr[i]<*max)
				{
					thirdmax = secondmax;
					secondmax = &arr[i];
				}
			}
			else if (thirdmax == NULL || arr[i]>*thirdmax)
			{
				if(arr[i]<*secondmax)
				{
					thirdmax = &arr[i];
				}
			}
	}
	return thirdmax ? *thirdmax : -1;
}

