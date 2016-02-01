#pragma once

void merge(int *arr, int p, int q, int r);

void merge_sort(int *arr, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

void merge(int *arr, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	int *L = new int[n1+1];
	int *R = new int[n2+1];

	int i,j;
	for (i = 0; i < n1; i++)
		L[i] = arr[p + i];

	for (j = 0; j < n2; j++)
		R[j] = arr[q + j + 1];

	L[n1] = 99999;
	R[n2] = 99999;
	i = 0;
	j = 0;

	for (int k = p; k < r + 1; k++)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
	}

}
