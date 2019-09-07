#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h>
using namespace std;

/*

Салтыков Максим
ТА 1913, ИЭКСУ
Лабораторная работа №3, Вариант 4

*/


int main() {
	setlocale(LC_ALL, "RUS");

	const int i = 5;  // изменение размеров по i и j
	const int j = 4;

	int arr[i][j];

	for (int i_1 = 0; i_1 < i ; i_1++) {  // двойной цикл создания массива

		for (int i_2 = 0; i_2 < j; i_2++) {

			if (i_1 == 1 - 1) {
				arr[i_1][i_2] = 2 * i_1 + 3;
			}
			else if (i_1 == 2 - 1) {
				arr[i_1][i_2] = abs(i_1 - i_2);
			}
			else {
				arr[i_1][i_2] = arr[i_1 - 1][i_2] + arr[i_1 - 2][i_2];

			}

		}

	}

	cout << "	";

	for (int i_1 = 0; i_1 < j; i_1++) {  // вывод номеров столбцов
		
		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;

	for (int i_1 = 0; i_1 < i; i_1++) { // двойной цикл вывода

		cout << i_1 + 1 << "-	";  // вывод номеров строк

		for (int i_2 = 0; i_2 < j; i_2++) {


			cout << arr[i_1][i_2] << "	";


		}

		cout << endl;

	}


	_getch(); // приостановка выполнения приложения (в моей версии без этого консоль сразу закрывается по выполнении кода)

	return 0;
}