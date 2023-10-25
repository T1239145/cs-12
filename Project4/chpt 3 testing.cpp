#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	int id = int();
	string fname = string();
	string lname = string();
	double cs11 = double();
	double cs12 = double();
	double cs22 = double();
	double average = double();
	ifstream in;
	in.open("data.txt");
	
	ofstream out;
	out.open("report.txt");

	cout << fixed << setprecision(2); //more precise 2 decimal places
	average = (cs11 + cs12 + cs22) / 3.0;
	// spreading for some reason below 
	in >> id >> fname >> lname >> cs11 >> cs12 >> cs22;
	cout << setw(6) << left << id << setw(15) << left << fname << setw(15) << left << lname
		<< setw(6) << right << cs11 << setw(6) << right << cs12
		<< setw(6) << right << cs22 << endl;
	// setw is character limit
	cout << average << endl;
	out << setw(6) << left << id << setw(15) << left << fname << setw(15) << left << lname
		<< setw(6) << right << cs11 << setw(6) << right << cs12
		<< setw(6) << right << cs22 << endl;

	
	
	system("pause");
	return 0;
}

