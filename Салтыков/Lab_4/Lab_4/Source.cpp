#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <random>
#include <time.h>
using namespace std;

/*

Салтыков Максим
ТА 1913, ИЭКСУ
Лабораторная работа №4, Вариант 4

*/


int main() {
	setlocale(LC_ALL, "RUS"); // + russian language

	srand(time(NULL)); // создание зерна генератора псевдослучайных чисел 

	const int m = 2;  // размеры
	const int n = 6;

	/////////////////////////////////////////////////////////////////////////////////   >- Задание 1 -<   Разработать алгоритм и написать по нему программу транспонирования матрицы А размера m × n. Значение величин m и n выбрать из табл. 4.1 в соответствии с вариантом задания.
	cout << "Задание 1" << endl << endl;
	
	const int a = 10; // разброс значений
	const int b = 20;

	int arr[m][n];

	for (int i_1 = 0; i_1 < m; i_1++) {  // создание массива

		for (int i_2 = 0; i_2 < n; i_2++) {

			arr[i_1][i_2] = rand() % (b + 1 - a) + a;

		}

	}

	cout << "Оригинал" << endl;

	cout << "	";

	for (int i_1 = 0; i_1 < n; i_1++) {  // вывод номеров столбцов

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;

	for (int i_1 = 0; i_1 < m; i_1++) { // вывод основного массива

		cout << i_1 + 1 << "-	";  // вывод номеров строк

		for (int i_2 = 0; i_2 < n; i_2++) {


			cout << arr[i_1][i_2] << "	";


		}

		cout << endl;

	}

	int arr_transp[n][m];

	for (int i_1 = 0; i_1 < n; i_1++) {  // создание транспонированого массива 

		for (int i_2 = 0; i_2 < m; i_2++) {

			arr_transp[i_1][i_2] = arr[i_2][i_1];

		}

	}

	cout << "Транспонированная" << endl;

	cout << "	";

	for (int i_1 = 0; i_1 < m; i_1++) {  // вывод номеров столбцов

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;

	for (int i_1 = 0; i_1 < n; i_1++) { // вывод транспонированого массива

		cout << i_1 + 1 << "-	";  // вывод номеров строк

		for (int i_2 = 0; i_2 < m; i_2++) {


			cout << arr_transp[i_1][i_2] << "	";


		}

		cout << endl;

	}
	/////////////////////////////////////////////////////////////////////////////////   >- Задание 2 -<   Разработать алгоритм и написать по нему программу сложения матриц А и В размера m × n. Значение величин m и n выбрать из табл. 4.1 в соответствии с вариантом задания.
	cout << endl << "Задание 2" << endl << endl;

	int arr_A[m][n];

	for (int i_1 = 0; i_1 < m; i_1++) {  // создания массива А

		for (int i_2 = 0; i_2 < n; i_2++) {

			arr_A[i_1][i_2] = rand() % (b + 1 - a) + a;

		}

	}
	cout << "Матрица А" << endl;

	cout << "	";

	for (int i_1 = 0; i_1 < n; i_1++) {  

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;
	for (int i_1 = 0; i_1 < m; i_1++) { // вывод массива А

		cout << i_1 + 1 << "-	";  

		for (int i_2 = 0; i_2 < n; i_2++) {


			cout << arr_A[i_1][i_2] << "	";


		}

		cout << endl;

	}

	int arr_B[m][n];

	for (int i_1 = 0; i_1 < m; i_1++) {  // создания массива В

		for (int i_2 = 0; i_2 < n; i_2++) {

			arr_B[i_1][i_2] = rand() % (b + 1 - a) + a;

		}

	}
	cout << "Матрица В" << endl;

	cout << "	";

	for (int i_1 = 0; i_1 < n; i_1++) {  

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;
	for (int i_1 = 0; i_1 < m; i_1++) { // вывод массива B

		cout << i_1 + 1 << "-	";  

		for (int i_2 = 0; i_2 < n; i_2++) {


			cout << arr_B[i_1][i_2] << "	";


		}

		cout << endl;

	}

	int arr_Summ[m][n];
	for (int i_1 = 0; i_1 < m; i_1++) {  // Сложение матриц(массивов) А и В

		for (int i_2 = 0; i_2 < n; i_2++) {

			arr_Summ[i_1][i_2] = arr_A[i_1][i_2] + arr_B[i_1][i_2];

		}

	}
	cout << "Сумма" << endl;

	for (int i_1 = 0; i_1 < n; i_1++) {

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;

	for (int i_1 = 0; i_1 < m; i_1++) { // вывод суммы

		cout << i_1 + 1 << "-	";

		for (int i_2 = 0; i_2 < n; i_2++) {


			cout << arr_Summ[i_1][i_2] << "	";


		}

		cout << endl;

	}

	/////////////////////////////////////////////////////////////////////////////////   >- Задание 3 -<   Разработать алгоритм и написать по нему программу умножения матрицы А размера m × n на матрицу В размера n × p. Значение величин m, n, р выбрать из табл. 4.2 в соответствии с вариантом задания.
	cout << endl << "Задание 3" << endl << endl;

	const int m3 = 5;  // размеры
	const int n3 = 2;
	const int p3 = 2;
	
	int arr_M[m3][n3];
	int arr_N[n3][p3];

	for (int i_1 = 0; i_1 < m3; i_1++) {  // создания массива A

		for (int i_2 = 0; i_2 < n3; i_2++) {

			arr_M[i_1][i_2] = rand() % (b + 1 - a) + a;

		}

	}

	cout << "Матрица А" << endl;

	cout << "	";

	for (int i_1 = 0; i_1 < n3; i_1++) {

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;
	for (int i_1 = 0; i_1 < m3; i_1++) { // вывод массива А

		cout << i_1 + 1 << "-	";

		for (int i_2 = 0; i_2 < n3; i_2++) {


			cout << arr_M[i_1][i_2] << "	";


		}

		cout << endl;

	}

	for (int i_1 = 0; i_1 < n3; i_1++) {  // создания массива В

		for (int i_2 = 0; i_2 < p3; i_2++) {

			arr_N[i_1][i_2] = rand() % (b + 1 - a) + a;

		}

	}

	cout << "Матрица B" << endl;

	cout << "	";

	for (int i_1 = 0; i_1 < p3; i_1++) {

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;
	for (int i_1 = 0; i_1 < n3; i_1++) { // вывод массива B

		cout << i_1 + 1 << "-	";

		for (int i_2 = 0; i_2 < p3; i_2++) {


			cout << arr_N[i_1][i_2] << "	";


		}

		cout << endl;

	}


	int arr_X[m3][p3];
	for (int i_1 = 0; i_1 < m3; i_1++) {  // Умножение матриц(массивов) А и В

		for (int i_2 = 0; i_2 < p3; i_2++) {
			if (m3 >= p3) {
				for (int i_3 = 0; i_3 < p3; i_3++) {
					arr_X[i_1][i_2] =+ arr_M[i_1][i_3] * arr_N[i_3][i_2];
					cout << arr_N[i_3][i_2] << "*";
					cout << arr_M[i_1][i_3] << "+";
					//_getch();

				}
				cout << "=" << arr_X[i_1][i_2];
				cout << endl;
			/*if (m3 < p3) {
				for (int i_3 = 0; i_3 < p3; i_3++) {

					arr_X[i_1][i_2] += arr_A[i_3][i_1] * arr_B[i_2][i_3];

				}
				}*/
			}
			
		}
	}
	cout << "Произведение" << endl;
	cout << "	";
	for (int i_1 = 0; i_1 < p3; i_1++) {

		cout << i_1 + 1 << "	";

	}

	cout << endl << endl;

	for (int i_1 = 0; i_1 < m3; i_1++) { // вывод суммы

		cout << i_1 + 1 << "-	";

		for (int i_2 = 0; i_2 < p3; i_2++) {


			cout << arr_X[i_1][i_2] << "	";


		}

		cout << endl;

	}


	_getch(); // приостановка выполнения приложения (в моей версии без этого консоль сразу закрывается по выполнении кода)

	return 0;
}