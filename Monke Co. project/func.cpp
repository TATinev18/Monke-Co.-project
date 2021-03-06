#include <iostream>
#include <fstream>
#include <regex>
#include <ctime>
#include <fstream>
#include "func.h"
#include "presentation.h"
using namespace std;

fstream teacherFile;
fstream studentFile;
fstream teamFile;

void validateStringInput(string str, INPUT_TYPE type)
{
	bool flag = false;
	switch (type)
	{
	case INPUT_TYPE::TEXT:
		for (size_t i = 0; i < str.size(); i++)
		{
			if (isdigit(str[i])) throw invalid_argument("Incorrect text input.");
		}
		break;
	case INPUT_TYPE::EMAIL:
		const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		flag = regex_match(str, pattern);

		if (!flag)
		{
			throw invalid_argument("Incorrect e-mail input.");
		}

		break;
	}
}

string addLeadingZeroes(int n)
{
	string str = "";
	if (n < 10 or n>0)
	{
		str = "0" + to_string(n);
	}
	return str;
}

string getSystemTime()
{
	struct tm newtime;
	time_t now = time(0);
	string str;
	localtime_s(&newtime,&now);

	int year = 1900 + newtime.tm_year;
	int month = 1 + newtime.tm_mon;
	int day = newtime.tm_mday;

	string sYear = to_string(year);
	string sMonth = addLeadingZeroes(month);
	string sDay = addLeadingZeroes(day);

	str = sYear + "-" + sMonth + "-" + sDay;

	return str;
}

//void inputStudentData(STUDENT& student)
//{
//	cout << "| Enter a student's name: "; cin >> student.firstName >> student.lastName;
//	string fullName = student.firstName + student.lastName;
//	validateStringInput(fullName, INPUT_TYPE::TEXT);
//
//	cout << "| Enter the student's class: "; cin >> student.studentClass;
//
//	if (student.studentClass < 1 or student.studentClass > 12)
//	{
//		throw invalid_argument("! Invalid student class");
//	}
//
//	cout << endl;
//
//	cin.ignore();
//
//    cout << "| Enter the student's group role: "; getline(cin, student.teamRole);
//	validateStringInput(student.teamRole, INPUT_TYPE::TEXT);
//
//	cout << endl;
//
//	cout << "| Enter the student's email: "; cin >> student.email;
//	validateStringInput(student.email, INPUT_TYPE::EMAIL);
//
//	cout << endl;
//}

void inputTeamData(TEAM& team)
{
	int choice;

	cout << "| Enter the team's name: "; getline(cin, team.name);

	cout << "| Enter the team's description: "; getline(cin, team.description);

	team.dateOfCreation = getSystemTime();

	/*cout << "| Enter the name of your mentor: "; cin >> team.supervisor.firstName >> team.supervisor.lastName;*/

	// Different type of validation required

	cout << "| Pick the team's status. Available options are: \n\n";

	cout << "+--------------+\n";
	cout << "| 1. ACTIVE    |\n";
	cout << "| 2. INACTIVE  |\n";
	cout << "| 3. ARCHIVED  |\n";
	cout << "+--------------+\n\n";

	cout << "| Enter your choice: "; cin >> choice;

	cout << endl;

	switch (choice)
	{
	case 1:
		cout << "| Team status set to: ACTIVE\n";
		team.status = GROUP_STATUS::ACTIVE;
		break;
	case 2:
		cout << "| Team status set to: INACTIVE\n";
		team.status = GROUP_STATUS::INACTIVE;
		break;
	case 3:
		cout << "| Team status set to: ARCHIVED\n";
		team.status = GROUP_STATUS::ARCHIVED;
		break;
	default:
		throw invalid_argument("Incorrect input\n");
	}
}

void inputTeacherData(TEACHER& teacher)
{
	cout << "| Enter the teacher's name: "; cin >> teacher.firstName >> teacher.lastName;
	
	string fullName = teacher.firstName + teacher.lastName;
	validateStringInput(fullName, INPUT_TYPE::TEXT);

	cout << "| Enter the teacher's email: "; cin >> teacher.email;
	validateStringInput(teacher.email, INPUT_TYPE::EMAIL);

	cout << "| Select the team this teacher supervises: ";
	// W.I.P


}

bool openTeacherFile(string fileName)
{
	teacherFile.open(fileName, ios::out | ios::in | ios::ate);

	return teacherFile.is_open();
}

bool openStudentFile(string fileName)
{
	studentFile.open(fileName, ios::out | ios::in | ios::ate);

	return studentFile.is_open();
}

bool openTeamFile(string fileName)
{
	teamFile.open(fileName, ios::out | ios::in | ios::ate);

	return teamFile.is_open();
}

vector<string> splitString(string delimitedString, string delimiter)
{
	size_t index;
	string token;
	vector<string> result;
	do
	{
		index = delimitedString.find(delimiter);

		token = delimitedString.substr(0, index);

		result.push_back(token);

		delimitedString.erase(0, index + delimiter.size());
	} while (index != string::npos);

	return result;
}

vector<TEACHER> readAndSaveTeachersInVector()
{
	vector<TEACHER> teachers;
	string arr[4];
	TEACHER teacherRecord;

	teacherFile.seekg(ios::beg, 0);

	if (teacherFile.is_open())
	{
		while (!teacherFile.eof())
		{
			for (int i = 0; i < 4; i++)
			{
				getline(teacherFile, arr[i], ',');
			}

			// atoi converts a string to integer
			// c_str converts a string to cstring (const char *)
			teacherRecord.id = atoi(arr[0].c_str());
			teacherRecord.firstName = arr[1];
			teacherRecord.lastName = arr[2];
			teacherRecord.email = arr[3];

			teachers.push_back(teacherRecord);
		}
		teachers.pop_back();
	}

	return teachers;
}

vector<STUDENT> readAndSaveStudentsInVector()
{
	vector<STUDENT> students;
	string arr[5];
	STUDENT studentRecord;

	studentFile.seekg(ios::beg, 0);

	if (studentFile.is_open())
	{
		while (!studentFile.eof())
		{
			for (int i = 0; i < 5; i++)
			{
				getline(studentFile, arr[i], ',');
			}

			// atoi converts a string to integer
			// c_str converts a string to cstring (const char *)
			studentRecord.id = atoi(arr[0].c_str());
			studentRecord.firstName = arr[1];
			studentRecord.lastName = arr[2];
			studentRecord.studentClass = arr[3];
			studentRecord.email = arr[4];

			students.push_back(studentRecord);
		}
		students.pop_back();
	}

	return students;
}

vector<TEAM> readAndSaveTeamsInVector()
{
	vector<TEAM> teams;
	string arr[5];
	string teamMembers[4];
	TEAM teamRecord;
	vector<string> members;

	teamFile.seekg(ios::beg, 0);

	if (teamFile.is_open())
	{
		while (!teamFile.eof())
		{
			for (int i = 0; i < 5; i++)
			{
				getline(teamFile, arr[i], ',');
			}

			// atoi converts a string to integer
			// c_str converts a string to cstring (const char *)
			teamRecord.id = atoi(arr[0].c_str());
			teamRecord.name = arr[1];
			teamRecord.description = arr[2];
			teamRecord.status = stringToStatus(arr[3]);
			teamRecord.dateOfCreation = arr[4];

			for (int i = 0; i < 4; i++)
			{
				getline(teamFile, teamMembers[i], '|');
			}

			for (int i = 0; i < 4; i++)
			{
				members = splitString(teamMembers[i], "~");

				for (int j = 0; j < 4; j++)
				{
					teamRecord.teamMembers[j].studentId = atoi(members[0].c_str());
					teamRecord.teamMembers[j].role = stringToRole(members[3]);
				}
			}

			teams.push_back(teamRecord);
		}
		teams.pop_back();
	}

	return teams;
}

void saveVectorInTeacherFile(vector<TEACHER> teachers)
{
	if (teacherFile.is_open())
	{
		for (size_t i = 0; i < teachers.size(); i++)
		{
			teacherFile << teachers[i].id << "," << teachers[i].firstName
			<< "," << teachers[i].lastName << "," << teachers[i].email << "," << endl;
		}
	}
}

void saveVectorInStudentFile(vector<STUDENT> students)
{
	if (studentFile.is_open())
	{
		for (size_t i = 0; i < students.size(); i++)
		{
			studentFile << students[i].id << "," << students[i].firstName
				<< "," << students[i].lastName << ","<<students[i].studentClass
				<< ","<< students[i].email << "," << endl;
		}
	}
}

void saveVectorInTeamFile(vector<TEAM> teams)
{
	if (teamFile.is_open())
	{
		for (size_t i = 0; i < teams.size(); i++)
		{
			teamFile << teams[i].id << "," << teams[i].name
				<< "," << teams[i].description << "," << statusToString(teams[i].status)
				<< "," << teams[i].dateOfCreation << "," << teams[i].teacherId << ",";

			for (size_t j = 0; j < 4; j++)
			{
				teamFile << "|" << teams[i].teamMembers[j].studentId << "~" << roleToString(teams[i].teamMembers[j].role) << "|";
			}

			teamFile << endl;
		}
	}
}