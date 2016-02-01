#define ARRAY_SIZE(array) (sizeof(array)/sizeof((array)[0]))

#include <stdio.h>
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"

int main(int argc, char **argv)
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int size = ARRAY_SIZE(arr);

	merge_sort(arr, 0, (ARRAY_SIZE(arr) - 1));

	printf("Sorted array : \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d \n", *(arr + i));
	}
	getchar();
	return 0;
}


