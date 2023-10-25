#include <iostream>
#include <string>
using namespace std;
int main()
{
	const double TAX_RATE = .09;
	int num = int();
	double rate = double();
	char mi = char();
	bool flag = bool();
	string fname = string();
	string lname = string();
	cout << "\t\t\tLong Beach City College\n";
	cout << "\t\t\t=======================" << endl;
	cout << "\tPlease enter a whole number: ";
	cin >> num;
	cout << "\tYou entered: " << num << endl;
	cout << "\tEnter your middle initial: ";
	cin >> mi;
	cout << "\tEnter your First Name: ";
	cin >> fname;
	cout << "\tEnter your Last Name: ";
	cin >> lname;
	cout << "\tYour First Name is " << fname << " " << mi << " " << lname <<
		endl;
	cout << "\tPlease enter your rate per hour: ";
	cin >> rate;
	cout << "\tYour Rate is: " << rate << " per hour." << endl;
	if (rate < 10)
		cout << "\tIllegal Rate!" << endl;
	else if (rate == 10)
		cout << "\tMinimum wage!" << endl;
	else if (rate >= 10 && rate <= 15)
		cout << "\tGood Start!" << endl;
	else if (rate > 15)
		cout << "\tGreat Job!" << endl;
	system("pause");
	return 0;
}
