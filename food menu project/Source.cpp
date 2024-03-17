#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/* write a program to help a local restaurant automate its breakfast system
a- show different items
b- allow customer to select more than one
c- calculate and print bill
*/
//define struct not a declaration 
struct menuitemtype
{
	string menuitem = {};
	double menuprice = {};
};
//  function named get data,load data into array called menulist data type double
void getdata(menuitemtype menulist[], int size)
{
	menulist[0] = { "Plain egg", 1.45 };
	menulist[1] = { "Bacon and Egg", 2.45 };
	menulist[2] = { "Muffin" , 0.99 };
	menulist[3] = { "French Toast", 1.99 };
	menulist[4] = { "Fruit Basket", 2.49 };
	menulist[5] = { "Cereal", 0.69 };
	menulist[6] = { "Cofee", 0.50 };
	menulist[7] = { "Tea", 0.75 };
}
/*function to show menu  looped to show all items  in array
 "\t\t\t" shortcut to tab
 . before menuprice is a member access operator
 */
void showmenu(menuitemtype menulist[], int size)
{
	cout << "\t\t\t" << " Welcome to the Krusty Crab " << endl;
	cout << "\t\t\t" << "============================" << endl;
	for (int i = 0; i < size; i++)
		cout << "\t\t\t" << i + 1 << " " << left << setw(15) << menulist[i].menuitem << " $ " << fixed << setprecision(2)
		<< menulist[i].menuprice << endl;
}

/*trying to get order and input for items
ex :  enter # of order 1
	enter quantity 5
	then repeat
	= total on screen
*/

int main()
{ // 7 orders 8 options( referencing other functions in main and declaration
	const int menusize = 8;
	menuitemtype menulist[menusize];
	getdata(menulist, menusize);
	showmenu(menulist, menusize);
	//printreceipt(menulist, menusize);// work in progress(arghhhhhhhhhhhhhhhh)
	int order = 1;
	int beta = 0;
	// is there a better way to declare the total and num?
	double num1 = (0), num2 = (0), num3 = (0), num4 = (0), num5 = (0), num6 = (0), num7 = (0), num8 = (0),
		total = { 0 }, total1 = { 0 }, total2 = { 0 }, total3 = { 0 }, total4 = { 0 }, total5 = { 0 }, total6 = { 0 },
		total7 = { 0 },
		sum, tax, final;
	
	cout << "\t\t\t" << "Enter 0 when finished: " << endl;
	//trying print receipt function in main 
	while (order != beta)
	{
		cout << endl;
		cout << "\t\t" << "From The List Of Food Items, What Would You Like? ";
		cin >> order;
		int i = 0;
		switch (order)
		{
		case 0:// ends program
			break;
		case 1:// works for the first selection plain egg
			cout << endl;
			cout << "\t\t" << "Enter the amount of Plain eggs wanted: ";
			cin >> num1;
			total = menulist[i].menuprice * num1;
			
			
			break;
		case 2:// checked
			cout << endl;
			cout << "\t\t" << "Enter The amount of Bacon and Eggs wanted: ";
			cin >> num2;
			total1 = menulist[i=1].menuprice * num2;
			
			break;
		case 3://checked
			cout << endl;
			cout << "\t\t" << "Enter The Amount of Muffins wanted: ";
			cin >> num3;
			total2 = menulist[i = 2].menuprice * num3;
			break;
		case 4://checked
			cout << endl;
			cout << "\t\t" << "Enter The Amount of French Toast wanted: ";
			cin >> num4;
			total3 = menulist[i = 3].menuprice * num4;
			break;
		case 5://all checked
			cout << endl;
			cout << "\t\t" << "Enter The Amount of Fruit Baskets wanted: ";
			cin >> num5;
			total4 = menulist[i = 4].menuprice * num5;
			break;
		case 6:
			cout << endl;
			cout << "\t\t" << "Enter The Amount of Cereal wanted: ";
			cin >> num6;
			total5 = menulist[i = 5].menuprice * num6;
			break;
		case 7:
			cout << endl;
			cout << "\t\t" << "Enter The Amount of Cofee wanted: ";
			cin >> num7;
			total6 = menulist[i = 6].menuprice * num7;
			break;
		case 8:
			cout << endl;
			cout << "\t\t" << "Enter The Amount of Tea wanted ";
			cin >> num8;
			total7 = menulist[i = 7].menuprice * num8;
			break;
		}
		sum = total + total1 + total2 + total3 + total4 + total5 + total6 + total7;
		tax = (sum * 0.05);
		final = (tax + sum);
		cout <<  "============================================================================" << endl;
		cout<<left<<setw(15)<<"ITEM"<<right<<setw(10)<<"TOTAL COST OF ITEM"<<right<<setw(15)<<"QUANTITY"<<right<<setw(20)<<"PRICE OF ITEM\n";
		cout << "============================================================================" << endl;
		//could probably use loop here?
		cout << left << setw(23) << "Plain Eggs" << "$" << setw(19) << left << total << setw(17) << left  << num1 << "$" << menulist[i].menuprice << endl;
		cout << endl;
		cout << left << setw(23) << "Bacon And Eggs" << "$" << setw(19) << left <<  total1 << setw(17) << left << num2 << "$" << menulist[i = 1].menuprice << endl;
			cout << endl;
		cout << left << setw(23) << "Muffin" << "$" << setw(19) << left << total2 << setw(17) << left << num3 << "$" << menulist[i = 2].menuprice << endl;
			cout << endl;
		cout << left << setw(23) << "French Toast" << "$" << setw(19) << left <<  total3 << setw(17) << left << num4 << "$" << menulist[i = 3].menuprice << endl;
			cout << endl;
		cout << left << setw(23) << "Fruit Basket" << "$" << setw(19) << left <<total4 << setw(17) << left << num5 << "$" << menulist[i = 4].menuprice << endl;
			cout << endl;
		cout << left << setw(23) << "Cereal" << "$" << setw(19) << left <<  total5 << setw(17) << left << num6 << "$" << menulist[i = 5].menuprice << endl;
			cout << endl;
		cout << left << setw(23) << "Coffee" << "$" << setw(19) << left << total6 << setw(17) << left << num7 << "$" << menulist[i = 6].menuprice << endl;
		cout << endl;
		cout << left << setw(23) << "Tea" << "$" << setw(19) << left <<  total7 << setw(17) << left <<  num8 << "$" << menulist[i = 7].menuprice << endl;
		cout << endl;
		cout << left << setw(23) << "TAX" << "$" << setw(19) << left << tax << endl;
		cout << "============================================================================" << endl;

		cout << "\t\t" << "TOTAL $" << final << endl;
	}
	
	
	return 0;
}