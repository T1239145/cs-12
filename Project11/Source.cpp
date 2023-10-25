#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Open the input file in read mode
    ifstream inputFile("Exp3.txt");

    if (!inputFile) {
        cerr << "Error opening the file" << endl;
        return 1;
    }

    // Open the output file in write mode
    ofstream outputFile("Output.txt");

    string partName;
    int units;
    float price;
    float totalValue = 0;

    // Writing the table headers to the output file
    outputFile << left << setw(15) << "Part Name" << right << setw(10) << "Units" << setw(10) << "Unit Price" << setw(15) << "Total Value" << endl;
    outputFile << "---------------------------------------------------------------" << endl;

    while (inputFile >> partName >> units >> price) {
        float itemValue = units * price;
        totalValue += itemValue;

        // Writing each row to the output file
        outputFile << left << setw(15) << partName << right << setw(10) << units << setw(10) << fixed << setprecision(2) << price << setw(15) << itemValue << endl;
    }

    outputFile << "---------------------------------------------------------------" << endl;
    outputFile << right << setw(35) << "Inventory Total: $" << fixed << setprecision(2) << totalValue;

    // Close both files
    inputFile.close();
    outputFile.close();

    cout << "Data processed successfully!" << endl;
    return 0;
}
