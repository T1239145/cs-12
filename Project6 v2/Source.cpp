#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// declaring void function add data type and name
void getzip(int& zip);
void printzip(int& zip);
int main()
{
	//
	 int zipcode = int();
	cout << "Enter your five digit Zipcode: " << endl;
	cin >> zipcode;
	getzip(zipcode);
	printzip(zipcode);
	

	return 0;
}

void getzip(int& zip)
{
	int zipcode = int(); //ex 95014
	int zipcode, d1, d2, d3, d4, d5, temp = int(5);
		
	
	int sum, diff, cd = int();// correction digit sum and difference
	d1 = (zipcode % 100000) / 10000;
	cout << "digit 1 :" << d1 << endl;
	d2 = (zipcode % 10000) / 1000;
	cout << "digit 2 :" << d2 << endl;
	d3 = (zipcode % 1000) / 100;
	cout << "digit 3 :" << d3 << endl;
	d4 = (zipcode % 100) / 10;
	cout << "digit 4 :" << d4 << endl;
	d5 = (zipcode % 10);
	cout << "digit 5 :" << d5 << endl;

	sum = (d1 + d2 + d3 + d4 + d5);
		cout << sum << endl;
		diff = sum % 10;
		cout << diff << endl;
	
		if (diff < 5) 
			temp = 0;
		else if (diff == 5)
			temp = 1;
		else if (diff > 5)
			temp = 2;
		switch (temp)
		{
		case 0:
			
			cd = (5 - diff);
			cout << "correction digit :" << cd << endl;
				
			break;
		case 1:
			cd = (5 + diff);
			cout << "correction digit :" << cd << endl;
			
			break;
		case 2:
			cd = (10 - diff);
			cout << "correction digit :" << cd << endl;
			
			break;
		}


	
	
}
void printzip(int& digit) //print bardcode  0=: 1=|
{
	
	

	cout << "Zipcode Barcode is |";

	if (digit == 1)
		cout << ":::||";
	else if (digit == 2)
		cout << "::|:|";
	else if (digit == 3)
		cout << "::||:";
	else if (digit == 4)
		cout << ":|::|";
	else if (digit == 5)
		cout << ":|:|:";
	else if (digit == 6)
		cout << ":||::";
	else if (digit == 7)
		cout << "|:::|";
	else if (digit == 8)
		cout << "|::|:";
	else if (digit == 9)
		cout << "|:|::";
	else if (digit == 0)
		cout << "||:::";

	cout << "|" << endl;
}

