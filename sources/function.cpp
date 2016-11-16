#include <math.h>
double summary()
{
  double precision=0.1*pow(10, -5);
	double summary = 0;
	double n = 0;
	double ielement;
  
  do
  {
    n++;
    ielement =(2 * pow(3, n) + pow(4, n)) / (pow(6, n));
    summary += ielement;
}
  while (ielement >= precision);
  return summary;
}
