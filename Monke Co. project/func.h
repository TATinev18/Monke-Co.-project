#pragma once
#include <string>
#include <vector>

enum class groupStatus
{
	ACTIVE,
	INACTIVE,
	ARCHIVED
};

enum class inputType
{
	TEXT,
	EMAIL
};

struct STUDENT
{
	std::string firstName;
	std::string lastName;
	int studentClass;
	std::string teamRole;
	std::string email;
};

struct TEAM
{
	std::string name;
	std::string description;
	std::string dateOfCreation;
	std::vector<STUDENT> teamMembers;
	groupStatus status;
};

struct TEACHER
{
	std::string firstName;
	std::string lastName;
	std::vector<TEAM> supervisedGroups;
	std::string email;
};

struct SCHOOL
{
	std::string name;
	std::string city;
	std::string address;
	std::vector<TEACHER> teachers;
	std::vector<TEAM> groups;
	std::vector<STUDENT> students;
};

void validateStringInput(std::string str, inputType type);
std::string addLeadingZeroes(int num);
std::string getSystemTime();
void inputStudentData(STUDENT& student);
void inputTeamData(TEAM& team);
