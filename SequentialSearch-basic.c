
#include <stdio.h>

void SequentialSearch(int a[], int n, int key)
{
	int i = 0;
	printf("%d 검색: \n", key);

	while (i < n && a[i] != key)
	{
		i++;
	}

	if (i<n)
	{
		printf("%d 검색O \n", i + 1);
	}
	else
	{
		printf("%d 검색X \n", i + 1);
	}
}

void main()
{
	int a[] = { 6, 11, 16, 18, 33, 9 };

	int n = 2;

	SequentialSearch(a, n, 9);

	SequentialSearch(a, n, 6);
}