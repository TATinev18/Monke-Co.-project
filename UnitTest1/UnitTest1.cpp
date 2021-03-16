#include "pch.h"
#include "CppUnitTest.h"
#include "../Monke Co. project/func.h"
#include "../Monke Co. project/presentation.h"
#include <vector>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(ShouldSuccessfullyDeleteStudent)
		{
			vector<STUDENT>students = { { 0, "Ivan", "Ivanov", "A", "IIIvanov18@monke.com" }, { 1, "Georgi", "Georgiev", "B", "GGGeorgiev18@monke.com" } };
			deleteStudent(students, 0);
			Assert::AreNotEqual(students[0].id, 0);
		};
		TEST_METHOD(ShouldSuccessfullyDeleteTeacher)
		{
			vector<TEACHER>teachers = { { 0, "Ivan", "Ivanov", "IIIvanov18@monke.com" }, { 1, "Georgi", "Georgiev", "GGGeorgiev18@monke.com" } };
			deleteTeacher(teachers, 0);
			Assert::AreNotEqual(teachers[0].id, 0);
		};
		TEST_METHOD(ShouldSuccessfullyDeleteTeam)
		{
			vector<TEAM>teams = { { 0, "Monke", "Monkeys", GROUP_STATUS::ACTIVE,  "5.02.2021", {{1, STUDENT_ROLES::MANAGER}}, 1} , { 1, "Monke", "Monkeys", GROUP_STATUS::ACTIVE,  "5.02.2021",{ {1, STUDENT_ROLES::MANAGER}}, 1 } };
			deleteTeam(teams, 0);
			Assert::AreNotEqual(teams[0].id, 0);
		};
	};
}
