#include <iostream>

using namespace std;
//�������� ��������, ��� ������� ���������� ����� � �������� ���� �� ����� ���������: ���������� ������� ����� (���������, 3); ������ ������� ������ ������ �������� ����� �����; ��������� ������� ������ ������ �������� ����� ����� + 1 (����� 4 ��� ������ ��������); ����� ������� ������ � ��������� ������� + 1 (����� 5 ��� ������ ��������). ��������� ����� ������� �� �����.
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int **arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		arr[i][0] = n;
		for (int j = 1; j < n; j++)
		{
			arr[i][j] = arr[i][j - 1] + 1;
		}
	}
	cout << "Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Row " << i << ": ";
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;

}