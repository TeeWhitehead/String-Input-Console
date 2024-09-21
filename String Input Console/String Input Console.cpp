
#include <iostream>
#include <string>
using namespace std;
// Job Profile
int main() {
	// Name variables
	string f_name;
	string l_name;
	// Enter First and Last Name
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Enter your last name: ";
	cin >> l_name;
	// Concatenate name
	string full_name = f_name + " " + l_name;
	// City and State Variables
	string city;
	string state;
	// Enter City and State
	cout << "Enter your city: ";
	getline(cin >> ws, city);
	cout << "Enter your state: ";
	getline(cin >> ws, state);
	// Concatenate location
	string location = city + ", " + state;
	// Job variables
	string occupation;
	string company;
	// Enter occupation and company
	cout << "Enter your occupation: ";
	getline(cin >> ws, occupation);
	cout << "Enter company: ";
	getline(cin >> ws, company);
	// Concatenate Job
	string job = occupation + " at " + company;
	// Print out job profile
	cout << "\nName: " << full_name << endl;
	cout << "Location: " << location << endl;
	cout << "Job: " << job << endl;

	return 0;
}

