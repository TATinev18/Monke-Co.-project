#include <iostream>
#include <fstream>
#include <regex>
#include "func.h"
using namespace std;

void validateStringInput(string str, inputType type)
{
	bool flag = false;
	switch (type)
	{
	case inputType::TEXT:
		for (size_t i = 0; i < str.size(); i++)
		{
			if (isdigit(str[i])) throw invalid_argument("Incorrect text input.");
		}
		break;
	case inputType::EMAIL:
		const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		flag = regex_match(str, pattern);

		if (!flag)
		{
			throw invalid_argument("Incorrect e-mail input.");
		}

		break;
	}
}

void inputStudentData(STUDENT& student)
{
	cout << "Enter the student's first name: "; cin >> student.firstName;

	validateStringInput(student.firstName, inputType::TEXT);

	cout << endl;

	cout << "Enter the student's last name: "; cin >> student.lastName;

	validateStringInput(student.lastName, inputType::TEXT);

	cout << endl;

	cout << "Enter the student's class: "; cin >> student.studentClass;

	if (student.studentClass < 1 or student.studentClass>12)
	{
		throw invalid_argument("Incorrect student class.");
	}

	cout << endl;

	cin.ignore();

	cout << "Enter the student's group role: "; getline(cin, student.groupRole);

	validateStringInput(student.groupRole, inputType::TEXT);

	cout << endl;

	cout << "Enter the student's email: "; cin >> student.email;

	validateStringInput(student.email, inputType::EMAIL);
	cout << endl;
}