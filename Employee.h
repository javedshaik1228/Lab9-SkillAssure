#pragma once
#include<string>
using namespace std;
namespace Lab9
{
	class Employee
	{
		string _empid;
		string _name;
		double _basic;
		double _hra;
		double _allowancePercentage;
		int _role;

		/// <summary>
		/// Properties of the class
		/// </summary>

	public:
		// Implement getters and setters
		void setEmp(string _empid, string _name, double _basic, double _hra,double _allowanceP, int _role);
		string get_empid();
		string get_name();
		double get_basic();
		double get_hra();
		double get_allowancePercentage();
		int get_role();

	};
}
