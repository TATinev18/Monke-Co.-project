#include <iostream>
#include "presentation.h"
#include "func.h"

using namespace std;

void mainMenu()
{
	int choice;
	STUDENT student;
	TEAM team;
	TEACHER teacher;

	cout << "\n+-------------------------+";
	cout << "\n| Welcome to Monke Co.    |";
	cout << "\n+-------------------------+";

	cout << "\n\n+-------------------------+";
	cout << "\n| 1. Input a student      |";
	cout << "\n| 2. Input a team         |";
	cout << "\n| 3. Input a teacher      |";
	cout << "\n|                         |";
	cout << "\n| 9. Exit                 |";
	cout << "\n+-------------------------+";

	cout << "\n\n\n| Choose an option: "; cin >> choice;

	if (choice != 1 or choice != 2 or choice != 3 or choice != 9)
	{
		cout << "\n! Invalid input! Please try again.\n";
	}

	else
	{
		switch (choice)
		{
		case 1:
			inputStudentData(student);
			break;
		case 2:
			inputTeamData(team);
			break;
		case 3:
			inputTeacherData(teacher);
			break;
		case 9:
			//Exit
			break;
		default:
			break;
		}
	}
}