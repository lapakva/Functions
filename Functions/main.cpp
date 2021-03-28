#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
#define tab "\t"

//1. Перегрузить функции +FillRand(), +Print(), +Sum(), +Avg(), +minValueIn(), +maxValueIn(), +Sort(), +ShiftLeft() и +ShiftRight()
//для типов данных : float, double и char.
//2. Написать функцию UniqueRandom() для массивов типа 'int' которая заполняет массив уникальными случайными числами.



void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n); // double function overloading
void FillRand(float arr[], const int n); //float function overloading
void FillRand(char arr[], const int n); //char function overloading

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);


void Sort2(int arr[], const int n);
void Sort2(double arr[], const int n);
void Sort2(float arr[], const int n);
void Sort2(char arr[], const int n);

void Shift(int arr[], const int n, const int number_of_shifts);
void Shift(double arr[], const int n, const int number_of_shifts);
void Shift(float arr[], const int n, const int number_of_shifts);
void Shift(char arr[], const int n, const int number_of_shifts);

int  Sum(int arr[], const int n);
int  Sum(double arr[], const int n);
int  Sum(float arr[], const int n);
int  Sum(char arr[], const int n);

float  Avg(int arr[], const int n);
float  Avg(double arr[], const int n);
float  Avg(float arr[], const int n);
float  Avg(char arr[], const int n);


int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);

int  maxValueIn(int arr[], const int n);
double  maxValueIn(double arr[], const int n);
float  maxValueIn(float arr[], const int n);
char  maxValueIn(char arr[], const int n);

void ShiftRight(int arr[], const int n, const int number_of_shifts);
void ShiftRight(double arr[], const int n, const int number_of_shifts);
void ShiftRight(float arr[], const int n, const int number_of_shifts);
void ShiftRight(char arr[], const int n, const int number_of_shifts);


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << tab; cout << endl;

}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << tab; cout << endl;

}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << tab; cout << endl;

}
void Print(char arr[], const int n)
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
void Shift(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
void Shift(float arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
void Shift(char arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
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
int  Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++) { sum += arr[i]; };
	return  sum;

}
int  Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++) { sum += arr[i]; };
	return  sum;

}
int  Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++) { sum += arr[i]; };
	return  sum;

}

float  Avg(int arr[], const int n)
{
	float sum = Sum(arr, n);
	return sum / n;

}
float  Avg(double arr[], const int n)
{
	float sum = Sum(arr, n);
	return sum / n;

}
float  Avg(float arr[], const int n)
{
	float sum = Sum(arr, n);
	return sum / n;

}
float  Avg(char arr[], const int n)
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
double  minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
	return min;

}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
	return min;

}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
	return min;

}

int  maxValueIn(int arr[], const int n)
{
	
	int max = arr[0];
		for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	return max;
}
double  maxValueIn(double arr[], const int n)
{
	
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	return max;
}
float  maxValueIn(float arr[], const int n)
{
	
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	return max;
}
char  maxValueIn(char arr[], const int n)
{
	
	char max = arr[0];
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
void ShiftRight(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n-1];
		for (int j = n-1; j >= 0; j--)
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
		float buffer = arr[n-1];
		for (int j = n-1; j >= 0; j--)
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
		char buffer = arr[n-1];
		for (int j = n-1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;
	}
}

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

void Sort2(int arr[], const int n)
{
	// Selection sort
	for (int i = 0; i < n; i++) 
	{
		for (int j = i+1; j < n; j++)
		{ 
			if (arr[i] > arr[j]) 
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}  
		}
		

	}
	
}
void Sort2(double arr[], const int n)
{
	// Selection sort
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}


	}

}

void Sort2(float arr[], const int n)
{
	// Selection sort
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}


	}

}
void Sort2(char arr[], const int n)
{
	// Selection sort
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}


	}

}


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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // random from 0 to 32 676

	}
}
//double overloading
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // random from 0 to 32 676

	}
}
// floar overloading
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand()) / float((RAND_MAX));// random floatr from 0 to 1
		
	}
}
// char overloading
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // random from 0 to 32 676
		
	}
}



