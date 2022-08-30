#include <string>
using namespace std;

#include "Employee.h"
#include "SalaryCalculator.h"

namespace Lab9
{
    double SalaryCalculator::GetSalary(Employee& emp)
    {

        double salary = emp._basic+emp._hra+SalaryCalculator::GetAllowance(Employee& emp);

        return salary;
    }

    double SalaryCalculator::GetAllowance(Employee& emp)
    {
        double allowance = emp._basic*emp._allowancePercentage/100;

        return allowance;
    }
}

