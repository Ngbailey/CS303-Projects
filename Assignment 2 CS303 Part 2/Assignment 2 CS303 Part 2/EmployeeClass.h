#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>

using namespace std;
/**		Abstract Employee Class that stores the information for both Derived Professional and Non professional Classes.
*		
*/

class Employee {


	public:
		int HoursWorked;
		int VacationDays;
		int VacationHours;
		int NonProfessionalhealth;
		int ProfessionalHealth;


	protected:
		int HourlyRate;
		int MonthlyWage;
		int NonprofessioalWage;
};
#endif