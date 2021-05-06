#include <iostream>
using namespace std;

template<typename T>
void Swap(T* arr, int x, int y)
{
	T temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

// 2. Cocktail shaker sort (Complexity - 0(n^2))
template<typename T>
void CocktailShakerSort(T* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		bool isSwapped = false;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(arr, j, j + 1);
				isSwapped = true;
			}
		}
		if (!isSwapped)
			return;

		for (int j = len - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				Swap(arr, j, j - 1);
				isSwapped = true;
			}
		}
		if (!isSwapped)
			return;
	}
}

int main()
{
}