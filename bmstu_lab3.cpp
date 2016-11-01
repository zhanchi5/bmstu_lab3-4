

#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;


int main()
{
	double precision=0.1*pow(10, -5);
	double summary = 0;
	double n = 0;
	double ielement;


	if (precision > 0)
	{

		do
		{

			n++;
			ielement =(2 * pow(3, n) + pow(4, n)) / (pow(6, n));
			summary += ielement;

		} while (ielement >= precision);
		cout << "summary = " << summary <<endl;
		cout << "Number of element :  [" <<n<<"]"<<endl;

	}
	else
	{
		cout << "Error! Precision must be bigger than NULL";
	}
	system("pause");
	return 0;
}
