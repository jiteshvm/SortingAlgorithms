#pragma once
#include <stdlib.h>

//declarations

void merge_sort(int *arr, int low, int high);
void merge(int *arr, int low, int mid, int high);

void merge_sort(int *arr, int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
#ifdef DEBUG
		printf("merge sort : ");
		for (int i = low; i <= high; ++i)
		{
			printf(" %d ", arr[i]);
		}
		printf(" \n");
#endif
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

void merge(int *arr, int low, int mid, int high)
{
#ifdef DEBUG
	printf("merge: ");
	for (int i = low; i <= high; ++i)
	{
		printf(" %d ", arr[i]);
	}
	printf(" \n");
#endif

	int n1 = mid - low + 1;
	int n2 = high - mid;

	int *left_arr = (int *) malloc( sizeof(int) * (n1 + 1) );
	int *right_arr = (int *) malloc( sizeof(int) * (n2 + 1) );

	int i,j;
	for (i = 0; i < n1; i++)
		left_arr[i] = arr[low + i];

	for (j = 0; j < n2; j++)
		right_arr[j] = arr[mid + j + 1];

	left_arr[n1] = right_arr[n2] = 99999;
	i =	j = 0;

	for (int k = low; k < high + 1; k++)
	{
		if (left_arr[i] <= right_arr[j])
		{
			arr[k] = left_arr[i];
			i++;
		}
		else
		{
			arr[k] = right_arr[j];
			j++;
		}
	}

	free(left_arr);
	free(right_arr);
}
