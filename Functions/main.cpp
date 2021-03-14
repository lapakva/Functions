#include <iostream>
#include <algorithm>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n);

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << tab; cout << endl;

}

void Shift(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}


int  Sum(int arr[], const int n) 
{
	int sum = 0;
	for (int i = 0; i < n; i++) { sum += arr[i]; };
	return  sum;

}

float  Avg(int arr[], const int n)
{
	float sum = Sum(arr, n);
	return sum / n;

}

int  minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
	return min;

}

int  maxValueIn(int arr[], const int n)
{
	
	int max = arr[0];
	int min_idx = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	return max;
}

void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int j = n-1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;
	}
}

void Sort(int arr[], const int n)
{
	sort(arr, arr + n);
}

void sweep(int i, int j, int arr[]) 
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;



}

void Sort2(int arr[], const int n)
{

	for (int i = 0; i < n; i++) 
	{
		int first_elem = arr[i]; 
		int elem = minValueIn(arr,n);

	}
	
}

int main()
{
	
	setlocale(LC_ALL, "");
	cout << "Hello Functions!"<< endl;
	const int n = 5;
	int arr[n], sorted_arr[5];
	// fill the array with random numbers

	FillRand(arr, n);
	Print(arr, n);

	int number_of_shifts;
	cout << "Input number of shifts"<< endl; cin >> number_of_shifts;
	Shift(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Input number of Rigth shifts" << endl; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Sum of the array arr:" << Sum(arr, n)<< endl;
	cout << "Avarage of the array arr:" << Avg(arr, n) << endl;
	cout << "Min Value of arr: " << minValueIn(arr, n) << endl;
	cout << "Max Value of arr: "<< maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	const int m = 8;
	int brr[m];
	for (int i = 0; i < m; i++)
	{
		brr[i] = rand();
	}

	Print(brr, m);

	cout << "Input number of shifts" << endl; cin >> number_of_shifts;
	Shift(brr, n, number_of_shifts);
	Print(brr, m);

	return 0;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // random from 0 to 32 676

	}
}