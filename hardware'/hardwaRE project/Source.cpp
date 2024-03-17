#include <iostream>
#include <cmath>
#include <iomanip>
#include <String>
#include <fstream>
using namespace std;

int main()


{   // declaration
	cout << "===========================" << endl;
	cout << "Author: Justin Anderson" << endl;
	cout << "Program Name:Project 5" << endl;
	cout << "Date:Oct 15, 2023" << endl;
	cout << "College:Long Beach City College" << endl;
	cout << "===========================" << endl;
		string item = string();
		double t = double();
		double qty = double();
		double cost = double();
		double gt = double();
		
		ifstream in; //declare input file as in
		in.open("project.txt");
		ofstream out;
		out.open("results.txt");
		out << "_______________________________________________________________" << endl;
		out << "Inventory Report For Jane Doe International Hardware" << endl;
		out << "_______________________________________________________________" << endl;
		out << left << setw(15) << "Item" << right << setw(10) << "Number of units " << setw(10) << "Unit cost" << setw(15) << "Total Value" << endl;
		out << "---------------------------------------------------------------" << endl;
		while (!in.eof())
		{
			in >> item >> qty >> cost; //reads entire file
			cout << left << setw(10) << item << right << setw(5) << qty << right << setw(10) << cost << endl;
			t = (qty * cost);
			gt += t; // assignment operator
			out << left << setw(15) << item << right << setw(10) << fixed << setprecision(2) << qty << setw(14) << cost << setw(14) << t << endl;
		}
		out << "---------------------------------------------------------------" << endl;
		out << left << setw(46) << "Inventory Total: $" << fixed << setprecision(2) << right << gt;
	
		return 0;
}
