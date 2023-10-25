 #include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//header
	cout << "===========================" << endl;
	cout << "Author: Justin Anderson" << endl;
	cout << "Program Name:Quadratic equation" << endl;
	cout << "Date:Oct 8, 2023" << endl;
	cout << "College:Long Beach City College" << endl;
	cout << "===========================" << endl;
	//declaration
	int temp = 0;
	double  a, b, c, r1, r2, d, realpart, imaginarypart;; // can use float for smaller file size  and double for larger + more accurate answer
	//display
	cout << scientific;
	cout << " This program will provide solutions for an equation of the form " << endl;
	cout << setw(43) << right << "A*x^2 + B*x + C = 0" << endl;
	cout << " Where A, B and C are integers, and A is not equal to zero" << endl;
	//input 
	cout << " Enter A, B and C in order " << endl;
	cin >> a >> b >> c;
	d = pow(b, 2) - 4 * a * c;
	if (a == 0) // no solution // output and functions d is discrimant enter value of d
		temp = 0;
	else if (d > 0) // positive 2 real solutions 
		temp = 1;
	else if (d < 0) // 2 imaginary solution negative
		temp = 2;
	else if (d == 0) // zero 1 real solution
		temp = 3;
	switch (temp)
	{ 

	case 0: //a equals 0 no solutions
			cout << "No solutions will be calculated for a leading coefficient of 0 " << endl;
		break;
	case 1:
			r1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
			r2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
	
			cout << "The two real solutions are " << right << setw(10) << " x = " << setw(13) << right << r1 << endl;
			cout << setw(26) << "and" << right << setw(11) << " x = " << setw(12) << right << r2 << endl;
		break;

	case 2: // 2imaginary solution equals negative

			realpart = -b / (2 * a);
			imaginarypart = sqrt(-d) / (2 * a);
			cout << "The 2 imaginary solutions are " << "x = " << right << realpart << " + " << "(" << imaginarypart << ")" << "i" << endl;
			cout << setw(34) << " and x = " << right << realpart << " - " << "(" << imaginarypart << ")" << "i" << endl;
		break;
	case 3: // zero 1 real solution

			r1 = -b / (2 * a);
			cout << "The one real solution is x = " << r1 << endl;
		break;
		
	}

	return 0;
}