#include <IOSTREAM>
#include <STRING>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
// Write a program that prints the monthly paycheck for an
// employee the net pay is calculated after taking the followwing
int main()
{

		int id = int();
		string fname = string();
		string lname = string();
		double cs11 = double();
		double cs12 = double();
		double cs33 = double();

	ifstream in;
	in.open("data.txt");
	
	ofstream out;
	in >> id >> fname >> lname >> cs11 >> cs12 >> cs33;
	cout << id << fname << lname << cs11 << cs12 << cs33 << endl;

	return 0;
}

