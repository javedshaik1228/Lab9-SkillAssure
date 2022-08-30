#include <iostream>
#include <string>

using namespace std;

#include "Employee.h"
#include "EmployeeReport.h"

namespace Lab9
{
	void EmployeeReport::PrintLine()
	{
		cout << "---------------------------------------------------------------------------" << endl;
	}

	void EmployeeReport::DisplayHeader()
	{
		PrintLine();
		cout << "EMPLOYEE REPORT\t\t\t\t" << endl;
		cout << "Date : " + GetReportDate() << endl;
		PrintLine();
	}

	void EmployeeReport::DisplayFooter(int count)
	{
		PrintLine();
		cout << "Total Employees : " + count << endl;
		PrintLine();
	}

	void EmployeeReport::DisplayEmployees(int count, Employee *employees)
	{
		DisplayHeader();

		cout << "EMP_ID\tNAME\tROLE\t\tBASIC\tHRA\tALLOW\tSALARY" << endl;
		PrintLine();

		//Write code here

	}
}