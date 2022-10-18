#include "EmployeeClass.h"
#include "nonProfessional.h"
using namespace std;
/**		this has the NonProfessional Employees Wages, vacation time and health coverage, as unlike the Professional employee these are not static and depend on hourly rate and hours worked.
*		@param VacationHours takes the amount of hours worked and calculates the yearly vacation time non-professional employees would get.
*		@param NonProfesionalhealth takes the hours worked and rate  to calculate the yearly health coverage of the employee.
*		@param NonprofessionalWage takes the hourly rate and hours worked to calculate the non-professional employees wage.
*		@returns the non professional employees yearly vacation days, monthly wage, and yearly health coverage.
*/

NonProfessional::NonProfessional() :Employee() {
	HourlyRate = 15;
	HoursWorked = 20;
	VacationHours = .01 * HoursWorked*4*12;
	NonProfessionalhealth = (.0825 * HourlyRate * HoursWorked)*4*12;
	NonprofessioalWage = (HourlyRate * HoursWorked) * 4;
	cout << "As a professional employee at NathanCorp, you would have a monthly wage of $" << NonprofessioalWage << ".\nA total of " << VacationHours << " days of paid vacation a year.\nAnd health coverage of up to $" << NonProfessionalhealth << " a year.\n";

}

NonProfessional::NonProfessional(int InputHourlyRate,int InputHoursWorked) :Employee() {
	HourlyRate = InputHourlyRate;
	HoursWorked = InputHoursWorked;
	VacationHours = .01 * HoursWorked*4*12;
	NonProfessionalhealth = .0825 * HourlyRate * HoursWorked*4*12;
	NonprofessioalWage = (HourlyRate * HoursWorked)*4;
	cout << "As a professional employee at NathanCorp, you would have a monthly wage of $" << NonprofessioalWage << ".\nA total of " << VacationHours << " days of paid vacation a year.\nAnd health coverage of up to $" << NonProfessionalhealth << " a year.\n";

}