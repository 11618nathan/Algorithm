
#include <stdio.h>

void Swap(int * A, int * B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

int Partition(int DataSet[], int Left, int Right)
{
	int First = Left;
	int Pivot = DataSet[First];

	++Left;

	while (Left <= Right)
	{
		while (DataSet[Left] <= Pivot && Left < Right)
		{
			++Left;
		}
		while (DataSet[Right] > Pivot && Left <= Right)
		{
			--Right;
		}
		
		if (Left < Right)
			Swap(&DataSet[Left], &DataSet[Right]);
		else
			break;
	}

	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}


void QuickSort(int DataSet[], int Left, int Right)
{
	if (Left < Right)
	{
		int Index = Partition(DataSet, Left, Right);

		QuickSort(DataSet, Left, Index - 1);
		QuickSort(DataSet, Index + 1, Right);
	}
}


int main()
{
	int DataSet[] = { 7, 6, 5, 4, 3, 2, 1 };
	int Length = sizeof DataSet / sizeof DataSet[0];

	int i = 0;

	for ( i = 0; i < Length; i++)
	{
		printf("%d ", DataSet[i]);
	}

	printf("\n");

	return 0;
}
