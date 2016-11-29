#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	
	unsigned int n ;
	unsigned int m ;
	unsigned int count_row;
	unsigned int count_column;


	cout << "Enter value of rows" << endl;
	cin >> n;
	cout << "Enter value of columns "<< endl;
	cin >> m;

	srand(time(0));
	int **Array = new int*[n]; 
	
	
	for (unsigned int count = 0; count < n; ++count)
		Array[count] = new int[m]; 
										
	for (unsigned int count_row = 0; count_row < n; ++count_row)
		for (unsigned int count_column = 0; count_column < m; ++count_column)
			Array[count_row][count_column] = (rand() % 100); 
																							  // âûâîä ìàññèâà
	for (unsigned int count_row = 0; count_row < n; ++count_row)
	{
		for (unsigned int count_column = 0; count_column < m; ++count_column)
			cout << setw(4) << setprecision(2) << Array[count_row][count_column] << "   ";
		cout << endl;
	}

	for (int count_row = 0; count_row < n; ++count_row)
	{
		int sum = 0;
		for (unsigned int count_column = 0; count_column< m; ++count_column)
		{
			sum += Array[count_row][count_column];
		}
		cout << "Summary of elements of row["<<count_row<<"] = " << sum<<endl;
	}

	for (int count = 0; count < n; count++)
		delete[]Array[count];
	_getch();
	return 0;
}
