#include <iostream>
#include "func.h"
#include "presentation.h"
using namespace std;

int main()
{
	/*vector<STUDENT> students;
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << endl;
		students.push_back(inputStudentData());
	}*/
	/*mainMenu();*/

	openFile("teachers.txt");

	bool doPrintMenu;

	do
	{
		doPrintMenu = mainMenu();
	} while (doPrintMenu);

	//Close file
}