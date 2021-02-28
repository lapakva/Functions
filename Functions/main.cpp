#include <iostream>
using namespace std;
#define tab "\t"

int main()
{
	
	setlocale(LC_ALL, "");
	cout << "Hello Functions!"<< endl;
	const int n = 5;
	int arr[n];
	// fill the array with random numbers

	for (int i=0; i<n; i++)
	{
		arr[i] = rand(); // random from 0 to 32 676

	}
	for (int x : arr) cout << x << tab; cout << endl;

	int number_of_shifts;
	cout << "Input number of shifts"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
	for (int x : arr) cout << x << tab; cout << endl;


	const int m = 5;
	int brr[m];
	for (int i = 0; i < m; i++)
	{
		brr[i] = rand();
	}

	for (int x : brr) cout << x << tab; cout << endl;

	cout << "Input number of shifts"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = brr[0];
		for (int j = 0; j < m; j++)
		{
			brr[j] = brr[j + 1];

		}
		brr[m - 1] = buffer;
	}
	for (int x : brr) cout << x << tab; cout << endl;

	return 0;
}