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

	openTeacherFile("teachers.txt");
	openStudentFile("students.txt");

	saveVectorInTeacherFile({ { 6,"Pena","Vulcheva","pena.pornoto69@a.a" } });

	bool doPrintMenu;

	do
	{
		doPrintMenu = mainMenu();
	} while (doPrintMenu);

	studentFile.close();
	teacherFile.close();
}