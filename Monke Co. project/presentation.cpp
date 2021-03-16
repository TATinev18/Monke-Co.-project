#include <iostream>
#include "presentation.h"
#include "func.h"

using namespace std;

bool mainMenu()
{
	int choice;
	string schoolName;
	string schoolAddress;
	string schoolCity;
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
		mainStudentMenu(students);
		break;
	case 2:
		mainTeacherMenu(teachers);
		break;
	case 3:
		mainTeamMenu(teams);
		break;
	case 9:
		return false;
		break;
	default:
		cout << "\n! Invalid input! Please try again.\n";
		break;
	}
}

void mainStudentMenu(vector<STUDENT> &students)
{
	int choice;

	cout << "\n+-------------------------+";
	cout << "\n| Student Menu            |";
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

STUDENT inputStudentMenu()
{
	cout << "\n+-------------------------+";
	cout << "\n| Input Student Menu      |";
	cout << "\n+-------------------------+";

	STUDENT student;

	cout << "\nEnter the student's first name: "; cin >> student.firstName;
	cout << "Enter the student's last name: "; cin >> student.lastName;
	cout << "Enter the student's class: "; cin >> student.studentClass;
	cout << "Enter the student's email: "; cin >> student.email;

	return student;
}

void mainTeacherMenu(vector<TEACHER> &teachers)
{
	int choice;

	cout << "\n+-------------------------+";
	cout << "\n| Teacher Menu            |";
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

TEACHER inputTeacherMenu()
{
	cout << "\n+-------------------------+";
	cout << "\n| Input Teacher Menu      |";
	cout << "\n+-------------------------+";

	TEACHER teacher;

	cout << "\nEnter the teacher's first name: "; cin >> teacher.firstName;
	cout << "Enter the teacher's last name: "; cin >> teacher.lastName;
	cout << "Enter the teacher's email: "; cin >> teacher.email;

	return teacher;
}

void mainTeamMenu(vector<TEAM> &teams)
{
	int choice;

	cout << "\n+-------------------------+";
	cout << "\n| Team Menu               |";
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

TEAM inputTeamMenu()
{
	cout << "\n+-------------------------+";
	cout << "\n| Input Team Menu         |";
	cout << "\n+-------------------------+";

	TEAM team;
	PARTICIPANT member;
	int teamMemberCount;

	cout << "\nEnter the team's name: "; cin >> team.name;
	cin.ignore();
	cout << "Enter the team's description: "; getline(cin, team.description);
	/*cout << "Enter the student's class: "; cin >> team.status;*/
	cout << "Enter the team's date of creation: "; cin >> team.dateOfCreation;

	cout << "Enter how many members are in the team: "; cin >> teamMemberCount;

	for (int i = 0; i < teamMemberCount; i++)
	{
		cout << "Enter data for member " << i + 1 << ": \n";
		cout << "Enter the student's id: "; cin >> member.studentId;
		/*cout << "Enter the student's role: "; cin >> member.role;*/
		team.teamMembers.push_back(member);
	}

	cout << "Enter the teacher's id: "; cin >> team.teacherId;

	return team;
}