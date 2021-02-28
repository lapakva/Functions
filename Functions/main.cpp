#include <iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // random from 0 to 32 676

	}
}

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

int main()
{
	
	setlocale(LC_ALL, "");
	cout << "Hello Functions!"<< endl;
	const int n = 5;
	int arr[n];
	// fill the array with random numbers

	FillRand(arr, n);
	Print(arr, n);

	int number_of_shifts;
	cout << "Input number of shifts"; cin >> number_of_shifts;
	Shift(arr, n, number_of_shifts);
	Print(arr, n);


	const int m = 8;
	int brr[m];
	for (int i = 0; i < m; i++)
	{
		brr[i] = rand();
	}

	Print(brr, m);

	cout << "Input number of shifts"; cin >> number_of_shifts;
	Shift(brr, n, number_of_shifts);
	Print(brr, m);

	return 0;
}