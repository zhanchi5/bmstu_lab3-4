#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

int main()
{
	srand(time(0));
        double *lMassive;
        int n; 
        std::cout << "Enter size of array" <<std::endl;
        std::cin >> n;
        lMassive = (double *)malloc(n*sizeof(double));
        for (int i=0; i<n; i++)
        {
                lMassive[i] = rand() %100;
                std::cout << "a["<<i<<"]="<<lMassive[i] << std::endl;
        }


		
          int p=1;
          for (int i=1; i<n; i+=2)
          {
            p*=lMassive[i];
          }

          std::cout << "answer: " << p << std::endl;



        free(lMassive);
        system("Pause");
}
