#include "EmployeeClass.h"
#include "Professional.h"
using namespace std;

Professional::Professional() :Employee() {
	MonthlyWage = 20000;
	VacationDays = 30;
	ProfessionalHealth = 40000;
	cout << "As a professional employee at NathanCorp, you would have a monthly wage of $" << MonthlyWage << ".\nA total of " << VacationDays << " days of paid vacation a year.\nAnd health coverage of up to $" << ProfessionalHealth << " a year.\n";
}

Professional::Professional(int InputMonthlyWage, int InputVacationDays, int InputProfessionalHealth) :Employee() {

}