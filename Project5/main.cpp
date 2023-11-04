#include <iostream>

using namespace std;
//Напишіть програму, в якій оголошується масив розміром 5х10 і масив розміром 5х5. Перший масив заповнюється випадковими числами у діапазоні від 0 до 50. Другий масив заповнюється за таким принципом: перший елемент другого масиву дорівнює сумі першого і другого елемента першого масиву, другий елемент другого масиву дорівнює сумі третього і четвертого елемента першого масиву.
int main() {
	const int rows = 5;
	const int columns = 10;
	int arr[rows][columns];
	int arr2[rows][rows];
	int sum = 0;
	srand(time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; ++j) {
			arr[i][j] = rand() % 50;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; ++j) {
			sum += arr[i][j];
			arr2[i][j] = sum;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}