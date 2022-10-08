#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	
	double R; // вхідний параметр
	double x, xp, xk, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	// розгалуження в повній формі
	x = xp;
	while (x <= xk)
	{
		if (x <= -8)
			y = ((-1) * R);
		else
			if (-8 < x && x <= (-1) * R)
				y = ((R * R) + (R * x)) / (((-1) * R) + 8);
			else
				if (-R < x && x <= R)
					y = (-1) * (sqrt((R * R) - (x * x)));
				else
					if (R < x && x <= 5)
						y = ((2 * x) - 2 * R) / (5 - R);
					else
						y = 3;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
