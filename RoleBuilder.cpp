#include <string>
using namespace std;

#include "RoleBuilder.h"
#include "Roles.h"
namespace Lab9
{
	string RoleBuilder::GetRoleDescription(int RoleId)
	{
		switch(RoleId){
			case 1:
				return "DEVELOPER";
			case 2:
				return "TEST_ENGINEER";
			case 3:
				return "SR_DEVELOPER";
			case 4:
				return "DESIGNER";
			default:
				return "UNDEFINED";
		}
		return "";
	}
}
