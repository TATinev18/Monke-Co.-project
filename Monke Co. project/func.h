#pragma once
#include <string>
#include <vector>
#include <fstream>

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

	std::fstream file;
	bool openFile(std::string fileName);
	//std::vector<TEACHER> readAndSaveInVector();
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
	std::vector<PARTICIPANT> teamMembers;
	int teacherId;
};

void validateStringInput(std::string str, INPUT_TYPE type);
std::string addLeadingZeroes(int num);
std::string getSystemTime();
void inputStudentData(STUDENT& student);
void inputTeamData(TEAM& team);
void inputTeacherData(TEACHER& teacher);