
#include <stdio.h>

void bubbleSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < Length - 1; i++)
	{
		for (j = 0; j < Length - (i + 1); j++)
		{
			if (DataSet[j] > DataSet[j + 1])
			{
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}


int main()
{
	int DataSet[] = { 7, 6, 5, 4, 3, 2, 1 };
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	bubbleSort(DataSet, Length);

	for ( i = 0; i < Length; i++)
	{
		printf("%d ", DataSet[i]);
	}

	printf("\n");

	return 0;
}
