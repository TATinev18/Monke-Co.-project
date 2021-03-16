#pragma once
#include "func.h"

bool mainMenu();
void mainStudentMenu(std::vector<STUDENT> &students);
void mainTeacherMenu(std::vector<TEACHER> &teachers);
void mainTeamMenu(std::vector<TEAM> &teams);
STUDENT inputStudentMenu();
TEACHER inputTeacherMenu();
TEAM inputTeamMenu();