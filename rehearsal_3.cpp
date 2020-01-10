#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double sumSqrt(int number)
{
	int x=1;
	int y=0;
	double result = 0;
	while(number > y)
	{
		if(number > 0)
		{
			result += 1/sqrt(x);
		    x++;
		    y++;
		}
		else
		{
			return 0;
		}
		
	}
	return result;
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double j = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << j;

}
