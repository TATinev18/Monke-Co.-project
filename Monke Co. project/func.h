#pragma once
#include <string>
#include <vector>
#include <fstream>

//enum class groupStatus
//{
//	ACTIVE,
//	INACTIVE,
//	ARCHIVED
//};
//
//enum class inputType
//{
//	TEXT,
//	EMAIL
//};
//
//struct STUDENT
//{
//	int id;
//	std::string firstName;
//	std::string lastName;
//	int studentClass = 10;
//	std::string teamRole;
//	std::string email;
//};
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

//struct TEAM
//{
//	int id; 
//	std::string name;
//	std::string description;
//	std::string dateOfCreation;
//	std::vector<STUDENT> teamMembers;
//	groupStatus status;
//	TEACHER supervisor;
//	std::vector<int> supervisedGroups;
//};
//
//struct SCHOOL
//{
//	std::string name;
//	std::string city;
//	std::string address;
//	std::vector<TEACHER> teachers;
//	std::vector<TEAM> groups;
//	std::vector<STUDENT> students;
//};
//
//void validateStringInput(std::string str, inputType type);
//std::string addLeadingZeroes(int num);
//std::string getSystemTime();
//void inputStudentData(STUDENT& student);
//void inputTeamData(TEAM& team);
//void inputTeacherData(TEACHER& teacher);
