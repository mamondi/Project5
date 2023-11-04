#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	const int ROWS = 5;
	const int COLS = 5;
	int arr[ROWS][COLS];
	int sum = 0;
	int sumRow = 0;
	int sumCol = 0;
	int sumAll = 0;

	for (int i = 0; i < ROWS; i++)
	{
		sumRow = 0;
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
			sumRow += arr[i][j];
		}

		cout << "Sum row " << i << " = " << sumRow << endl;
		sum += sumRow;
	}
	cout << endl;

	for (int i = 0; i < COLS; i++)
	{
		sumCol = 0;
		for (int j = 0; j < ROWS; j++)
		{
			sumCol += arr[j][i];
		}
		cout << "Sum col " << i << " = " << sumCol << endl;
		sumAll += sumCol;
	}
	cout << "Sum all cols = " << sumAll << endl;
	cout << endl;



	return 0;
}
