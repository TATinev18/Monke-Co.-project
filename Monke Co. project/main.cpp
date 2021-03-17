#include <iostream>
#include "func.h"
#include "presentation.h"
using namespace std;

int main()
{
	openTeacherFile("teachers.txt");
	openStudentFile("students.txt");
	openTeamFile("teams.txt");

	saveVectorInTeamFile
	(
		{
			{
				1,"CryptoZargan","Lorem ipsum dolor sit amet",GROUP_STATUS::ACTIVE,
				"2021-03-17",1,
				{
					{
						{2,STUDENT_ROLES::BACKEND},
						{2,STUDENT_ROLES::FRONTEND},
						{2,STUDENT_ROLES::QA},
						{2,STUDENT_ROLES::MANAGER}
					}
				}
			}
		}
	);

	bool doPrintMenu;

	do
	{
		doPrintMenu = mainMenu();
	} while (doPrintMenu);

	studentFile.close();
	teacherFile.close();
	teamFile.close();
}