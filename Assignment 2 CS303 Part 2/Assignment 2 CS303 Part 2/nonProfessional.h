#pragma once

#ifndef NONPROFESIONAL_H
#define NONPROFESIONAL_H

#include "EmployeeClass.h"
/**		NonProfessional Emplyee Derived  class
*		@param HourlyRate the user will have to input a desired hourly rate to calculate the monthly wage.
*		@param Hours the user will have to input hours between 1 and 40 for the amount of hours they would work a week.
*/

class NonProfessional : public Employee {
public:
	NonProfessional();
	NonProfessional(int HourlyRate,int Hours);

private:

};
#endif