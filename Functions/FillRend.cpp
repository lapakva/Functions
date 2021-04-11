#include "FillRand.h"

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