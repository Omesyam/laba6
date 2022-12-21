#include <iostream>
#include "math.h"
using namespace std;
int useFormula1(int y, int x, int z)
{
if( (10*x - y / pow(z, 3)) + pow(x, 4) / 4 != 0 && pow(z, 3) + pow(x, 4) / 4 != 0 && pow(x, 3) + 4*y >= 0 )
{
return ( 3 * (abs(y)) - pow( pow(x, 3) + 4*y, 1/2 ) ) / (10*x - y / pow(z, 3) + pow(x, 4) / 4);
}
else 
{
cout << "Не є ОДЗ!";
return 0;
} 

}
int useFormula2(int x, int y)
{
double grad = 0.0175;
double r = 45 * grad;// Сколько в градусах радиа r = grad × 45;
if(5*x + 1 != 0 )
{
return ( pow(2.71 , 2) + pow(y, -x) * cos(r) * x ) / 5*x + 1 +
sin( (pow(x, 2) + y) * grad ) ;
}
else
{
cout << "Не є ОДЗ!";
return 0;
}
}
int function(int a, int b)
{
int t = a + b; // Делаем копию суммы
t -= ((int) (a+b) * 10) / 10; // Сначала
t*=100;
t = (int) t;
}
