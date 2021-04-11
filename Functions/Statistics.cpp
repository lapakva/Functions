#include "Statistics.h"

template <typename T> void Shift(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
template <typename T> T  Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++) { sum += arr[i]; };
	return  sum;

}
template <typename T> double  Avg(T arr[], const int n)
{
	double sum = Sum(arr, n);
	return sum / n;

}
template <typename T> T  minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
	return min;

}
template <typename T> T  maxValueIn(T arr[], const int n)
{

	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	return max;
}

template <typename T>
void Sort2(T arr[], const int n)
{
	// Selection sort
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}


	}

}