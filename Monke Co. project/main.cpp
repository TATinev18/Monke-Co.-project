#include <iostream>
#include "func.h"
using namespace std;

int main()
{
	TEAM a;
	try
	{
		inputTeamData(a);
	}
	catch (invalid_argument a)
	{
		cout << "Error: " << a.what();
	}
}
