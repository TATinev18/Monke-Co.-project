#pragma once
#include <string>
#include <vector>
#include <fstream>

extern std::fstream teacherFile;
extern std::fstream studentFile;

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

bool openTeacherFile(std::string fileName);
bool openStudentFile(std::string fileName);
std::vector<TEACHER> readAndSaveTeachersInVector();
std::vector<STUDENT> readAndSaveStudentsInVector();

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