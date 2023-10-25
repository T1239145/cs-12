#include <cmath>
#include <iostream>

using namespace std;
//declare display header for void function 
void displayheader(string, int);//dont return anything no need to put return at the end
int cube(int& num);
void display(int num);
int main()
{
	 string nm = "justin";
		//int zip = 90802;
		//zip = readzip();
		//int d5 = int();
		//d5 = zip % 10000;//8
		//d4 = zip % 1000;//28


		//bar(d1);//9
		//5
		
		//displayheader(nm, zip); //function call passes value
		cout << nm << endl;
	
		int num = 2;
		cout << cube(num) << endl;//2 cubes
		cout << nm << endl;
		num = cube(num);//stores value 2 cubes equals 8-
		display(cube(num)); //8 cubes equals 512
		
		system("pause"); // no return here void function
}




int cube(int& num) //2 is passed as a reference/address
{
	num = 3;
	cout << num << endl; 
	return(num * num * num);
}

void display(int num)
{
	cout << num << endl;
}

void displayheader(string nm, int zip) //argument list (string, int)
{
	nm = "john";

	cout << "hello Mr." << nm << endl;
	cout << "long beach city college" << endl;
	cout << "long beach,ca " << zip << endl;
}