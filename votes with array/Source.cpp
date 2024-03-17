#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() 
{
   /* cout << "===========================" << endl;
    cout << "Author: Justin Anderson" << endl;
    cout << "Program Name:Project 7" << endl;
    cout << "Date:Nov 5, 2023" << endl;
    cout << "College:Long Beach City College" << endl;
    cout << "===========================" << endl;
    */

    //declaration for variables and array
    string lastName;
    int votes;
    int totalVotes = 0; // total votes
    string name[5];
    int votesPolled[5]; // votes polled 

    ifstream File;
     int i = 0;
     //file input 
    File.open("votes.txt");
    while (File >> lastName >> votes)
    {
    name[i] = lastName;
     
    votesPolled[i] = votes;
       
    i++;

    }

    int max = votesPolled[0];
    int index = 0;

    for (int i = 0; i < 5; i++) 
    {
        if (max < votesPolled[i])
        {
            max = votesPolled[i];
            index = i;
        }
        // adding all votes 
        totalVotes += votesPolled[i];
    }

    cout << left << setw(15)  << "Candidate "  << left << setw(20) << "Votes Received " << left << setw(20) << "% of Total Votes" << endl;

 //loop of the file read to display canidates and votes recieved 
   for (int i = 0; i < 5; i++)
   {
     double percentage = (double)(votesPolled[i] * 100) / totalVotes;
        cout << fixed << setprecision(2);
        cout << left << setw(18) << name[i] << left << setw(20) << votesPolled[i] << left << setw(20) << percentage << endl;
    }
    cout << left << setw(18) << "Total" << left << setw(20) << totalVotes << endl;
    cout << endl;
    cout << "The Winner of the Election is " << name[index];

    return 0;
}