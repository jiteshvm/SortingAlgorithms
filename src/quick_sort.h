#pragma once

//declarations
void quick_sort(int *arr, int low, int high);
int partition(int *arr, int low, int high);

void quick_sort(int *arr, int low, int high)
{
	if (low < high)
	{
		int mid = partition(arr, low, high);
		quick_sort(arr, low, mid - 1);
		quick_sort(arr, mid + 1, high);

	}
}

int partition(int *arr, int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	int temp;
	for (int j = low; j < high; ++j)
	{
		if (arr[j] >= pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;

	return (i + 1);
}
