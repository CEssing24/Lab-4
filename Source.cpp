/*
Carter Essing
C++ fall 2022
Due: Oct 14, 2022
Lab 4: Making Course Schedule
This lab is showing us how to code are course schedule
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream infile; 
	infile.open("C:/Users/Engineering22/source/repos/All Projects/Lab 4/input.dat"); 
	if (!infile)
	{
		cout << "Can't find file!\n";
	}	

	int read;

	while (infile)
	{
		infile >> read;
		// variables
		cout << (read/3) << endl;

		// Display table heading .
		cout << "Teperatures for 24 hours\n" << endl;
		cout << "0        30        60        90        120\n";
		cout << "\n Horly temp (each * = 3 degrees\n";

	} 
	return 0;
}
