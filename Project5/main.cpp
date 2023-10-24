#include <iostream>
#include <ctime>
using namespace std;


int main()
{
i = 0;
	int j = 0;

	srand(time(NULL));
	for (i = 0; i < lenth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			arr[i][j] = rand() % -10;
		}
	}

	for (i = 0; i < lenth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int sum = 0;

	for (i = 0; i < lenth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Sum of all elements is " << sum << endl;

	int average = 0;

	for (i = 0; i < lenth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			average += arr[i][j];
		}
	}
	average /= (lenth * width);
	cout << "Average of all elements is " << average << endl;
	int min = arr[0][0];
	int max = arr[0][0];

	for (i = 0; i < lenth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	cout << "Min element is " << min << endl;
	cout << "Max element is " << max << endl;
	return 0;
}
