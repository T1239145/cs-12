953#include <iostream>
using namespace std;

void getzipcode(int zip);
void printzipcode(int zip);




int main()
{
	int zipcode = int();

	getzipcode(zipcode);
	printzipcode(zipcode);


	return 0;
}

void getzipcode(int zip)
{
	int zipcode = int();
	int digit1 = int();
	int digit2 = int();
	int digit3 = int();
	int digit4 = int();
	int digit5 = int();
	int digitsum = int();
	int diff = int();
	int cordigit = int();

	cout << "Enter your zipcode: ";
	cin >> zipcode;

	digit1 = (zipcode % 100000) / 10000;
	cout << "Digit 1: " << digit1 << endl;
	digit2 = (zipcode % 10000) / 1000;
	cout << "Digit 2: " << digit2 << endl;
	digit3 = (zipcode % 1000) / 100;
	cout << "Digit 3: " << digit3 << endl;
	digit4 = (zipcode % 100) / 10;
	cout << "Digit 4: " << digit4 << endl;
	digit5 = zipcode % 10;
	cout << "Digit 5: " << digit5 << endl;

	digitsum = digit1 + digit2 + digit3 + digit4 + digit5;
	cout << "Sum of Digits: " << digitsum << endl;

	diff = digitsum % 10;
	//cout << "difference" << diff << endl;

	if (diff < 5)
	{
		cordigit = (5 - diff);
		cout << "Correction Digit: " << cordigit << endl;
	}

	if (diff == 5)
	{
		cordigit = (5 + diff);
		cout << "Correction Digit: " << cordigit << endl;
	}

	if (diff > 5)
	{
		cordigit = (10 - diff);
		cout << "Correction Digit: " << cordigit << endl;
	}
}


void printzipcode(int digit)
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