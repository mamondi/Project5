#include <iostream>

using namespace std;
//Створіть двовимірний масив. Заповніть його випадковими числами та покажіть на екран. Користувач обирає кількість зсувів і положення (ліворуч, праворуч, вгору, вниз). Виконати зсув масиву і показати на екран отриманий результат. Зсув циклічний.
int main() {
		int n, m;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int shift;
	cout << "Enter shift: ";
	cin >> shift;
	int direction;
	cout << "Enter direction: ";
	cin >> direction;
	int temp;
	if (direction == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < shift; j++) {
				temp = arr[i][0];
				for (int k = 0; k < m - 1; k++) {
					arr[i][k] = arr[i][k + 1];
				}
				arr[i][m - 1] = temp;
			}
		}
	}
	else if (direction == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < shift; j++) {
				temp = arr[i][m - 1];
				for (int k = m - 1; k > 0; k--) {
					arr[i][k] = arr[i][k - 1];
				}
				arr[i][0] = temp;
			}
		}
	}
	else if (direction == 3) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < shift; j++) {
				temp = arr[0][i];
				for (int k = 0; k < n - 1; k++) {
					arr[k][i] = arr[k + 1][i];
				}
				arr[n - 1][i] = temp;
			}
		}
	}
	else if (direction == 4) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < shift; j++) {
				temp = arr[n - 1][i];
				for (int k = n - 1; k > 0; k--) {
					arr[k][i] = arr[k]
				}
			}
		}
	}
}