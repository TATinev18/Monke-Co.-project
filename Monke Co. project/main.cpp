#include <iostream>
#include "func.h"
using namespace std;

int main()
{
	TEAM mandelion;

	inputTeamData(mandelion);

	cout << mandelion.dateOfCreation.year << " " << mandelion.dateOfCreation.month << " " << mandelion.dateOfCreation.day;
}
