//#include <iostream> // подключить библиотеку из системного каталога, где стоит VS
#include <algorithm>
#include <time.h>
#include "FillRand.h" // подключить библиотеку и файла проета
#include "Print.h"
#include "ShiftLeft.h"
#include "Sort.h"
#include "Statistics.h"
using namespace std;
#define tab "\t"

//1. Перегрузить функции +FillRand(), +Print(), +Sum(), +Avg(), +minValueIn(), +maxValueIn(), +Sort(), +ShiftLeft() и +ShiftRight()
//для типов данных : float, double и char.
//2. Написать функцию UniqueRandom() для массивов типа 'int' которая заполняет массив уникальными случайными числами.








//void Sort(int arr[], const int n)
//{
//	sort(arr, arr + n);
//}
//
//void swap(int i, int j, int arr[]) 
//{
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//
//
//
//}

 bool exist_checker(int crr[], const int m, int elem)
{
	for (int i = 0; i < m; i++)
	{ 
		
		if (elem == crr[i]) return true;

	  
	}
	return false;
}

void UniqueRandom(int crr[], const int m, int MAX) 
{
	// MAX is maximum possibele integer in array

	for (int i = 0; i < m; i++)
	{
		//check if value already exist in array
	
		
		do 
		{
			crr[i] = MAX * (float(rand()) / float((RAND_MAX)));
			//cout << crr[i] <<" " << exist_checker(crr, i, crr[i]) << endl;
			if (i == 0) break;

		} while (exist_checker(crr, i, crr[i]));
	
	}

}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	//cout << "Hello Functions!"<< endl;
	const int n = 5;
	float arr[n], sorted_arr[5];
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
	Sort2(arr, n);
	Print(arr, n);
	const int m = 10;
	int crr[m];
	UniqueRandom(crr, m, 10);
	Print(crr, m);
	/////////////////////////////////////////////
	//cout << "CHAR:\n";
	//const int SIZE_CHAR = 10;
	//char c_arr[SIZE_CHAR];
	//FillRand(c_arr, SIZE_CHAR);
	//Print(c_arr, SIZE_CHAR);
	//
	///////////////////////////////////////////////

	//cout << "FLOAT:\n";
	//const int SIZE_FLOAT = 10;
	//char f_arr[SIZE_CHAR];
	//FillRand(f_arr, SIZE_CHAR);
	//Print(f_arr, SIZE_CHAR);



	//const int m = 8;
	//int brr[m];
	//for (int i = 0; i < m; i++)
	//{
	//	brr[i] = rand();
	//}

	//Print(brr, m);

	//cout << "Input number of shifts" << endl; cin >> number_of_shifts;
	//Shift(brr, n, number_of_shifts);
	//Print(brr, m);

	return 0;
}


