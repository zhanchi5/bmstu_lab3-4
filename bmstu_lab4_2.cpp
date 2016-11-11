// ConsoleApplication6.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	
	int n ;
	int m ;
	int count_row;
	int count_column;


	cout << "Enter value of rows" << endl;
	cin >> n;
	cout << "Enter value of columns "<< endl;
	cin >> m;

	srand(time(0)); // генерация случайных чисел
					// динамическое создание двумерного массива вещественных чисел на десять элементов
	int **Array = new int*[n]; // две строки в массиве
	
	
	for (int count = 0; count < n; count++)
		Array[count] = new int[m]; // и пять столбцов
										// заполнение массива
	for (int count_row = 0; count_row < n; count_row++)
		for (int count_column = 0; count_column < m; count_column++)
			Array[count_row][count_column] = (rand() % 100); //заполнение массива случайными числами с масштабированием от 1 до 10
																							  // вывод массива
	for (int count_row = 0; count_row < n; count_row++)
	{
		for (int count_column = 0; count_column < m; count_column++)
			cout << setw(4) << setprecision(2) << Array[count_row][count_column] << "   ";
		cout << endl;
	}

	for (int count_row = 0; count_row < n; count_row++)
	{
		int sum = 0;
		for (int count_column = 0; count_column< m; count_column++)
		{
			sum += Array[count_row][count_column];
		}
		cout << "Summary of elements of row["<<count_row<<"] = " << sum<<endl;
	}

	


	

	// удаление двумерного динамического массива
	for (int count = 0; count < 2; count++)
		delete[]Array[count];
	system("pause");
	return 0;
}