#pragma once

#ifndef PROFESIONAL_H
#define PROFESIONAL_H

#include "EmployeeClass.h"

/**		Professional Derived Class, no inputs needed for this class since it is the same for all Professional employees but incase of
*		future use allows for inputs to be added easily.
*		@param MonthlyWage is how much the Professional Employee will earn monthly.
*		@param VacationDays is the number of Vacation Days a Professional Employee will have a year.
*		@param ProfessionalHealth is the amount of Health coverage a Professional Employee will have a year.
*		@return the above information to the user.
*/

class Professional : public Employee {
public:
	Professional();
	Professional(int MonthlyWage, int VacationDays, int ProfessionalHealth);

private:

};
#endif