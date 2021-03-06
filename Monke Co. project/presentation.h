#pragma once
#include "func.h"

bool mainMenu();

void mainStudentMenu(std::vector<STUDENT> &students);

void mainTeacherMenu(std::vector<TEACHER> &teachers);

void mainTeamMenu(std::vector<TEAM> &teams);

STUDENT inputStudentMenu();

TEACHER inputTeacherMenu();

TEAM inputTeamMenu();

void deleteStudent(std::vector <STUDENT>& students, int id);

void deleteStudentMenu(std::vector <STUDENT>& students);

void deleteTeacher(std::vector <TEACHER>& teachers, int id);

void deleteTeacherMenu(std::vector <TEACHER>& teachers);

void deleteTeam(std::vector <TEAM>& teams, int id);

void deleteTeamMenu(std::vector <TEAM>& teams);

void editStudentFirstName(STUDENT& student, std::string newFirstName);

void editStudentLastName(STUDENT& student, std::string newLastName);

void editStudentClass(STUDENT& student, std::string newClass);

void editStudentEmail(STUDENT& student, std::string newEmail);

void editTeacherFirstName(TEACHER& teacher, std::string newFirstName);

void editTeacherLastName(TEACHER& teacher, std::string newLastName);

void editTeacherEmail(TEACHER& teacher, std::string newEmail);

void editTeamName(TEAM& team, std::string newName);

void editTeamDescription(TEAM& team, std:: string newDescription);

void editTeamStatus(TEAM& team, GROUP_STATUS newStatus);

void editTeamDateOfSetUp(TEAM& team, std::string newDate);

void editTeamTeacherId(TEAM& team, int newId);

std::string statusToString(GROUP_STATUS status);

std::string roleToString(STUDENT_ROLES roles);

STUDENT_ROLES stringToRole(std::string roleStr);

GROUP_STATUS stringToStatus(std::string statusStr);