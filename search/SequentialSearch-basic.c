
#include <stdio.h>

void SequentialSearch(int a[], int n, int key)
{
	int i = 0;
	printf("%d °Ë»ö: \n", key);

	while (i < n && a[i] != key)
	{
		i++;
	}

	if (i<n)
	{
		printf("%d °Ë»öO \n", i + 1);
	}
	else
	{
		printf("%d °Ë»öX \n", i + 1);
	}
}

void main()
{
	int a[] = { 6, 11, 16, 18, 33, 9 };

	int n = 2;

	SequentialSearch(a, n, 9);

	SequentialSearch(a, n, 6);
}
