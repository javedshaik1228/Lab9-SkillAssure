
using namespace std;

#include "Employee.h"

namespace Lab9
{
		void Employee::setEmp(string empid, string name, double basic, double hra,double allowanceP, int role){
			Employee::_empid = empid;
			Employee::_name = name;
			Employee::_basic = basic;
			Employee::_hra = hra;
			Employee::_allowancePercentage = allowanceP; 
			Employee::_role = role;
		}
		string Employee::get_empid(){
			return Employee::_empid;
		}
                string Employee::get_name(){
			return Employee::_name;
		}
                double Employee::get_basic(){
			return Employee::_basic;
		}
                double Employee::get_hra(){
			return Employee::_hra;
		}
		double Employee::get_allowancePercentage(){
			return Employee::_allowancePercentage;
		}
                int Employee::get_role(){
			return Employee::_role;
		}

}
