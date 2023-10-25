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
	double  a, b, c, r1, r2;  // can use float for smaller file size  and double for larger + more accurate answer
	double discriminat, realpart, imaginarypart;
//display
	cout << scientific;
		cout << " This program will provide solutions for an equation of the form " << endl;
		cout << setw(43) << right << "A*x^2 + B*x + C = 0" << endl;
		cout << " Where A, B and C are integers, and A is not equal to zero" << endl;
//input 
		cout << " Enter A, B and C in order " << endl;
		cin >> a >> b >> c;
		if (a == 0) // no solution
			cout << "No solutions will be calculated for a leading coefficient of 0 " << endl;
// output and functions
		else 
		{
			discriminat = pow(b, 2) - 4 * a * c;
			
			if (discriminat > 0)// positive 2 real solutions 
			{
				 r1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
				 r2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
					 
				 cout << "The two real solutions are " << right << setw(10)  << " x = " << setw(13) << right << r1 << endl;
				 cout << setw(26) << "and" << right << setw(11) << " x = " << setw(12) << right << r2 << endl;
			}
			else if (discriminat == 0)// equals  1 real solution 
			{
				
				r1 = -b / (2 * a);
				cout << "The one real solution is x = " << r1 << endl;
			}
			else // 2 imaginary solution
			{
				realpart = -b / (2 * a);
				imaginarypart = sqrt(-discriminat) / (2 * a);
				cout << "The 2 imaginary solutions are " << "x = " << right << realpart << " + " << "(" << imaginarypart << ")"  << "i" << endl;
				cout << setw(34) << " and x = " << right << realpart << " - " << "(" << imaginarypart << ")" << "i" << endl;
			}


		}

	return 0;
}