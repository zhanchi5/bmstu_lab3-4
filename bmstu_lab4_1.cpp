#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

int main()
{
	srand(time(0));
        double *Massive;
        int n; 
        std::cout << "Enter size of array" <<std::endl;
        std::cin >> n;
        Array = (double *)malloc(n*sizeof(double));
        for (int i=0; i<n; i++)
        {
                Array[i] = rand() %100;
                std::cout << "a["<<i<<"]="<<Array[i] << std::endl;
        }


		
          int p=1;
          for (int i=1; i<n; i+=2)
          {
            p*=Array[i];
          }

          std::cout << "answer: " << p << std::endl;



        free(Array);
        system("Pause");
}
