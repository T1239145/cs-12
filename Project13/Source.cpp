#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;

void readName(ifstream& in, string& fname, string& lname);
void Read();
int readScore(ifstream& in, int& num1);
int main()
{

	//ofstream out;
	//out.open("G:\\out.txt");

	//ifstream in;
	//in.open("G:\\out.txt");

	////Password
	//char ch[8];
	//cout << "Enter your eight character password: ";
	//for (int i=0; i<8; i++)
	//{
	//	ch[i] = getch();
	//       cout << '*';
	//	ch[i] = ch[i] + 100;
	//}
	//cout << endl;
	//for (int i=0; i<8; i++)
	//{
	//	cout << ch[i];
	//	out << ch[i];
	//}
	//cout << endl;

	//for (int i=0; i<8; i++)
	//{
	//       in >> ch[i];
	//	ch[i] = ch[i] - 100;
	//	cout << ch[i];
	//}
	//cout << endl;

	Read();
	return 0;
}

void Read()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	ifstream in;
	ofstream out;
	string filename = string();
	cout << "Enter Input File Name: ";
	getline(cin, filename);
	//cin >> filename;
	filename = "e:\\" + filename + ".txt";

	in.open(filename.c_str());
	out.open("output.txt");

	//in >> num1 >> num2 >> num3;
	//cout << num1 << " " << num2 << " " << num3 << endl;
	//out << num1 << " " << num2 << " " << num3 << endl;

	//Loop to read an entire file
	//while (!in.eof())
	//{
	//	in >> num1;
	//	cout << num1 << endl;
	//	out << num1 << endl;
	//}


	//An empty file
	//in.peek();
	//if(in.eof())
	//{
	//	cout << "File is empty" << endl;
	//}
	//else
	//	cout << "not empty " << endl;


	//File does not exist
	//if (!in)//if no file then goes to the failed state
	//{
	//	cout << "File does not exist" << endl;
	//}

	string fname, lname;
	int total = 0;
	//Bad File

	readName(in, fname, lname);

	cout << "back in the main fun()" << endl;
	cout << fname << " " << lname << endl;
	total = readScore(in, num1);
	cout << "back in the main fun()" << endl;
	cout << total << endl;

	/*
	//File Append
	ofstream out2;
	out2.open("C:\\newOut.txt",ios::app);
	out2 << "Hello!!!" << endl;

	in.close();
	out.close();
	*/
}

void readName(ifstream& in, string& fname, string& lname)
{
	in >> fname >> lname;
	cout << fname << " " << lname << endl;
}

int readScore(ifstream& in, int& num1)
{
	int total = 0;
	while (!in.eof())
	{
		in >> num1;
		if (in.fail())
		{
			cout << "Invalid data found..." << endl;
			in.clear();
			in.ignore(1, '\n');
		}
		else
		{
			total = total + num1;
			cout << num1 << endl;
		}
	}
	return total;
}