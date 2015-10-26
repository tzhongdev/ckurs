#include <stdio.h>
#include <stdlib.h>

//	DEF PRINT_ARRAY (arr, length)
//		for i in arr through length
//			print arr[i]
//	END
void print_array (int array[], int len)
{
	printf("Array:");
	for (int i = 0; i < len; ++i)
	{
		printf(" %d", array[i]);
		if (i != len - 1)
		{
			printf(",");
		}
							
	}
}

// DEF MIN (arr, length) 
//	int index_min = 0
//	for i in arr hrough length
//		if arr[i+1] < arr[index_min]
//			index_min = i + 1
//			break
//	return arr[index_min] 
// END
int min (int array[], int len)
{
	int index_min = 0;
	for (int i = 0; i < len; ++i)
	{
		if (array[i] < array[index_min])
		{
			index_min = i;
		}
	}
	return array[index_min];
}

// DEF MAX	(arr, length)
//	int index_max = 0
//	for i in arr through length
//		if arr[i+1] > arr[index_max]
//			index_max = i + 1
//			break	
//	return index_max
// END
int max (int array[], int len)
{
	int index_max = 0;
	for (int i = 0; i < len; ++i)
	{
		if (array[i] > array[index_max])
		{
			index_max = i;
		}
	}
	return array[index_max];
}
// DEF SUM (arr, length, int *ptr)
//	int sum = 0 	
//	for in in arr through length
//		sum += arr[i]
void sum (int array[], int len, int *result)
{
	for (int i = 0; i < len; ++i)
	{
		*result+= array[i];
	}
}

int main () 
{
	int array[] = {9, 4, 7, 8, 10, 5, 1, 6, 3, 2};
	int len = 10;
	int result = 0;
	print_array(array, len);

	printf("\nMinimum: %d\n", min(array, len));
	printf("Maximum: %d\n", max(array, len));

	sum(array, len, &result);
	printf("Summe: %d\n", result);

	return 0;

}
