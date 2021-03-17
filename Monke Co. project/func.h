#pragma once
#include <string>
#include <vector>
#include <fstream>

extern std::fstream teacherFile;
extern std::fstream studentFile;
extern std::fstream teamFile;

enum class GROUP_STATUS
{
	ACTIVE,
	INACTIVE,
	ARCHIVED
};

enum class INPUT_TYPE
{
	TEXT,
	EMAIL
};

enum class STUDENT_ROLES
{
	BACKEND,
	FRONTEND,
	MANAGER,
	QA
};

struct STUDENT
{
	int id;
	std::string firstName;
	std::string lastName;
	std::string studentClass;
	std::string email;
};

struct TEACHER
{
	int id;
	std::string firstName;
	std::string lastName;
	std::string email;
};

struct PARTICIPANT
{
	int studentId;
	STUDENT_ROLES role;
};

struct TEAM
{
	int id; 
	std::string name;
	std::string description;
	GROUP_STATUS status;
	std::string dateOfCreation;
	int teacherId;
	std::vector<PARTICIPANT> teamMembers =
	{
		{1, STUDENT_ROLES::BACKEND},
		{1, STUDENT_ROLES::BACKEND},
		{1, STUDENT_ROLES::BACKEND},
		{1, STUDENT_ROLES::BACKEND}
	};
};

void validateStringInput(std::string str, INPUT_TYPE type);

std::string addLeadingZeroes(int num);

std::string getSystemTime();

void inputStudentData(STUDENT& student);

void inputTeamData(TEAM& team);

void inputTeacherData(TEACHER& teacher);

bool openTeacherFile(std::string fileName);

bool openStudentFile(std::string fileName);

bool openTeamFile(std::string fileName);

std::vector<std::string> splitString(std::string delimitedString, std::string delimiter);

std::vector<TEACHER> readAndSaveTeachersInVector();

std::vector<STUDENT> readAndSaveStudentsInVector();

std::vector<TEAM> readAndSaveTeamsInVector();

void saveVectorInTeacherFile(std::vector<TEACHER> teachers);

void saveVectorInStudentFile(std::vector<STUDENT> students);

void saveVectorInTeamFile(std::vector<TEAM> teams);