#include <iostream>
#include <string>

using namespace std;

//Задана матрица размером M x N.Получить массив B, присвоив его k - му элементу
//значение 0, если все элементы k - го столбца матрицы нулевые, и значение 1 − в
//противном случае

int main() {
	setlocale(LC_ALL, "RUS");
	int x, y;
	string msg = "Массивы: \n";
	cout << "Введите координаты матрицы x и y: ";
	cin >> x;
	cin >> y;

	int** matrix = new int*[y];      //Создание мвтрицы 
	for (int i = 0; i < y; i++) {
		matrix[i] = new int[x];
	}

	cout << "Введите данные в массивы: \n";

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cin >> matrix[i][j];
			msg += to_string(matrix[i][j]);
			msg += matrix[i][j] < 10 ? "  " :  " ";
		}
		msg += "\n";
	}

	cout << msg;

	return 0;
}