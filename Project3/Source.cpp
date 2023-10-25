#include <IOSTREAM>
#include <string>
using namespace std;
int main()
{
		//variable declaration and initialization
	int id = int();
	int score = int();
	string Fname = string();
	string Lname = string();
	double average = double();
	double number1 = double();
	double number2 = double();
	double number3 = double();
	double total  = double();
	
			// header for project 2
	cout << "===========================" << endl;
	cout << "Author: Justin Anderson" << endl;
	cout << "Program Name:Student Grading System" << endl; 
	cout << "Date:Sep. 16th, 2023" << endl;
	cout << "College:Long Beach City College" << endl;
	cout << "===========================" << endl;
			//input
	cout << "Enter Student Id #" << endl;
	cin >> id;
	cout << "Enter your First Name" << endl;
	cin >> Fname;
	cout << "Enter your Last Name" << endl;
	cin >> Lname;
	cout << "Enter each grade as a whole number" << endl;
	cout << "Enter your Grade for CS11 " << endl;
	cin >> number1;
	cout << "Enter your Grade for CS12 " << endl;
	cin >> number2;
	cout << "Enter your Grade for CS22 " << endl;
	cin >> number3;
	total = (number1 + number2 + number3);
	average = total / 3;

			//process
	if (average > 89)
		cout << "Grade:A great job" << endl;
	else if (average > 79)
		cout << "Grade:B good job" << endl;
	else if (average > 69)
		cout << "Grade:C nice work" << endl;
	else if (average > 60)
		cout << "Grade:D almost there" << endl;
	else if (average < 60)
		cout << "Grade:F Warning not passing" << endl;
		//result
		cout << "Student id: " << id << endl;
		cout << "Students Name: " << Fname << ' ' << Lname << endl;
		cout << "Average grade: " << average << "%" << endl;
		cout << "Total points earned " << total << endl;
	return 0;
}