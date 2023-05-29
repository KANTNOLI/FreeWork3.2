#include <iostream>
#include <string>

using namespace std;

//Задана матрица размером M x N.Получить массив B, присвоив его k - му элементу
//значение 0, если все элементы k - го столбца матрицы нулевые, и значение 1 − в
//противном случае

int main() {
	setlocale(LC_ALL, "RUS");
	int x, y;
	bool flag = true; //смотрит, есть ли в массиве k символы не 0
	string msg = "Массивы: \n";
	cout << "Введите координаты матрицы x и y: ";
	cin >> x;
	cin >> y;

	int** matrix = new int* [y];      //Создание матрицы 
	for (int i = 0; i < y; i++) {
		matrix[i] = new int[x];
	}

	int* vector = new int[y];
	cout << "Введите данные в массивы: \n";

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cin >> matrix[i][j];
			msg += to_string(matrix[i][j]);
			if (flag) { // выполняется только в том случае, если не встречалось элементов в масиве не равных 0
				flag = matrix[i][j] == 0; 
			}
			msg += matrix[i][j] < 10 ? "  " : " ";
		}
		msg += flag ? "- 0" : "- 1";
		vector[i] = flag ? 0 : 1;

		flag = true; 
		msg += "\n";
	}

	msg += "Массив K равен: ";

	for (int i = 0; i < y; i++) {
		msg += to_string(vector[i]) + " ";
	}

	cout << msg << endl;
	return 0;
}