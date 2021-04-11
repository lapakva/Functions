//1. Перегрузить функции +FillRand(), +Print(), +Sum(), +Avg(), +minValueIn(), +maxValueIn(), +Sort(), +ShiftLeft() и +ShiftRight()
//для типов данных : float, double и char.
//2. Написать функцию UniqueRandom() для массивов типа 'int' которая заполняет массив уникальными случайными числами.
#include "Shift.h"


void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;
	}
}
void ShiftRight(float arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;
	}
}
void ShiftRight(char arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;
	}
}
