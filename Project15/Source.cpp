#include <iostream>
#include <string>

using namespace std;
int makeCheckDigit(int zipcode);
string convertDigit(int value);
string barcode(int zipcode);

int main()
{
	int zipcode, check_digit; // declearing integer variables for storing the values of zipcode, and check_digit.
	string bar_code_value; // declearing a string variable to store the final barcode value of zipcode.


	cout << "Hi, welcome to postal barcode converter." << endl << "I will convert your postal code into barcode." << endl; // Optional, irtoductory texts.
	cout << endl << "So, lets start!" << endl << endl; // Optional, irtoductory texts.

	while (cout << "Please, enter the five-digit zip code: " && cin >> zipcode) // a while loop for
		//asking a user to input a zipcode, for converting the input to barcode everytime, and
		//for asking another input again.
	{
		if (zipcode > 0)// Checking whether the value of zipcode is positive or negative.
		{ // If it's positive then continues, or moves to other conditional statement.

			check_digit = makeCheckDigit(zipcode);
			// Calling the makeCheckDigit funtion, and passing the value of zipcode in it.
			// Storing the value calculated by the makeChoiceDigit function in the integer variable check_digit.

			cout << endl << "So, the check digit for your zip code is: " << check_digit << endl << endl;
			// Showing the value of the check digit as an output, which is stored in the variable check_digit.

			bar_code_value = barcode(zipcode);
			// Calling the barcode function, and passing the value of zipcode in it.
			// Storing the value calculated by the barcode function in the string variable bar_code_value.

			cout << "Finally, your barcode is: " << bar_code_value << endl << endl;
			// Showing the final value of the barcode as an output, which is stored in the variable bar_code_value.
		}

		else // If the previous 'if' statement fails, then the program runs through this statement.
		{ // i.e. Notifies the user if the input not non-negative.
			cout << endl << "Sorry, you have typed a negative number." << endl << "You need to give a positive integer as an input." << endl << endl;
			// Showing an error message that the user has typed a negative number.
			// And tells the user that he/she needs to give a positive number as an input.
		}
	}

	return 0;
}
/*
The following function will find the check-digit for a zipcode.
*/
int makeCheckDigit(int zipcode) // Defining the makeCheckDigit function, which will find the check digit.
{
	int sum_of_digits = 0;
	// Declearing a variable to store the summation of the digits in the zipcode.[i.e. the passed value to the makeCheckDigit function]
	// Initilizing the value of the variable to 0.

	int check_digit;
	// Declearing a variable to store the value of the check digit.

	while (zipcode) // Running a while loop to find the summation of the digits of the zipcode.
	{
		sum_of_digits += zipcode % 10;
		// Finding every single digit individually by taking the modulus of the zipcode with the combination of the next step.
		zipcode /= 10;
		// After being done with the previous modulus 10 of zipcode, it will divide the value of zipcode by 10
		// Then it renews the value of zipcode in the variable zipcode.
	}
	check_digit = 10 - (sum_of_digits % 10);
	// To find the value of check digit,
	//it first finds the modulus 10 of the value of the summation of all digits in zipcode[i.e. the value of the variable sum_of_digits.
	// Then subtracts the value from 10 to find the desired value of check digit, and stores the value in the variable check_digit.

	return check_digit; // returns the value of check digit[i.e. the value of the variable check_digit.]
}

/*
The following function will convert individual digits of zipcode to its indivudial barcodes.
*/
string convertDigit(int value) // Defining the convertDigit function, which will convert individual digits to its barcodes.
{
	if (value == 0)
		// Setting up a condition, for the passed value of the integer 0.
		return "||:::";
	// returns the value as initialized in the string when the passed integer is 0.

	else if (value == 1)
		// Setting up a condition, for the passed value of the integer 1.
		return ":::||";
	// returns the value as initialized in the string when the passed integer is 1.

	else if (value == 2)
		// Setting up a condition, for the passed value of the integer 2.
		return "::|:|";
	// returns the value as initialized in the string when the passed integer is 2.

	else if (value == 3)
		// Setting up a condition, for the passed value of the integer 3.
		return "::||:";
	// returns the value as initialized in the string when the passed integer is 3.

	else if (value == 4)
		// Setting up a condition, for the passed value of the integer 4.
		return ":|::|";
	// returns the value as initialized in the string when the passed integer is 4.

	else if (value == 5)
		// Setting up a condition, for the passed value of the integer 5.
		return ":|:|:";
	// returns the value as initialized in the string when the passed integer is 5.

	else if (value == 6)
		// Setting up a condition, for the passed value of the integer 6.
		return ":||::";
	// returns the value as initialized in the string when the passed integer is 6.

	else if (value == 7)
		// Setting up a condition, for the passed value of the integer 7.
		return "|:::|";
	// returns the value as initialized in the string when the passed integer is 7.

	else if (value == 8)
		// Setting up a condition, for the passed value of the integer 8.
		return "|::|:";
	// returns the value as initialized in the string when the passed integer is 8.

	else if (value == 9)
		// Setting up a condition, for the passed value of the integer 9.
		return "|:|::";
	// returns the value as initialized in the string when the passed integer is 9.

	else
		// Setting up the condition, for rest of the integer inputs, except [from 0 to 9].
		return "Invalid";
	// returns the value as initialized in the string when the passed integer is except [from 0 to 9]

}
/*
The following function will convert the whole zipcode into its complete barcode.
*/
string barcode(int zipcode) // Defining the barcode function, which will convert the whole zipcode into complete barcode.
{

	int check_digit = makeCheckDigit(zipcode);
	// Calling the makeCheckDigit funtion, and passing the value of zipcode in it.
	// Storing the value calculated by the makeChoiceDigit function in the integer variable check_digit.

	int digit_1, digit_2, digit_3, digit_4, digit_5;
	// Declearing five different variables to store the five particular digits of the zipcode respectively.

	digit_1 = zipcode % 10;
	// Declearing a variable to store the last digit of the zipcode indivudially,
	// by taking modulus 10 of the value of the variable zipcode.
	zipcode /= 10;
	// After being done with the previous modulus 10 of zipcode, it will divide the value of zipcode by 10
	// Then it renews the value of zipcode in the variable zipcode.
	digit_2 = zipcode % 10;
	// Declearing a variable to store the forth digit of the zipcode indivudially,
	// by taking modulus 10 of the value of the variable zipcode.
	zipcode /= 10;
	// After being done with the previous modulus 10 of zipcode, it will divide the value of zipcode by 10
	// Then it renews the value of zipcode in the variable zipcode.
	digit_3 = zipcode % 10;
	// Declearing a variable to store the third digit of the zipcode indivudially,
	// by taking modulus 10 of the value of the variable zipcode.
	zipcode /= 10;
	// After being done with the previous modulus 10 of zipcode, it will divide the value of zipcode by 10
	// Then it renews the value of zipcode in the variable zipcode.
	digit_4 = zipcode % 10;
	// Declearing a variable to store the second digit of the zipcode indivudially,
	// by taking modulus 10 of the value of the variable zipcode.
	zipcode /= 10;
	// After being done with the previous modulus 10 of zipcode, it will divide the value of zipcode by 10
	// Then it renews the value of zipcode in the variable zipcode.
	digit_5 = zipcode % 10;
	// Declearing a variable to store the first digit of the zipcode indivudially,
	// by taking modulus 10 of the value of the variable zipcode.
	zipcode /= 10;
	// After being done with the previous modulus 10 of zipcode, it will divide the value of zipcode by 10
	// Then it renews the value of zipcode in the variable zipcode.

	string prefix = "|" + convertDigit(digit_5) + convertDigit(digit_4) + convertDigit(digit_3) + convertDigit(digit_2) + convertDigit(digit_1);
	// Calling the convertDigit function several times to convert every single digit of the value of zipcoe[i.e. zipcode variable]
	// Then it will combine all the results from every call of the convertDigit function, starting with "|"
	// Now it will store the converted value in a string variable prefix.
	// It's the first part of the whole barcode.

	string postfix = convertDigit(check_digit) + "|";
	// Calling the convertDigit function to convert the value of the check digit[i.e. check_digit variable]
	// Then it will store the converted value in a string variable postfix.
	// It's the second/last part of the whole barcode.

	return (prefix + postfix);
	// returns the value of the string prefix and postfix all together.
}