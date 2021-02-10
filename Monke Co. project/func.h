#pragma once
#include <string>
#include <vector>

enum class groupStatus
{
	ACTIVE,
	INACTIVE,
	ARCHIVED
};

struct STUDENT
{
	std::string firstName;
	std::string lastName;
	int studentClass;
	std::string groupRole;
	std::string email;
};

struct GROUP
{
	std::string name;
	std::string description;
	std::string dateOfCreation;
	std::vector<STUDENT> groupMembers;
	groupStatus status;
};

struct TEACHER
{
	std::string firstName;
	std::string lastName;
	std::vector<GROUP> supervisedGroups;
	std::string email;
};

struct SCHOOL
{
	std::string name;
	std::string city;
	std::string address;
	std::vector<TEACHER> teachers;
	std::vector<GROUP> groups;
	std::vector<STUDENT> students;
};