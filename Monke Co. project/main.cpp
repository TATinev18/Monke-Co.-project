#include <iostream>
#include "func.h"
#include "presentation.h"
using namespace std;

int main()
{
	openTeacherFile("teachers.txt");
	openStudentFile("students.txt");
	openStudentFile("teams.txt");

	bool doPrintMenu;

	do
	{
		doPrintMenu = mainMenu();
	} while (doPrintMenu);

	studentFile.close();
	teacherFile.close();
	teamFile.close();
}