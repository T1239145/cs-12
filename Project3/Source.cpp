#include <iostream>

using namespace std;


const  MAX_CHIPS = 100;
int main()

{
	/*string playername[2];
	playername[0] = "tom";
	playername[1] = "tim",


	cout << "p1 enter name " << endl;
	cin >> playername[0];
	cout << "p2 enter name " << endl;
	cin >> playername[1];

	
	//multi dimensional array
	//int tictactoe[3][3];
	the do while loop is the only post test loop we commonly use
	an if statement within another if is callded embedded false
	//. during if statements else if optional
	*/
	bool Player1Turn = true;

	bool gameOver = false;

	int chipsInPile = 0;
	int chipsTaken = 0;

	string playerName[2];
	// random # generator
	srand(time(0));

	cout << "p1 enter ur name: ";
	cin >> playerName[0];
	cout << "p2 enter ur name: ";
	cin >> playerName[1];

	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << " this round will start with " << chipsInPile << " chips in the pile \n";
	if (player1Turn)
	{
		cout << 
	}




	return 0;
}