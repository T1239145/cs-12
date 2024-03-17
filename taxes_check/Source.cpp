#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
	cout << "===========================" << endl;
	cout << "Author: Justin Anderson" << endl;
	cout << "Program Name:Employee Monthly Paycheck " << endl;
	cout << "Date:Sep. 26, 2023" << endl;
	cout << "College:Long Beach City College" << endl;
	cout << "===========================" << endl;
	// variable declaration normally lable constant double since it dosnt change
	string name = string();
	//string lname = string(); 
	double federal = double();
	double state = double();
	double sst = double(); //social security tax
	double pension = double();
	double insurance = double();
	double grosspay = double();
	double netpay = double();
	ofstream out;
	out.open("records.txt");
	//input do not add dollar sign
	cout << "enter your Full name ";
	getline(cin, name);
	cout << "enter gross pay " ;
	cin >> grosspay;
	//deduction convert % into decimal
	federal = (.15 * grosspay);
	state = (.035 * grosspay);
	sst = (.0575 * grosspay);
	pension = (.05 * grosspay);
	insurance = 75;
	netpay = (grosspay - federal - state - sst - pension - insurance);
	cout << fixed << setprecision(2);
	out << fixed << setprecision(2);// 2 decimal places
	//output works up to 12 places ex 111111111111.00
	cout << "Sunny " << '\n' << "Day " << endl;
	cout << " " << name << endl;
	cout << setw(25) << left << setfill('.') << " Gross Amount: " << "$" << setw(15) << right << setfill(' ') << grosspay << endl;
	cout << setw(25) << left << setfill('.') << " Federal Tax: " << "$" << setw(15) << right << setfill(' ') << federal << endl;
	cout << setw(25) << left << setfill('.') << " State Tax: " << "$" << setw(15) << right << setfill(' ') << state << endl;
	cout << setw(25) << left << setfill('.') << " Social Security: " << "$" << setw(15) << right << setfill(' ') << sst << endl;
	cout << setw(25) << left << setfill('.') << " Pension: " << "$" << setw(15) << right << setfill(' ') << pension << endl;
	cout << setw(25) << left << setfill('.') << " Health Insurance: " << "$" << setw(15) << right << setfill(' ') << insurance << endl;
	cout << setw(25) << left << setfill('.') << " Net Pay: " << "$" << setw(15) << right << setfill(' ') << netpay << endl;
	out << " " << name << endl;
	out << setw(25) << left << setfill('.') << " Gross Amount: " << "$" << setw(15) << right << setfill(' ') << grosspay << endl;
	out << setw(25) << left << setfill('.') << " Federal Tax: " << "$" << setw(15) << right << setfill(' ') << federal << endl;
	out << setw(25) << left << setfill('.') << " State Tax: " << "$" << setw(15) << right << setfill(' ') << state << endl;
	out << setw(25) << left << setfill('.') << " Social Security: " << "$" << setw(15) << right << setfill(' ') << sst << endl;
	out << setw(25) << left << setfill('.') << " Pension: " << "$" << setw(15) << right << setfill(' ') << pension << endl;
	out << setw(25) << left << setfill('.') << " Health Insurance: " << "$" << setw(15) << right << setfill(' ') << insurance << endl;
	out << setw(25) << left << setfill('.') << " Net Pay: " << "$" << setw(15) << right << setfill(' ') << netpay << endl;
	
	return 0;
}
