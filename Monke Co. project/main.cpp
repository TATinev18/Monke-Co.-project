#include <iostream>
#include "func.h"
#include "presentation.h"
using namespace std;

int main()
{
	openTeacherFile("teachers.txt");
	openStudentFile("students.txt");

	bool doPrintMenu;

	do
	{
		doPrintMenu = mainMenu();
	} while (doPrintMenu);

	studentFile.close();
	teacherFile.close();
}