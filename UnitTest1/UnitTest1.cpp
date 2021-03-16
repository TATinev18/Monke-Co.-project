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
		TEST_METHOD(ShouldSuccessfullyEditStudentFirstName)
		{
			STUDENT student = {1, "ivan", "ivanov", "a", "iiivanov18@monke.com"};
			string newName = "dimitur";
			editStudentFirstName(student, newName);
			Assert::AreEqual(newName, student.firstName);
		};
		TEST_METHOD(ShouldSuccessfullyEditStudentLastName)
		{
			STUDENT student = { 1, "ivan", "ivanov", "a", "iiivanov18@monke.com" };
			string newName = "dimitrov";
			editStudentLastName(student, newName);
			Assert::AreEqual(newName, student.lastName);
		};
		TEST_METHOD(ShouldSuccessfullyEditStudentEmail)
		{
			STUDENT student = { 1, "ivan", "ivanov", "a", "iiivanov18@monke.com" };
			string newName = "monkey18@monke.com";
			editStudentEmail(student, newName);
			Assert::AreEqual(newName, student.email);
		};
		TEST_METHOD(ShouldSuccessfullyEditStudentClass)
		{
			STUDENT student = { 1, "ivan", "ivanov", "a", "iiivanov18@monke.com" };
			string newName = "B";
			editStudentClass(student, newName);
			Assert::AreEqual(newName, student.studentClass);
		};
		TEST_METHOD(ShouldSuccessfullyEditTeacherFirstName)
		{
			TEACHER teacher = { 1, "ivan", "ivanov", "iiivanov18@monke.com" };
			string newName = "Stoyan";
			editTeacherFirstName(teacher, newName);
			Assert::AreEqual(newName, teacher.firstName);
		};
		TEST_METHOD(ShouldSuccessfullyEditTeacherLastName)
		{
			TEACHER teacher = { 1, "ivan", "ivanov", "iiivanov18@monke.com" };
			string newName = "Stoyanov";
			editTeacherLastName(teacher, newName);
			Assert::AreEqual(newName, teacher.lastName);
		};
		TEST_METHOD(ShouldSuccessfullyEditTeacherEmail)
		{
			TEACHER teacher = { 1, "ivan", "ivanov", "iiivanov18@monke.com" };
			string newName = "monkey18@monke.com";
			editTeacherEmail (teacher, newName);
			Assert::AreEqual(newName, teacher.email);
		};
	};
}
