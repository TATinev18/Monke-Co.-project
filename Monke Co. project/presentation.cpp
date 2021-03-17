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
	vector<STUDENT> students = readAndSaveStudentsInVector();
	vector<TEACHER> teachers = readAndSaveTeachersInVector();
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

void editStudentFirstName(STUDENT &student, string newFirstName)
{
	student.firstName = newFirstName;
}

void editStudentLastName(STUDENT& student, string newLastName)
{
	student.lastName = newLastName;
}

void editStudentClass(STUDENT& student, string newClass)
{
	student.studentClass = newClass;
}

void editStudentEmail(STUDENT& student, string newEmail)
{
	student.email = newEmail;
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
		students.push_back(inputStudentMenu());
		break;
	case 2:
		
		break;
	case 3:
		deleteStudentMenu(students);
		break;
	case 9:
		//Main menu
		break;
	default:
		break;
	}
}

void deleteStudent(vector <STUDENT>& students, int id)
{
	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].id == id)
		{
			students.erase(students.begin()+ i);
		}
	}
}

void deleteStudentMenu(vector <STUDENT> &students)
{
	cout << "\n+-------------------------+";
	cout << "\n| Delete Student Menu     |";
	cout << "\n+-------------------------+";

	int id; 

	cout << "\nEnter the id of the student that you want to delete: "; cin >> id;
	deleteStudent(students, id);
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

void deleteTeacher(vector <TEACHER>& teachers, int id)
{
	for (int i = 0; i < teachers.size(); i++)
	{
		if (teachers[i].id == id)
		{
			teachers.erase(teachers.begin() + i);
		}
	}
}

void deleteTeacherMenu(vector <TEACHER>& teachers)
{
	cout << "\n+-------------------------+";
	cout << "\n| Delete Teacher Menu     |";
	cout << "\n+-------------------------+";

	int id;

	cout << "\nEnter the id of the teacher that you want to delete: "; cin >> id;
	deleteTeacher(teachers, id);
}

string statusToString(GROUP_STATUS status)
{
	switch (status)
	{
	case GROUP_STATUS::ACTIVE: return "ACTIVE";
	case GROUP_STATUS::INACTIVE: return "INACTIVE";
	case GROUP_STATUS::ARCHIVED: return "ARCHIVED";
	default:
		break;
	}
}

string roleToString(STUDENT_ROLES roles)
{
	switch (roles)
	{
	case STUDENT_ROLES::BACKEND:
		return "BACK-END";
	case STUDENT_ROLES::FRONTEND:
		return "FRONT-END";
	case STUDENT_ROLES::MANAGER:
		return "MANAGER";
	case STUDENT_ROLES::QA:
		return "QA";
	default:
		break;
	}
}

void editTeacherFirstName(TEACHER& teacher, string newFirstName)
{
	teacher.firstName = newFirstName;
}

void editTeacherLastName(TEACHER& teacher, string newLastName)
{
	teacher.lastName = newLastName;
}

void editTeacherEmail(TEACHER& teacher, string newEmail)
{
	teacher.email = newEmail;
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
	    teachers.push_back(inputTeacherMenu());
		break;
	case 2:

		break;
	case 3:
		deleteTeacherMenu(teachers);
		break;
	case 9:
		//Main menu
		break;
	default:
		break;
	}
}

void deleteTeam(vector <TEAM> &teams, int id)
{
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams[i].id == id)
		{
			teams.erase(teams.begin() + i);
		}
	}
}

void deleteTeamMenu(vector <TEAM>& teams)
{
	cout << "\n+-------------------------+";
	cout << "\n| Delete Team Menu        |";
	cout << "\n+-------------------------+";

	int id;

	cout << "\nEnter the id of the team that you want to delete: "; cin >> id;
	deleteTeam(teams, id);
}

void editTeamName(TEAM& team, string newName)
{
	team.name = newName;
}

void editTeamDescription(TEAM& team, string newDescription)
{
	team.description = newDescription;
}

void editTeamStatus(TEAM& team, GROUP_STATUS newStatus)
{
	team.status = newStatus;
}

void editTeamDateOfSetUp(TEAM& team, string newDate)
{
	team.dateOfCreation = newDate;
}

// editTeamMember()

void editTeamTeacherId(TEAM& team, int newId)
{
	team.teacherId = newId;
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
		teams.push_back(inputTeamMenu());
		break;
	case 2:

		break;
	case 3:
		deleteTeamMenu(teams);
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

STUDENT_ROLES stringToRole(string roleStr)
{
	STUDENT_ROLES role;

	if (roleStr == "MANAGER")
	{
		role = STUDENT_ROLES::MANAGER;
	}
	else if (roleStr == "QA")
	{
		role = STUDENT_ROLES::QA;
	}
	else if (roleStr == "BACK-END")
	{
		role = STUDENT_ROLES::BACKEND;
	}
	else if (roleStr == "FRONT-END")
	{
		role = STUDENT_ROLES::FRONTEND;
	}

	return role;
}

GROUP_STATUS stringToStatus(string statusStr)
{
	GROUP_STATUS status;

	if (statusStr == "ACTIVE")
	{
		status = GROUP_STATUS::ACTIVE;
	}
	else if (statusStr == "INACTIVE")
	{
		status = GROUP_STATUS::INACTIVE;
	}
	else if (statusStr == "ARCHIVED")
	{
		status = GROUP_STATUS::ARCHIVED;
	}

	return status;
}