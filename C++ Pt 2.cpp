
// Insert libraries to read and write files 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// Namespace lets us use standard library objects 
using namespace std; 

// Main function is created to read the data from SalaryData.txt and iterate through it and update the salaries and write it to SalaryOut.txt 
int main() {
	ifstream input("SalaryData.txt");
	ofstream output("SalaryOut.txt");
	string FirstName, LastName;
	double CurrentSalary, PayIncrease;
	// Use of a while loop to iterate throught the data 
	while (input >> LastName >> FirstName >> CurrentSalary >> PayIncrease) {
		double updatedSalary = CurrentSalary + (CurrentSalary * PayIncrease / 100);
		output << FirstName << " " << LastName << " " << fixed << setprecision(2) << updatedSalary << endl;
	}
	// Close files 
	input.close();
	output.close();
	// Return the data 
	return 0;
}