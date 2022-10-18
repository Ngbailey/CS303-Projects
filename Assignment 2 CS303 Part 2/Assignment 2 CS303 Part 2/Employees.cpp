//Nathan Gregorian Bailey
//Assignment # 2 Part 2
//Created October 12th 2022, 4:24PM
//Due October 18th 2022, Midnight.

#include "EmployeeClass.h"
#include "nonProfessional.h"
#include "Professional.h"


using namespace std;

int main() {
	bool checker = true;
	char menuchecker;
	string TypeOfEmployee = "np";
	cout << "Welcome to NathanCorp, employee information page\nHere we offer some basic information for future employees of NathanCorp\nExpected Wages, Vacation Time, and health benefits for working here\n" << endl;
	while (checker == true) {
		cout << "Please enter What type of employee information you want to see\nEither 'p' for Professional, or 'np' for Non-Professional.\n" << endl;
		cin >> TypeOfEmployee;
		if (TypeOfEmployee == "p") {
			cout << "You've chosen to look at Professional Employee benefits.\n" << endl;
			Professional();
			cout << "Do you want to return to the main menu?\n'y' for yes, otherwise enter any key to exit.\n";
			cin >> menuchecker;
			if (menuchecker == 'y') {
				checker = true;
			}
			else {
				checker = false;
				cout << "Thank you for using NathanCorps Employee Benefits Program\n";
			}

		}
		else if (TypeOfEmployee == "np") {
			int InputHourlyRate;
			int InputHoursWorked;
			int hourschecker = 40;
			bool hourscheckerinfo = true;
			cout << "You've chosen to look at Non-Professional Employee benefits.\n" << endl;
			cout << "Please enter what HourlyRate you would hope to earn while working at NathanCorp.\n" << endl;
			cin >> InputHourlyRate;
			while (hourscheckerinfo == true) {
				cout << "Now please input how many hours a week you would work. \n(less than 40 as NathanCorp doesn't offer Overtime to Non-Professional Employees)\n";
				cin >> InputHoursWorked;
				if (InputHoursWorked < 1 || InputHoursWorked > hourschecker) {
					cout << "Please enter a correct amount of hours.\n (Greater than 0 but less than 40).\n" << endl;
				}
				else {
					hourscheckerinfo = false;
				}
			}
			NonProfessional(InputHourlyRate, InputHoursWorked);
			cout << "Do you want to return to the main menu?\n'y' for yes, otherwise enter any key to exit.\n";
			cin >> menuchecker;
			if (menuchecker == 'y') {
				checker = true;
			}
			else {
				checker = false;
				cout << "Thank you for using NathanCorps Employee Benefits Program\n";
			}
		}
		else {
			cout << "Invalid entry, please type 'p', or 'np' only.\n" << endl;
			checker = true;
		}
	}
}