#include <iostream>
#include "presentation.h"
#include "func.h"

using namespace std;

bool mainMenu()
{
	int choice;
	vector<STUDENT> students = {};
	vector<TEACHER> teachers = {};
	vector<TEAM> teams = {};

	cout << "\n+-------------------------+";
	cout << "\n| Welcome to Monke Co.    |";
	cout << "\n+-------------------------+";

	cout << "\n\n+-------------------------+";
	cout << "\n| 1. Student              |";
	cout << "\n| 2. Teacher              |";
	cout << "\n| 3. Team                 |";
	cout << "\n|                         |";
	cout << "\n| 9. Exit                 |";
	cout << "\n+-------------------------+";

	cout << "\n\n\n| Choose an option: "; cin >> choice;

	switch (choice)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 9:
		return false;
		break;
	default:
		cout << "\n! Invalid input! Please try again.\n";
		break;
	}
}

void mainStudentMenu()
{
	int choice;

	cout << "\n+-------------------------+";
	cout << "\n| Welcome to Monke Co.    |";
	cout << "\n+-------------------------+";

	cout << "\n\n+-------------------------+";
	cout << "\n| 1. Input a student      |";
	cout << "\n| 2. Edit a student       |";
	cout << "\n| 3. Delete a student     |";
	cout << "\n|                         |";
	cout << "\n| 9. Back                 |";
	cout << "\n+-------------------------+";

	cout << "\n\n\n| Choose an option: "; cin >> choice;

	switch (choice)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 9:
		//Main menu
		break;
	default:
		break;
	}
}

void mainTeacherMenu()
{
	int choice;

	cout << "\n+-------------------------+";
	cout << "\n| Welcome to Monke Co.    |";
	cout << "\n+-------------------------+";

	cout << "\n\n+-------------------------+";
	cout << "\n| 1. Input a teacher      |";
	cout << "\n| 2. Edit a teacher       |";
	cout << "\n| 3. Delete a teacher     |";
	cout << "\n|                         |";
	cout << "\n| 9. Back                 |";
	cout << "\n+-------------------------+";

	cout << "\n\n\n| Choose an option: "; cin >> choice;

	switch (choice)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 9:
		//Main menu
		break;
	default:
		break;
	}
}

void mainTeamMenu()
{
	int choice;

	cout << "\n+-------------------------+";
	cout << "\n| Welcome to Monke Co.    |";
	cout << "\n+-------------------------+";

	cout << "\n\n+-------------------------+";
	cout << "\n| 1. Input a team         |";
	cout << "\n| 2. Edit a team          |";
	cout << "\n| 3. Delete a team        |";
	cout << "\n|                         |";
	cout << "\n| 9. Back                 |";
	cout << "\n+-------------------------+";

	cout << "\n\n\n| Choose an option: "; cin >> choice;

	switch (choice)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 9:
		//Main menu
		break;
	default:
		break;
	}
}