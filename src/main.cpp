#define ARRAY_SIZE(array) (sizeof(array)/sizeof((array)[0]))
//#define DEBUG

#include <stdio.h>
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

int main(int argc, char **argv)
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = ARRAY_SIZE(arr);

	quick_sort(arr, 0, (ARRAY_SIZE(arr) - 1));

	printf("\nSorted array : ");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", *(arr + i));
	}
	getchar();
	return 0;
}


